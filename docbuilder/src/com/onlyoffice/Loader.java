package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
class Loader {
	private static String OS = System.getProperty("os.name").toLowerCase();
	
	protected static void load() {
		try {
			System.loadLibrary("docbuilder_native");
		} catch(UnsatisfiedLinkError e) {
			try {
				if (isWindows()) {
					NativeUtils.loadLibraryFromJar("/jni/libdocbuilder_native.dll");
				} else if (isMac()) {					
					NativeUtils.loadLibraryFromJar("/jni/libdocbuilder_native.dylib");
				} else if (isUnix()) {
					NativeUtils.loadLibraryFromJar("/jni/libdocbuilder_native.so");
				} else if (isSolaris()) {
					NativeUtils.loadLibraryFromJar("/jni/libdocbuilder_native.so");
				} else {
					throw new Exception("unknown OS");
				}
			} catch(Exception ex) {
				System.out.printf("could not load native libraries: %s\n", ex.getMessage());				
				System.exit(1);
			}
		}
	}
	
	private static boolean isWindows() {
		return OS.indexOf("win") >= 0;
	}
	
	private static boolean isMac() {
		return OS.indexOf("mac") >= 0;
	}
	
	private static boolean isUnix() {
		return OS.indexOf("nix") >= 0 || OS.indexOf("nux") >= 0;
	}
	
	private static boolean isSolaris() {
		return OS.indexOf("sunos") >= 0;
	}
}
