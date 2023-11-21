package com.onlyoffice;

import java.util.Optional;
import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/**
 * 
 * @author nsenz
 *
 */
public final class DocBuilder {
	private Long ptr;
	private ReadWriteLock lock = new ReentrantReadWriteLock();
	private volatile boolean hasFile;
	private volatile DocBuilderContext ctx;

	private DocBuilder() {
		this.ptr = allocate0();
		this.hasFile = false;
	}

	// Java methods
	
	/**
	 * 
	 * @return
	 * @throws RuntimeException
	 */
	public static DocBuilder create() throws RuntimeException {
		if (!DocBuilderInitializer.isInitialized())
			throw new RuntimeException("Please initialize your document builder with DocBuilderInitializer class before allocating a new DocBuilder instance");
		
		DocBuilder instance = new DocBuilder();
		
		String directory = DocBuilderInitializer.getDirectory();
		if (directory != null) {
			instance.setProperty("--work-directory", directory);
		}
		
		if (instance.getVersion() == null) {
			instance.finalize();
			throw new IllegalArgumentException("Could not get DocBuilder version. Invalid directory path");
		}
		
		return instance;
	}

	/**
	 * 
	 * @param path
	 * @return
	 */
	public boolean run(String path) {
		if (this.ptr != null && path != null && !path.isBlank())
			return run0(this.ptr, path);
		return false;
	}

	/**
	 * 
	 * @param text
	 * @return
	 */
	public boolean runText(String text) {
		if (this.ptr != null && text != null && !text.isBlank())
			return runText0(this.ptr, text);
		return false;
	}

	/**
	 * 
	 * @param path
	 * @param params
	 * @return
	 */
	public int openFile(String path, String params) {
		try {
			this.lock.writeLock().lock();
			if (this.ptr != null && !this.hasFile && path != null && !path.isBlank() 
					&& params != null && !params.isBlank()) {
				int res = openFile0(this.ptr, path, params);
				if (res > 0) {
					this.hasFile = true;
					this.ctx = this.refreshContext();
				}
				return res;
			}
			return -1;
		} finally {
			this.lock.writeLock().unlock();
		}
	}


	/**
	 * 
	 * @param type
	 * @return
	 */
	public boolean createFile(FileType type) {
		try {			
			this.lock.writeLock().lock();
			if (this.ptr != null && !this.hasFile && createFile0(this.ptr, type.getCode())) {
				if (this.hasFile) return false;
				this.hasFile = true;
				this.ctx = this.refreshContext();
			}
			return false;
		} finally {
			this.lock.writeLock().unlock();			
		}
	}


	/**
	 * 
	 * @param type
	 * @param path
	 * @return
	 */
	public boolean saveFile(FileType type, String path) {
		try {
			this.lock.readLock().lock();
			if (this.ptr != null && path != null && !path.isBlank() && this.hasFile)
				return saveFile0(this.ptr, type.getCode(), path);
			return false;
		} finally {
			this.lock.readLock().unlock();
		}
	}


	/**
	 * 
	 * @param type
	 * @param path
	 * @param params
	 * @return
	 */
	public boolean saveFile(int type, String path, String params) {
		try {
			this.lock.readLock().lock();
			if (this.ptr != null && path != null && !path.isBlank() 
					&& params != null && !params.isBlank() && this.hasFile)
				return saveFile0(this.ptr, type, path, params);
			return false;
		} finally {
			this.lock.readLock().unlock();
		}
	}

	/**
	 * 
	 */
	public void closeFile() {
		if (this.ptr != null) {
			this.lock.writeLock().lock();
			if (this.hasFile) {				
				closeFile0(this.ptr);
				this.hasFile = false;
				this.ctx.finalize();
			}
			this.lock.writeLock().unlock();
		}
	}

	/**
	 * 
	 * @param command
	 * @return
	 */
	public boolean executeCommand(String command) {
		if (this.ptr != null && command != null && !command.isBlank())
			return executeCommand0(this.ptr, command);
		return false;
	}

	/**
	 * 
	 * @param ptr
	 * @param command
	 * @param retValue
	 * @return
	 */
	public boolean executeCommand(String command, DocBuilderValue retValue) {
		try {			
			if (this.ptr != null && !command.isBlank() && retValue.getPtr() != null)
				return executeCommand0(this.ptr, command, retValue.getPtr());
			throw new NullPointerException();
		} catch(Exception e) {			
			return false;
		}
	}

	/**
	 * 
	 * @param ptr
	 * @param path
	 * @param value
	 * @param append
	 */
	public void writeData(String path, String value, boolean append) {
		this.lock.readLock().lock();
		if (this.ptr != null && this.hasFile && path != null 
				&& !path.isBlank() && value != null && !value.isBlank()) 
			writeData0(this.ptr, path, value, append);
		this.lock.readLock().unlock();
	}

	/**
	 * 
	 * @param folder
	 */
	public void setTmpFolder(String folder) {
		if (this.ptr != null && folder != null && !folder.isBlank())
			setTmpFolder0(this.ptr, folder);
	}

	/**
	 * 
	 * @param param
	 * @param value
	 */
	public void setProperty(String param, String value) {
		if (this.ptr != null && param != null && !param.isBlank() && value != null 
				&& !value.isBlank())
			setProperty0(this.ptr, param, value);
	}

	/**
	 * 
	 * @return
	 */
	public boolean isSaveWithDoctrendererMode() {
		if (this.ptr != null)
			return isSaveWithDoctrendererMode0(this.ptr);
		return false;
	}

	/**
	 * 
	 * @return
	 */
	public String getVersion() {
		if (this.ptr != null) return getVersion0(this.ptr);
		return null;
	}

	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderContext> getContext() {
		try {
			this.lock.writeLock().lock();
			if (this.ptr != null && this.hasFile && this.ctx == null) {
				long cptr = getContext0(ptr);
				if (cptr == -1) {
					this.ctx = new DocBuilderContext(cptr);				
					return Optional.of(this.ctx);
				}
			}
			if (this.ptr != null && this.ctx != null) return Optional.of(ctx);
			return Optional.empty();
		} finally {
			this.lock.writeLock().lock();
		}
	}

	/**
	 *
	 */
	protected void finalize() {
		if (this.ctx != null)
			this.ctx.finalize();
		destroy0(this.ptr);
		free0(this.ptr);
		this.ptr = null;
	}
	
	private DocBuilderContext refreshContext() {
		long cptr = getContext0(ptr);
		return new DocBuilderContext(cptr);
	}

	// Native methods

	private static native long allocate0();

	private static native void free0(long ptr);

	private native void destroy0(long ptr);

	private native boolean run0(long ptr, String path);

	private native boolean runText0(long ptr, String text);
	
	private native int openFile0(long ptr, String path, String params);

	private native boolean createFile0(long ptr, int type);

	private native boolean saveFile0(long ptr, int type, String path);

	private native boolean saveFile0(long ptr, int type, String path, String params);

	private native void closeFile0(long ptr);

	private native boolean executeCommand0(long ptr, String command);

	private native boolean executeCommand0(long ptr, String command, long retValue);

	private native void writeData0(long ptr, String path, String value, boolean append);

	private native void setTmpFolder0(long ptr, String folder);

	private native void setProperty0(long ptr, String param, String value);

	private native boolean isSaveWithDoctrendererMode0(long ptr);

	private native long getContext0(long ptr);
	
	private native String getVersion0(long ptr);
}