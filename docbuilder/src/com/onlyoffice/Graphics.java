package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
public enum Graphics implements FileType {
	PDF(0x0200 + 0x0001),
	PDFA(0x0200 + 0x0009),
	JPG(0x0400 + 0x0001),
	PNG(0x0400 + 0x0005),
	BMP(0x0400 + 0x0008);
	private int code;
	private Graphics(int code) {
		this.code = code;
	}
	public int getCode() {
		return this.code;
	}
}
