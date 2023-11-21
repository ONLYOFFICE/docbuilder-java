package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
public enum Presentation implements FileType {
	PPTX(0x0080 + 0x0001),
	PPT(0x0080 + 0x0002),
	ODP(0x0080 + 0x0003),
	PPSX(0x0080 + 0x0004),
	POTX(0x0080 + 0x0007),
	OTP(0x0080 + 0x000a);
	private int code;
	private Presentation(int code) {
		this.code = code;
	}
	public int getCode() {
		return this.code;
	}
}