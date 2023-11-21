package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
public final class DocBuilderContextScope {
	private Long ptr;
	private DocBuilderContextScope other;
	
	/**
	 * 
	 * @param ptr
	 */
	protected DocBuilderContextScope(long ptr) {
		this.ptr = ptr;
	}
	
	/**
	 * 
	 * @param ptr
	 * @param other
	 */
	protected DocBuilderContextScope(long ptr, long other) {
		this.ptr = ptr;
		this.other = new DocBuilderContextScope(other);
	}
	
	/**
	 * 
	 */
	public void close() {
		if (ptr != null) close0(ptr);
	}
	
	/**
	 * 
	 */
	protected void finalize() {
		if (other != null) {
			other.finalize();
			other = null;
		}
		
		if (ptr != null) {
			close0(ptr);
			free0(ptr);
			ptr = null;
		}
	}
	
	// Native methods
	
	private native void free0(long ptr);
	
	private native void close0(long ptr);
}