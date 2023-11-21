package com.onlyoffice;

import java.util.Optional;

/**
 * 
 * @author nsenz
 *
 */
public final class DocBuilderValue {
	private Long ptr;
	private DocBuilderValue other;
	
	protected Long getPtr() {
		return this.ptr;
	}
	
	/**
	 * 
	 * @param ptr
	 */
	protected DocBuilderValue(long ptr) {
		this.ptr = ptr;
	}
	
	/**
	 * 
	 * @param ptr
	 * @param other
	 */
	protected DocBuilderValue(long ptr, long other) {
		this.ptr = ptr;
		this.other = new DocBuilderValue(other);
	}
	
	/**
	 * 
	 * @param value
	 */
	protected DocBuilderValue(boolean value) {
		this.ptr = allocate0(value);
	}
	
	/**
	 * 
	 * @param value
	 */
	protected DocBuilderValue(int value) {
		this.ptr = allocate0(value);
	}
	
	/**
	 * 
	 * @param value
	 */
	protected DocBuilderValue(double value) {
		this.ptr = allocate0(value);
	}
	
	/**
	 * 
	 * @param value
	 */
	protected DocBuilderValue(String value) {
		this.ptr = allocate0(value);
	}

	/**
	 * 
	 * @return
	 */
	public static DocBuilderValue create() {
		return new DocBuilderValue(allocate0());
	}
	
	/**
	 * 
	 * @param other
	 * @return
	 */
	public static Optional<DocBuilderValue> create(DocBuilderValue other) {
		try {			
			if (other != null && other.ptr != null) {
				long p = allocate0(other.ptr);
				if (p != -1)
					return Optional.of(new DocBuilderValue(allocate0(), p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
	}
	
	/**
	 * 
	 * @param value
	 * @return
	 */
	public static DocBuilderValue create(boolean value) {
		return new DocBuilderValue(value);
	}
	
	/**
	 * 
	 * @param value
	 * @return
	 */
	public static DocBuilderValue create(int value) {
		return new DocBuilderValue(value);
	}
	
	/**
	 * 
	 * @param value
	 * @return
	 */
	public static DocBuilderValue create(double value) {
		return new DocBuilderValue(value);
	}
	
	/**
	 * 
	 * @param value
	 * @return
	 */
	public static Optional<DocBuilderValue> create(String value) {
		if (value != null && !value.isBlank())
			return Optional.of(new DocBuilderValue(value));
		return Optional.empty();
	}
	
	/**
	 * 
	 */
	public void clear() {
		if (ptr != null) clear0(ptr);
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isEmpty() {
		if (ptr != null) return isEmpty0(ptr);
		return true;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isNull() {
		if (ptr != null) return isNull0(ptr);
		return true;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isUndefined() {
		if (ptr != null) return isUndefined0(ptr);
		return true;
	}
	
	public boolean isBoolean() {
		if (ptr != null) return isBoolean0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isInt() {
		if (ptr != null) return isInt0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isDouble() {
		if (ptr != null) return isDouble0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isString() {
		if (ptr != null) return isString0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isFunction() {
		if (ptr != null) return isFunction0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isObject() {
		if (ptr != null) return isObject0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isArray() {
		if (ptr != null) return isArray0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public boolean isTypedArray() {
		if (ptr != null) return isTypedArray0(ptr);
		return false;
	}
	
	/**
	 * 
	 * @return
	 */
	public Optional<Integer> getLength() {
		if (ptr != null) return Optional.of(getLength0(ptr));
		return Optional.empty();
	}
	
	/**
	 * 
	 * @return
	 */
	public Optional<Boolean> toBool() {
		if (ptr != null) return Optional.of(toBool0(ptr));
		return Optional.empty();
	}
	
	/**
	 * 
	 * @return
	 */
	public Optional<Integer> toInt() {
		if (ptr != null) return Optional.of(toInt0(ptr));
		return Optional.empty();
	}
	
	/**
	 * 
	 * @return
	 */
	public Optional<Double> toDouble() {
		if (ptr != null) return Optional.of(toDouble0(ptr));
		return Optional.empty();
	}
	
	/**
	 * 
	 * @return
	 */
	public String toString() {
		if (ptr != null) return toString0(ptr);
		return null;
	}
	
	/**
	 * 
	 * @param name
	 * @return
	 */
	public Optional<DocBuilderValue> getProperty(String name) {
		if (ptr != null) {
			long p = getProperty0(ptr, name);
			if (p != -1) return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @param name
	 * @return
	 */
	public Optional<DocBuilderValue> get(String name) {
		if (ptr != null) {
			long p = get0(ptr, name);
			if (p != -1) return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @param index
	 * @return
	 */
	public Optional<DocBuilderValue> get(int index) {
		if (ptr != null) {
			long p = get0(ptr, index);
			if (p != -1) return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @param name
	 * @param value
	 */
	public void setProperty(String name, DocBuilderValue value) {
		try {			
			if (ptr != null && value != null) 
				setProperty0(ptr, name, value.ptr);
		} catch(Exception e) {
			return;
		}
	}
	
	/**
	 * 
	 * @param name
	 * @param value
	 */
	public void set(String name, DocBuilderValue value) {
		try {			
			if (ptr != null && value != null) 
				set0(ptr, name, value.ptr);
		} catch(Exception e) {
			return;
		}
	}
	
	/**
	 * 
	 * @param index
	 * @param value
	 */
	public void set(int index, DocBuilderValue value) {
		try {			
			if (ptr != null && value != null) {
				if (value != null && value.ptr != null)
					set0(ptr, index, value.ptr);
			}
		} catch(Exception e) {
			return;
		}
	}
	
	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderValue> createUndefined() {
		if (ptr != null) {
			long p = createUndefined0(ptr);
			if (p != -1) return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @return
	 */
	public Optional<DocBuilderValue> createNull() {
		if (ptr != null) {
			long p = createNull0(ptr);
			if (p != -1) return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @param name
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name) {
		if (ptr != null) {
			long p = call0(ptr, name);
			if (p != -1) return Optional.of(new DocBuilderValue(p));
		}
		return Optional.empty();
	}
	
	/**
	 * 
	 * @param name
	 * @param p1
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name, DocBuilderValue p1) {
		try {			
			if (ptr != null && p1.ptr != null) {
				long p = call0(ptr, name, p1.ptr);
				if (p != -1) return Optional.of(new DocBuilderValue(p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
	}
	
	/**
	 * 
	 * @param name
	 * @param p1
	 * @param p2
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name, DocBuilderValue p1, DocBuilderValue p2) {
		try {			
			if (ptr != null && p1.ptr != null && p2.ptr != null)  {
				long p = call0(ptr, name, p1.ptr, p2.ptr);
				if (p != -1) return Optional.of(new DocBuilderValue(p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
	}
	
	/**
	 * 
	 * @param name
	 * @param p1
	 * @param p2
	 * @param p3
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name, DocBuilderValue p1, DocBuilderValue p2, DocBuilderValue p3) {
		try {			
			if (ptr != null && p1.ptr != null && p2.ptr != null && p3.ptr != null) {
				long p = call0(ptr, name, p1.ptr, p2.ptr, p3.ptr);
				if (p != -1) return Optional.of(new DocBuilderValue(p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
	}
	
	/**
	 * 
	 * @param name
	 * @param p1
	 * @param p2
	 * @param p3
	 * @param p4
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name, DocBuilderValue p1, DocBuilderValue p2, DocBuilderValue p3, DocBuilderValue p4) {
		try {			
			if (ptr != null && p1.ptr != null && p2.ptr != null 
					&& p3.ptr != null && p4.ptr != null) {
				long p = call0(ptr, name, p1.ptr, p2.ptr, p3.ptr, p4.ptr);
				if (p != -1) return Optional.of(new DocBuilderValue(p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
	}
	
	/**
	 * 
	 * @param name
	 * @param p1
	 * @param p2
	 * @param p3
	 * @param p4
	 * @param p5
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name, DocBuilderValue p1, DocBuilderValue p2,
			DocBuilderValue p3, DocBuilderValue p4, DocBuilderValue p5) {
		try {			
			if (ptr != null && p1.ptr != null && p2.ptr != null && p3.ptr != null
					&& p4.ptr != null && p5.ptr != null) {
				long p = call0(ptr, name, p1.ptr, p2.ptr, p3.ptr, p4.ptr, p5.ptr);
				if (p != -1) return Optional.of(new DocBuilderValue(p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
	}
	
	/**
	 * 
	 * @param name
	 * @param p1
	 * @param p2
	 * @param p3
	 * @param p4
	 * @param p5
	 * @param p6
	 * @return
	 */
	public Optional<DocBuilderValue> call(String name, DocBuilderValue p1, DocBuilderValue p2, 
			DocBuilderValue p3, DocBuilderValue p4, DocBuilderValue p5, DocBuilderValue p6) {
		try {			
			if (ptr != null && p1.ptr != null && p2.ptr != null && p3.ptr != null
					&& p4.ptr != null && p5.ptr != null && p6.ptr != null) {
				long p = call0(ptr, name, p1.ptr, p2.ptr, p3.ptr, p4.ptr, p5.ptr, p6.ptr);
				if (p != -1) return Optional.of(new DocBuilderValue(p));
			}
			throw new NullPointerException();
		} catch(Exception e) {
			return Optional.empty();
		}
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
			clear0(ptr);
			free0(ptr);
			ptr = null;
		}
	}
	
	
	// Native methods
	
	private static native long allocate0();
	private static native long allocate0(long other);
	private static native long allocate0(boolean value);
	private static native long allocate0(int value);
	private static native long allocate0(double value);
	private static native long allocate0(String value);
	private static native void free0(long ptr);
	private native void clear0(long ptr);
	
	private native boolean isEmpty0(long ptr);
	private native boolean isNull0(long ptr);
	private native boolean isUndefined0(long ptr);
	private native boolean isBoolean0(long ptr);
	private native boolean isInt0(long ptr);
	private native boolean isDouble0(long ptr);
	private native boolean isString0(long ptr);
	private native boolean isFunction0(long ptr);
	private native boolean isObject0(long ptr);
	private native boolean isArray0(long ptr);
	private native boolean isTypedArray0(long ptr);
	
	private native int getLength0(long ptr);
	
	private native boolean toBool0(long ptr);
	private native int toInt0(long ptr);
	private native double toDouble0(long ptr);
	private native String toString0(long ptr);
	
	private native long getProperty0(long ptr, String name);
	private native long get0(long ptr, String name);
	private native long get0(long ptr, int index);
	
	private native void setProperty0(long ptr, String name, long value);
	private native void set0(long ptr, String name, long value);
	private native void set0(long ptr, int index, long value);
	
	private native long createUndefined0(long ptr);
	private native long createNull0(long ptr);
	private native long call0(long ptr, String name);
	private native long call0(long ptr, String name, long p1);
	private native long call0(long ptr, String name, long p1, long p2);
	private native long call0(long ptr, String name, long p1, long p2, long p3);
	private native long call0(long ptr, String name, long p1, long p2, long p3, long p4);
	private native long call0(long ptr, String name, long p1, long p2, long p3, long p4, long p5);
	private native long call0(long ptr, String name, long p1, long p2, long p3, long p4, long p5, long p6);
}