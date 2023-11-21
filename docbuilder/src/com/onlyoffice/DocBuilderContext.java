package com.onlyoffice;

import java.util.Optional;

/**
 * 
 * @author nsenz
 *
 */
public final class DocBuilderContext {
	private Long ptr;
	private DocBuilderContext other;
	private DocBuilderContextScope scope;

	/**
	 * 
	 * @param ptr
	 */
	protected DocBuilderContext(long ptr) {
		this.ptr = ptr;
		this.scope = new DocBuilderContextScope(createScope0(this.ptr));
	}
	
	/**
	 * 
	 * @param ptr
	 * @param other
	 */
	protected DocBuilderContext(long ptr, long other) {
		this.ptr = ptr;
		this.other = new DocBuilderContext(other);
		this.scope = new DocBuilderContextScope(createScope0(this.ptr));
	}

	// Java methods

	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderValue> createUndefined() {
		if (this.ptr != null) {
			long p = createUndefined0(this.ptr);
			if (p != -1)
				return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}

	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderValue> createNull() {
		if (this.ptr != null) {
			long p = createNull0(this.ptr);
			if (p != -1)
				return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}

	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderValue> createObject() {
		if (this.ptr != null) {
			long p = createObject0(this.ptr);
			if (p != -1)
				return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}

	/**
	 * 
	 * @param length
	 * @return
	 */
	public Optional<DocBuilderValue> createArray(int length) {
		if (this.ptr != null) {
			long p = createArray0(this.ptr, length);
			if (p != -1)
				return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @param buffer
	 * @return
	 */
	public Optional<DocBuilderValue> createTypedArray(byte[] buffer) {
		if (this.ptr != null) {
			long p = createTypedArray0(this.ptr, buffer);
			if (p != -1)
				return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}

	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderValue> createGlobal() {
		if (ptr != null) {
			long p = createGlobal0(ptr);
			if (p != -1)
				return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}

	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderContextScope> createScope() {
		if (this.ptr != null) {
			return Optional.of(this.scope);
		}
		return Optional.empty();
	}

	/**
	 * 
	 * @return
	 */
	public boolean isError() {
		if (this.ptr == null) return true;
		return isError0(this.ptr);
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isClosed() {
		return this.ptr == null;
	}

	/**
	 * 
	 */
	protected void finalize() {
		if (this.other != null) {
			this.other.finalize();
			this.other = null;
		}
		
		if (this.scope != null) {
			this.scope.finalize();
		}
		
		if (this.ptr != null) {
			free0(this.ptr);
			this.ptr = null;
		}
	}

	// Native methods

	private native void free0(long ptr);

	private native long createUndefined0(long ptr);
	
	private native long createNull0(long ptr);
	
	private native long createObject0(long ptr);
	
	private native long createArray0(long ptr, long length);
	
	private native long createTypedArray0(long ptr, byte[] buffer);
	
	private native long createGlobal0(long ptr);
	
	private native long createScope0(long ptr);
	
	private native boolean isError0(long ptr);
}