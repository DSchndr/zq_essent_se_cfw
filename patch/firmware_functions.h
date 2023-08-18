/*
 * firmware_functions.h
 *
 *  Created on: May 14, 2023
 *      Author: Dennis
 */

#ifndef FIRMWARE_FUNCTIONS_H_
#define FIRMWARE_FUNCTIONS_H_

#define uint unsigned int
__attribute__((section(".lcd_bright")))
void lcd_bright(short *val);

__attribute__((section(".lcd_on")))
void lcd_on(void);

__attribute__((section(".clearscreen")))
void Clearscreen(void);

__attribute__((section(".SetColor")))
void SetColor(uint Color_RGB);

__attribute__((section(".DrawRect")))
void DrawRect(uint xs, uint ys, uint xe, uint ye);

#endif /* FIRMWARE_FUNCTIONS_H_ */
