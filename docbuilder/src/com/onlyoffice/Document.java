package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
public enum Document implements FileType {
	DOCX(0x0040 + 0x0001),
	DOC(0x0040 + 0x0002),
	ODT(0x0040 + 0x0003),
	RTF(0x0040 + 0x0004),
	TXT(0x0040 + 0x0005),
	DOTX(0x0040 + 0x000c),
	OTT(0x0040 + 0x000f);
	private int code;
	private Document(int code) {
		this.code = code;
	}
	public int getCode() {
		return this.code;
	}
}
