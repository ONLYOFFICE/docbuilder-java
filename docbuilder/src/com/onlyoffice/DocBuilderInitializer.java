package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
public final class DocBuilderInitializer {
	static { Loader.load(); }
	
	private static volatile DocBuilderInitializer initializer;
	private static volatile String directory;
	
	private DocBuilderInitializer() {};
	
	// Java methods
	
	public static DocBuilderInitializer initialize() {
		if (initializer == null) {
			synchronized(DocBuilderInitializer.class) {
				if (initializer == null) {
					initializer = new DocBuilderInitializer();
					initialize0();
				}
			}
		}
		
		return initializer;
	}
	
	public static DocBuilderInitializer initialize(String docbuilderDir) {
		if (initializer == null && docbuilderDir != null) {
			synchronized(DocBuilderInitializer.class) {
				if (initializer == null) {
					initializer = new DocBuilderInitializer();
					directory = docbuilderDir;
					initialize0(docbuilderDir);
				}
			}
		}
		
		return initializer;
	}
	
	public synchronized static boolean isInitialized() {
		return initializer != null;
	}
	
	public synchronized static String getDirectory() {
		return directory;
	}
	
	public static void reset() {
		if (initializer != null) {
			synchronized(DocBuilderInitializer.class) {
				if (initializer != null) {
					initializer = null;
					directory = null;
				}
			}
		}
	}
	
	// Native methods
	
	private static native void initialize0();

	private static native void initialize0(String directory);
}