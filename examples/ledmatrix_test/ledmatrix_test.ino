
#include <LLedMatrix.h>

void setup() {
	Serial.begin(115200);
	Serial.print("Led Matrix test.\r\n");
	
	while(1) {
		if(LedMatrix.check_on_line()) {
			Serial.print("Led Matrix is on line.\r\n");
			break;
		}
		delay(1000);
		Serial.print("Led Matrix is off line.\r\n");
	}
}

void loop() {
	unsigned char data[5] = {0x07, 0x0e, 0x1c, 0x38, 0x70};

	LedMatrix.disp_string("ABCD",4,200);
	delay(4500);
	LedMatrix.disp_char(' ',1);
	delay(1000);
	LedMatrix.disp_char('X',1);
	delay(1000);
	LedMatrix.disp_char('a',1);
	delay(1000);
	LedMatrix.disp_char('d',1);
	delay(1000);
	LedMatrix.disp_char('o',1);
	delay(1000);
	LedMatrix.disp_char('w',1);
	delay(1000);

	LedMatrix.disp_pic(DIS_PIC_JOY_LVL0,2);
	delay(1500);
	LedMatrix.disp_pic(DIS_PIC_JOY_LVL1,2);
	delay(1500);
	LedMatrix.disp_pic(DIS_PIC_SAD_LVL0,2);
	delay(1500);
	LedMatrix.disp_pic(DIS_PIC_SAD_LVL1,2);
	delay(1500);
	LedMatrix.disp_pic(DIS_PIC_SAD_LVL2,2);
	delay(1500);
	LedMatrix.disp_pic(DIS_PIC_SAD_LVL3,2);
	delay(1500);

	LedMatrix.disp_data(data, 2);
	delay(2000);
}
