package com.onlyoffice;

/**
 * 
 * @author nsenz
 *
 */
public enum Spreadsheet implements FileType {
	XLSX(0x0100 + 0x0001),
	XLS(0x0100 + 0x0002),
	ODS(0x0100 + 0x0003),
	CSV(0x0100 + 0x0004),
	XLTX(0x0100 + 0x0006),
	OTS(0x0100 + 0x0009);
	private int code;
	private Spreadsheet(int code) {
		this.code = code;
	}
	public int getCode() {
		return this.code;
	}
}