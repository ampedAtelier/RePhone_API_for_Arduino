/*
  Copyright (c) 2014 MediaTek Inc.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License..

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
   See the GNU Lesser General Public License for more details.
*/


#ifndef _LLEDMATRIX_H
#define _LLEDMATRIX_H


#define LEDAddress              33

#define DISP_CHAR_5X7	        0x80
#define DISP_STRING				0x81
#define SET_DISP_ORIENTATION    0x82
#define POWER_DOWN  			0x83
#define DISP_PIC				0x84
#define DISP_DATA				0x85

#define RIGHT_TO_LEFT 			0
#define LEFT_TO_RIGHT 			1

#define DIS_PIC_JOY_LVL0		0	// Joy level 0
#define DIS_PIC_JOY_LVL1		1	// Joy level 1
#define DIS_PIC_SAD_LVL0		2	// Sad level 0
#define DIS_PIC_SAD_LVL1		3	// Sad level 1
#define DIS_PIC_SAD_LVL2		4	// Sad level 2
#define DIS_PIC_SAD_LVL3		5	// Sad level 3
#define DIS_PIC_ALL				6	// Display all
#define DIS_PIN_NULL			7	// Display null

#define LED_MATRIX_WAKE_PIN 	13


class LLedMatrixClass
{
public:

	/**
	 *  \brief Turn all LEDs on.
	 */
	void displayAll(unsigned int uTime);

	/**
	 *  \brief Turn all LEDs off.
	 */
	void clearAll(unsigned int uTime);

	/**
	 *  \brief Get the status of the led matrix device.
	 *
	 *  \return Return TRUE or FALSE. TRUE is on line, FALSE is off line.
	 */
	unsigned char isAvailable();
	
	/**
	 *  \brief Display the string.
	 *
	 *  \param [in] uData the pointer of string.
	 *  \param [in] uDataLength the length of string, maximum is 4.
	 *  \param [in] uTime the time of string want to display.
	 *  
	 *  \return Return Null.
	 */
	void disp_string(const char uData[],unsigned char uDataLength,unsigned int uTime);
	
	/**
	 *  \brief Display a char.
	 *
	 *  \param [in] uData the ASCII value of char.
	 *  \param [in] uTime the time of char want to display.
	 *  
	 *  \return Return Null.
	 */
	void disp_char(const char uData, unsigned int uTime);
	
	/**
	 *  \brief Set the orientation of display.
	 *
	 *  \param [in] orientation the orientation of display
	 *  
	 *  \return Return Null.
	 */
	void set_disp_orientation(unsigned char orientation);
	
	/**
	 *  \brief Display a simple graphics.
	 *
	 *  \param [in] uPicNum the number of graphics.
	 *  \param [in] uTime the time of char want to display.
	 *  
	 *  \return Return Null.
	 */
	void disp_pic(unsigned char uPicNum, unsigned int uTime);
	
	/**
	 *  \brief Display a graphics by data.
	 *
	 *  \param [in] uPicData the buffer of graphics data.
	 *  \param [in] uTime the time that want to display.
	 *  
	 *  \return Return Null.
	 */
	void disp_data(unsigned char *uPicData, unsigned int uTime);
	
private:

};

extern LLedMatrixClass LedMatrix;

#endif
