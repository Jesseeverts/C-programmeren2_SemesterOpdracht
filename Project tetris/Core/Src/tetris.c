/*
 * ssd1306_test.c
 *
 *  Created on: Jan 30, 2020
 *      Author: 20004719
 */

#include "ssd1306.h"
#include <string.h>
#include <stdio.h>

void ssd1306_tetris_Intro()
{
	ssd1306_Fill(Black);
	ssd1306_SetCursor(31,23);
	ssd1306_WriteString("KLAAR?", Font_11x18, White);
	ssd1306_UpdateScreen();
	HAL_Delay(3000);
	ssd1306_Fill(Black);
	ssd1306_SetCursor(42,23);
	ssd1306_WriteString("3...", Font_11x18, White);
	ssd1306_UpdateScreen();
	HAL_Delay(1000);
	ssd1306_Fill(Black);
	ssd1306_SetCursor(42,23);
	ssd1306_WriteString("2...", Font_11x18, White);
	ssd1306_UpdateScreen();
	HAL_Delay(1000);
	ssd1306_Fill(Black);
	ssd1306_SetCursor(42,23);
	ssd1306_WriteString("1!!!", Font_11x18, White);
	ssd1306_UpdateScreen();
	HAL_Delay(1000);
}
void ssd1306_tetris_FillWhite_Intro() {
int x = 0;
int y = 32;
int y2 = 32;

	while(y<65)
	{
		while(x<128)
		{
			ssd1306_DrawPixel(x,y, White);
			ssd1306_DrawPixel(x,y2, White);
			x = x +1;
		}
	y = y +1;
	y2 = y2 -1;
	x = 0;
		ssd1306_UpdateScreen();
	}
	ssd1306_UpdateScreen();
}

void ssd1306_tetris_L_Black(int x, int y) {
		ssd1306_DrawPixel(1+x,16+y, Black);
		ssd1306_DrawPixel(2+x,16+y, Black);
		ssd1306_DrawPixel(3+x,16+y, Black);
		ssd1306_DrawPixel(4+x,16+y, Black);
		ssd1306_DrawPixel(5+x,16+y, Black);
		ssd1306_DrawPixel(6+x,16+y, Black);
		ssd1306_DrawPixel(7+x,16+y, Black);
		ssd1306_DrawPixel(8+x,16+y, Black);
		ssd1306_DrawPixel(9+x,16+y, Black);
		ssd1306_DrawPixel(10+x,16+y, Black);
		ssd1306_DrawPixel(11+x,16+y, Black);
		ssd1306_DrawPixel(12+x,16+y, Black);
		ssd1306_DrawPixel(13+x,16+y, Black);
		ssd1306_DrawPixel(14+x,16+y, Black);
		ssd1306_DrawPixel(15+x,16+y, Black);
		ssd1306_DrawPixel(16+x,16+y, Black);
		ssd1306_DrawPixel(17+x,16+y, Black);
		ssd1306_DrawPixel(18+x,16+y, Black);
		ssd1306_DrawPixel(19+x,16+y, Black);
		ssd1306_DrawPixel(20+x,16+y, Black);
		ssd1306_DrawPixel(21+x,16+y, Black);
		ssd1306_DrawPixel(22+x,16+y, Black);
		ssd1306_DrawPixel(23+x,16+y, Black);
		ssd1306_DrawPixel(24+x,16+y, Black);

		ssd1306_DrawPixel(1+x,9+y, Black);
		ssd1306_DrawPixel(2+x,9+y, Black);
		ssd1306_DrawPixel(3+x,9+y, Black);
		ssd1306_DrawPixel(4+x,9+y, Black);
		ssd1306_DrawPixel(5+x,9+y, Black);
		ssd1306_DrawPixel(6+x,9+y, Black);
		ssd1306_DrawPixel(7+x,9+y, Black);
		ssd1306_DrawPixel(8+x,9+y, Black);
		ssd1306_DrawPixel(9+x,9+y, Black);
		ssd1306_DrawPixel(10+x,9+y, Black);
		ssd1306_DrawPixel(11+x,9+y, Black);
		ssd1306_DrawPixel(12+x,9+y, Black);
		ssd1306_DrawPixel(13+x,9+y, Black);
		ssd1306_DrawPixel(14+x,9+y, Black);
		ssd1306_DrawPixel(15+x,9+y, Black);
		ssd1306_DrawPixel(16+x,9+y, Black);
		ssd1306_DrawPixel(17+x,9+y, Black);

		ssd1306_DrawPixel(17+x,1+y, Black);
		ssd1306_DrawPixel(18+x,1+y, Black);
		ssd1306_DrawPixel(19+x,1+y, Black);
		ssd1306_DrawPixel(20+x,1+y, Black);
		ssd1306_DrawPixel(21+x,1+y, Black);
		ssd1306_DrawPixel(22+x,1+y, Black);
		ssd1306_DrawPixel(23+x,1+y, Black);
		ssd1306_DrawPixel(24+x,1+y, Black);

		ssd1306_DrawPixel(1+x,9+y, Black);
		ssd1306_DrawPixel(1+x,10+y, Black);
		ssd1306_DrawPixel(1+x,11+y, Black);
		ssd1306_DrawPixel(1+x,12+y, Black);
		ssd1306_DrawPixel(1+x,13+y, Black);
		ssd1306_DrawPixel(1+x,14+y, Black);
		ssd1306_DrawPixel(1+x,15+y, Black);
		ssd1306_DrawPixel(1+x,16+y, Black);

		ssd1306_DrawPixel(17+x,1+y, Black);
		ssd1306_DrawPixel(17+x,2+y, Black);
		ssd1306_DrawPixel(17+x,3+y, Black);
		ssd1306_DrawPixel(17+x,4+y, Black);
		ssd1306_DrawPixel(17+x,5+y, Black);
		ssd1306_DrawPixel(17+x,6+y, Black);
		ssd1306_DrawPixel(17+x,7+y, Black);
		ssd1306_DrawPixel(17+x,8+y, Black);

		ssd1306_DrawPixel(24+x,2+y, Black);
		ssd1306_DrawPixel(24+x,3+y, Black);
		ssd1306_DrawPixel(24+x,4+y, Black);
		ssd1306_DrawPixel(24+x,5+y, Black);
		ssd1306_DrawPixel(24+x,6+y, Black);
		ssd1306_DrawPixel(24+x,7+y, Black);
		ssd1306_DrawPixel(24+x,8+y, Black);
		ssd1306_DrawPixel(24+x,9+y, Black);
		ssd1306_DrawPixel(24+x,10+y, Black);
		ssd1306_DrawPixel(24+x,11+y, Black);
		ssd1306_DrawPixel(24+x,12+y, Black);
		ssd1306_DrawPixel(24+x,13+y, Black);
		ssd1306_DrawPixel(24+x,14+y, Black);
		ssd1306_DrawPixel(24+x,15+y, Black);

	    ssd1306_UpdateScreen();
}
void ssd1306_tetris_L_White(int x, int y) {

	ssd1306_DrawPixel(1+x,16+y, White);
		ssd1306_DrawPixel(2+x,16+y, White);
		ssd1306_DrawPixel(3+x,16+y, White);
		ssd1306_DrawPixel(4+x,16+y, White);
		ssd1306_DrawPixel(5+x,16+y, White);
		ssd1306_DrawPixel(6+x,16+y, White);
		ssd1306_DrawPixel(7+x,16+y, White);
		ssd1306_DrawPixel(8+x,16+y, White);
		ssd1306_DrawPixel(9+x,16+y, White);
		ssd1306_DrawPixel(10+x,16+y, White);
		ssd1306_DrawPixel(11+x,16+y, White);
		ssd1306_DrawPixel(12+x,16+y, White);
		ssd1306_DrawPixel(13+x,16+y, White);
		ssd1306_DrawPixel(14+x,16+y, White);
		ssd1306_DrawPixel(15+x,16+y, White);
		ssd1306_DrawPixel(16+x,16+y, White);
		ssd1306_DrawPixel(17+x,16+y, White);
		ssd1306_DrawPixel(18+x,16+y, White);
		ssd1306_DrawPixel(19+x,16+y, White);
		ssd1306_DrawPixel(20+x,16+y, White);
		ssd1306_DrawPixel(21+x,16+y, White);
		ssd1306_DrawPixel(22+x,16+y, White);
		ssd1306_DrawPixel(23+x,16+y, White);
		ssd1306_DrawPixel(24+x,16+y, White);

		ssd1306_DrawPixel(1+x,9+y, White);
		ssd1306_DrawPixel(2+x,9+y, White);
		ssd1306_DrawPixel(3+x,9+y, White);
		ssd1306_DrawPixel(4+x,9+y, White);
		ssd1306_DrawPixel(5+x,9+y, White);
		ssd1306_DrawPixel(6+x,9+y, White);
		ssd1306_DrawPixel(7+x,9+y, White);
		ssd1306_DrawPixel(8+x,9+y, White);
		ssd1306_DrawPixel(9+x,9+y, White);
		ssd1306_DrawPixel(10+x,9+y, White);
		ssd1306_DrawPixel(11+x,9+y, White);
		ssd1306_DrawPixel(12+x,9+y, White);
		ssd1306_DrawPixel(13+x,9+y, White);
		ssd1306_DrawPixel(14+x,9+y, White);
		ssd1306_DrawPixel(15+x,9+y, White);
		ssd1306_DrawPixel(16+x,9+y, White);
		ssd1306_DrawPixel(17+x,9+y, White);

		ssd1306_DrawPixel(17+x,1+y, White);
		ssd1306_DrawPixel(18+x,1+y, White);
		ssd1306_DrawPixel(19+x,1+y, White);
		ssd1306_DrawPixel(20+x,1+y, White);
		ssd1306_DrawPixel(21+x,1+y, White);
		ssd1306_DrawPixel(22+x,1+y, White);
		ssd1306_DrawPixel(23+x,1+y, White);
		ssd1306_DrawPixel(24+x,1+y, White);

		ssd1306_DrawPixel(1+x,9+y, White);
		ssd1306_DrawPixel(1+x,10+y, White);
		ssd1306_DrawPixel(1+x,11+y, White);
		ssd1306_DrawPixel(1+x,12+y, White);
		ssd1306_DrawPixel(1+x,13+y, White);
		ssd1306_DrawPixel(1+x,14+y, White);
		ssd1306_DrawPixel(1+x,15+y, White);
		ssd1306_DrawPixel(1+x,16+y, White);

		ssd1306_DrawPixel(17+x,1+y, White);
		ssd1306_DrawPixel(17+x,2+y, White);
		ssd1306_DrawPixel(17+x,3+y, White);
		ssd1306_DrawPixel(17+x,4+y, White);
		ssd1306_DrawPixel(17+x,5+y, White);
		ssd1306_DrawPixel(17+x,6+y, White);
		ssd1306_DrawPixel(17+x,7+y, White);
		ssd1306_DrawPixel(17+x,8+y, White);

		ssd1306_DrawPixel(24+x,2+y, White);
		ssd1306_DrawPixel(24+x,3+y, White);
		ssd1306_DrawPixel(24+x,4+y, White);
		ssd1306_DrawPixel(24+x,5+y, White);
		ssd1306_DrawPixel(24+x,6+y, White);
		ssd1306_DrawPixel(24+x,7+y, White);
		ssd1306_DrawPixel(24+x,8+y, White);
		ssd1306_DrawPixel(24+x,9+y, White);
		ssd1306_DrawPixel(24+x,10+y, White);
		ssd1306_DrawPixel(24+x,11+y, White);
		ssd1306_DrawPixel(24+x,12+y, White);
		ssd1306_DrawPixel(24+x,13+y, White);
		ssd1306_DrawPixel(24+x,14+y, White);
		ssd1306_DrawPixel(24+x,15+y, White);

	    ssd1306_UpdateScreen();
}

void ssd1306_tetris_V_Black(int x, int y){

	   			  ssd1306_DrawPixel(0+x,0+y, Black);
	   			  ssd1306_DrawPixel(1+x,0+y, Black);
	   			  ssd1306_DrawPixel(2+x,0+y, Black);
	   			  ssd1306_DrawPixel(3+x,0+y, Black);
	   			  ssd1306_DrawPixel(4+x,0+y, Black);
	   			  ssd1306_DrawPixel(5+x,0+y, Black);
	   			  ssd1306_DrawPixel(6+x,0+y, Black);
	   			  ssd1306_DrawPixel(7+x,0+y, Black);
	   			  ssd1306_DrawPixel(8+x,0+y, Black);
	   			  ssd1306_DrawPixel(9+x,0+y, Black);
	   			  ssd1306_DrawPixel(10+x,0+y,Black);
	   			  ssd1306_DrawPixel(11+x,0+y,Black);
	   			  ssd1306_DrawPixel(12+x,0+y,Black);
	   			  ssd1306_DrawPixel(13+x,0+y,Black);
	   			  ssd1306_DrawPixel(14+x,0+y,Black);
	   			  ssd1306_DrawPixel(15+x,0+y,Black);

	   			  ssd1306_DrawPixel(0+x,15+y, Black);
	   			  ssd1306_DrawPixel(1+x,15+y, Black);
	   			  ssd1306_DrawPixel(2+x,15+y, Black);
	   			  ssd1306_DrawPixel(3+x,15+y, Black);
	   			  ssd1306_DrawPixel(4+x,15+y, Black);
	   			  ssd1306_DrawPixel(5+x,15+y, Black);
	   			  ssd1306_DrawPixel(6+x,15+y, Black);
	   			  ssd1306_DrawPixel(7+x,15+y, Black);
	   			  ssd1306_DrawPixel(8+x,15+y, Black);
	   			  ssd1306_DrawPixel(9+x,15+y, Black);
	   			  ssd1306_DrawPixel(10+x,15+y,Black);
	   			  ssd1306_DrawPixel(11+x,15+y,Black);
	   			  ssd1306_DrawPixel(12+x,15+y,Black);
	   			  ssd1306_DrawPixel(13+x,15+y,Black);
	   			  ssd1306_DrawPixel(14+x,15+y,Black);
	   			  ssd1306_DrawPixel(15+x,15+y,Black);

	   			  ssd1306_DrawPixel(0+x,0+y, Black);
	   			  ssd1306_DrawPixel(0+x,1+y, Black);
	   			  ssd1306_DrawPixel(0+x,2+y, Black);
	   			  ssd1306_DrawPixel(0+x,3+y, Black);
	   			  ssd1306_DrawPixel(0+x,4+y, Black);
	   			  ssd1306_DrawPixel(0+x,5+y, Black);
	   			  ssd1306_DrawPixel(0+x,6+y, Black);
	   			  ssd1306_DrawPixel(0+x,7+y, Black);
	   			  ssd1306_DrawPixel(0+x,8+y, Black);
	   			  ssd1306_DrawPixel(0+x,9+y, Black);
	   			  ssd1306_DrawPixel(0+x,10+y, Black);
	   			  ssd1306_DrawPixel(0+x,11+y, Black);
	   			  ssd1306_DrawPixel(0+x,12+y, Black);
	   			  ssd1306_DrawPixel(0+x,13+y, Black);
	   			  ssd1306_DrawPixel(0+x,14+y, Black);
	   			  ssd1306_DrawPixel(0+x,15+y, Black);

	   			  ssd1306_DrawPixel(15+x,0+y, Black);
	   			  ssd1306_DrawPixel(15+x,1+y, Black);
	   			  ssd1306_DrawPixel(15+x,2+y, Black);
	   			  ssd1306_DrawPixel(15+x,3+y, Black);
	   			  ssd1306_DrawPixel(15+x,4+y, Black);
	   			  ssd1306_DrawPixel(15+x,5+y, Black);
	   			  ssd1306_DrawPixel(15+x,6+y, Black);
	   			  ssd1306_DrawPixel(15+x,7+y, Black);
	   			  ssd1306_DrawPixel(15+x,8+y, Black);
	   			  ssd1306_DrawPixel(15+x,9+y, Black);
	   			  ssd1306_DrawPixel(15+x,10+y, Black);
	   			  ssd1306_DrawPixel(15+x,11+y, Black);
	   			  ssd1306_DrawPixel(15+x,12+y, Black);
	   			  ssd1306_DrawPixel(15+x,13+y, Black);
	   			  ssd1306_DrawPixel(15+x,14+y, Black);
	   			  ssd1306_DrawPixel(15+x,15+y, Black);
	   			ssd1306_UpdateScreen();

}
void ssd1306_tetris_V_White(int x, int y){

	   			  ssd1306_DrawPixel(0+x,0+y, White);
	   			  ssd1306_DrawPixel(1+x,0+y, White);
	   			  ssd1306_DrawPixel(2+x,0+y, White);
	   			  ssd1306_DrawPixel(3+x,0+y, White);
	   			  ssd1306_DrawPixel(4+x,0+y, White);
	   			  ssd1306_DrawPixel(5+x,0+y, White);
	   			  ssd1306_DrawPixel(6+x,0+y, White);
	   			  ssd1306_DrawPixel(7+x,0+y, White);
	   			  ssd1306_DrawPixel(8+x,0+y, White);
	   			  ssd1306_DrawPixel(9+x,0+y, White);
	   			  ssd1306_DrawPixel(10+x,0+y,White);
	   			  ssd1306_DrawPixel(11+x,0+y,White);
	   			  ssd1306_DrawPixel(12+x,0+y,White);
	   			  ssd1306_DrawPixel(13+x,0+y,White);
	   			  ssd1306_DrawPixel(14+x,0+y,White);
	   			  ssd1306_DrawPixel(15+x,0+y,White);

	   			  ssd1306_DrawPixel(0+x,15+y, White);
	   			  ssd1306_DrawPixel(1+x,15+y, White);
	   			  ssd1306_DrawPixel(2+x,15+y, White);
	   			  ssd1306_DrawPixel(3+x,15+y, White);
	   			  ssd1306_DrawPixel(4+x,15+y, White);
	   			  ssd1306_DrawPixel(5+x,15+y, White);
	   			  ssd1306_DrawPixel(6+x,15+y, White);
	   			  ssd1306_DrawPixel(7+x,15+y, White);
	   			  ssd1306_DrawPixel(8+x,15+y, White);
	   			  ssd1306_DrawPixel(9+x,15+y, White);
	   			  ssd1306_DrawPixel(10+x,15+y,White);
	   			  ssd1306_DrawPixel(11+x,15+y,White);
	   			  ssd1306_DrawPixel(12+x,15+y,White);
	   			  ssd1306_DrawPixel(13+x,15+y,White);
	   			  ssd1306_DrawPixel(14+x,15+y,White);
	   			  ssd1306_DrawPixel(15+x,15+y,White);

	   			  ssd1306_DrawPixel(0+x,0+y, White);
	   			  ssd1306_DrawPixel(0+x,1+y, White);
	   			  ssd1306_DrawPixel(0+x,2+y, White);
	   			  ssd1306_DrawPixel(0+x,3+y, White);
	   			  ssd1306_DrawPixel(0+x,4+y, White);
	   			  ssd1306_DrawPixel(0+x,5+y, White);
	   			  ssd1306_DrawPixel(0+x,6+y, White);
	   			  ssd1306_DrawPixel(0+x,7+y, White);
	   			  ssd1306_DrawPixel(0+x,8+y, White);
	   			  ssd1306_DrawPixel(0+x,9+y, White);
	   			  ssd1306_DrawPixel(0+x,10+y, White);
	   			  ssd1306_DrawPixel(0+x,11+y, White);
	   			  ssd1306_DrawPixel(0+x,12+y, White);
	   			  ssd1306_DrawPixel(0+x,13+y, White);
	   			  ssd1306_DrawPixel(0+x,14+y, White);
	   			  ssd1306_DrawPixel(0+x,15+y, White);

	   			  ssd1306_DrawPixel(15+x,0+y, White);
	   			  ssd1306_DrawPixel(15+x,1+y, White);
	   			  ssd1306_DrawPixel(15+x,2+y, White);
	   			  ssd1306_DrawPixel(15+x,3+y, White);
	   			  ssd1306_DrawPixel(15+x,4+y, White);
	   			  ssd1306_DrawPixel(15+x,5+y, White);
	   			  ssd1306_DrawPixel(15+x,6+y, White);
	   			  ssd1306_DrawPixel(15+x,7+y, White);
	   			  ssd1306_DrawPixel(15+x,8+y, White);
	   			  ssd1306_DrawPixel(15+x,9+y, White);
	   			  ssd1306_DrawPixel(15+x,10+y, White);
	   			  ssd1306_DrawPixel(15+x,11+y, White);
	   			  ssd1306_DrawPixel(15+x,12+y, White);
	   			  ssd1306_DrawPixel(15+x,13+y, White);
	   			  ssd1306_DrawPixel(15+x,14+y, White);
	   			  ssd1306_DrawPixel(15+x,15+y, White);
	   			ssd1306_UpdateScreen();

}

void ssd1306_tetris_R_Black(int x, int y){


	   			  ssd1306_DrawPixel(0+x,0+y, Black);
	   			  ssd1306_DrawPixel(1+x,0+y, Black);
	   			  ssd1306_DrawPixel(2+x,0+y, Black);
	   			  ssd1306_DrawPixel(3+x,0+y, Black);
	   			  ssd1306_DrawPixel(4+x,0+y, Black);
	   			  ssd1306_DrawPixel(5+x,0+y, Black);
	   			  ssd1306_DrawPixel(6+x,0+y, Black);
	   			  ssd1306_DrawPixel(7+x,0+y, Black);
	   			  ssd1306_DrawPixel(8+x,0+y, Black);
	   			  ssd1306_DrawPixel(9+x,0+y, Black);
	   			  ssd1306_DrawPixel(10+x,0+y,Black);
	   			  ssd1306_DrawPixel(11+x,0+y,Black);
	   			  ssd1306_DrawPixel(12+x,0+y,Black);
	   			  ssd1306_DrawPixel(13+x,0+y,Black);
	   			  ssd1306_DrawPixel(14+x,0+y,Black);
	   			  ssd1306_DrawPixel(15+x,0+y,Black);
	   			  ssd1306_DrawPixel(16+x,0+y,Black);
	   			  ssd1306_DrawPixel(17+x,0+y, Black);
	   			  ssd1306_DrawPixel(18+x,0+y, Black);
	   			  ssd1306_DrawPixel(19+x,0+y, Black);
	   			  ssd1306_DrawPixel(20+x,0+y, Black);
	   			  ssd1306_DrawPixel(21+x,0+y, Black);
	   			  ssd1306_DrawPixel(22+x,0+y, Black);
	   			  ssd1306_DrawPixel(23+x,0+y, Black);
	   			  ssd1306_DrawPixel(24+x,0+y, Black);
	   			  ssd1306_DrawPixel(25+x,0+y, Black);
	   			  ssd1306_DrawPixel(26+x,0+y, Black);
	   			  ssd1306_DrawPixel(27+x,0+y,Black);
	   			  ssd1306_DrawPixel(28+x,0+y,Black);
	   			  ssd1306_DrawPixel(29+x,0+y,Black);
	   			  ssd1306_DrawPixel(30+x,0+y,Black);
	   			  ssd1306_DrawPixel(31+x,0+y,Black);

	   			  ssd1306_DrawPixel(0+x,7+y, Black);
	   			  ssd1306_DrawPixel(1+x,7+y, Black);
	   			  ssd1306_DrawPixel(2+x,7+y, Black);
	   			  ssd1306_DrawPixel(3+x,7+y, Black);
	   			  ssd1306_DrawPixel(4+x,7+y, Black);
	   			  ssd1306_DrawPixel(5+x,7+y, Black);
	   			  ssd1306_DrawPixel(6+x,7+y, Black);
	   			  ssd1306_DrawPixel(7+x,7+y, Black);
	   			  ssd1306_DrawPixel(8+x,7+y, Black);
	   			  ssd1306_DrawPixel(9+x,7+y, Black);
	   			  ssd1306_DrawPixel(10+x,7+y,Black);
	   			  ssd1306_DrawPixel(11+x,7+y,Black);
	   			  ssd1306_DrawPixel(12+x,7+y,Black);
	   			  ssd1306_DrawPixel(13+x,7+y,Black);
	   			  ssd1306_DrawPixel(14+x,7+y,Black);
	   			  ssd1306_DrawPixel(15+x,7+y,Black);
	   			  ssd1306_DrawPixel(16+x,7+y,Black);
	   			  ssd1306_DrawPixel(17+x,7+y, Black);
	   			  ssd1306_DrawPixel(18+x,7+y, Black);
	   			  ssd1306_DrawPixel(19+x,7+y, Black);
	   			  ssd1306_DrawPixel(20+x,7+y, Black);
	   			  ssd1306_DrawPixel(21+x,7+y, Black);
	   			  ssd1306_DrawPixel(22+x,7+y, Black);
	   			  ssd1306_DrawPixel(23+x,7+y, Black);
	   			  ssd1306_DrawPixel(24+x,7+y, Black);
	   			  ssd1306_DrawPixel(25+x,7+y, Black);
	   			  ssd1306_DrawPixel(26+x,7+y, Black);
	   			  ssd1306_DrawPixel(27+x,7+y,Black);
	   			  ssd1306_DrawPixel(28+x,7+y,Black);
	   			  ssd1306_DrawPixel(29+x,7+y,Black);
	   			  ssd1306_DrawPixel(30+x,7+y,Black);
	   			  ssd1306_DrawPixel(31+x,7+y,Black);



	   			  ssd1306_DrawPixel(0+x,0+y, Black);
	   			  ssd1306_DrawPixel(0+x,1+y, Black);
	   			  ssd1306_DrawPixel(0+x,2+y, Black);
	   			  ssd1306_DrawPixel(0+x,3+y, Black);
	   			  ssd1306_DrawPixel(0+x,4+y, Black);
	   			  ssd1306_DrawPixel(0+x,5+y, Black);
	   			  ssd1306_DrawPixel(0+x,6+y, Black);
	   			  ssd1306_DrawPixel(0+x,7+y, Black);


	   			  ssd1306_DrawPixel(31+x,0+y, Black);
	   			  ssd1306_DrawPixel(31+x,1+y, Black);
	   			  ssd1306_DrawPixel(31+x,2+y, Black);
	   			  ssd1306_DrawPixel(31+x,3+y, Black);
	   			  ssd1306_DrawPixel(31+x,4+y, Black);
	   			  ssd1306_DrawPixel(31+x,5+y, Black);
	   			  ssd1306_DrawPixel(31+x,6+y, Black);
	   			  ssd1306_DrawPixel(31+x,7+y, Black);


	   			ssd1306_UpdateScreen();

}
void ssd1306_tetris_R_White(int x, int y){


	   			  ssd1306_DrawPixel(0+x,0+y, White);
	   			  ssd1306_DrawPixel(1+x,0+y, White);
	   			  ssd1306_DrawPixel(2+x,0+y, White);
	   			  ssd1306_DrawPixel(3+x,0+y, White);
	   			  ssd1306_DrawPixel(4+x,0+y, White);
	   			  ssd1306_DrawPixel(5+x,0+y, White);
	   			  ssd1306_DrawPixel(6+x,0+y, White);
	   			  ssd1306_DrawPixel(7+x,0+y, White);
	   			  ssd1306_DrawPixel(8+x,0+y, White);
	   			  ssd1306_DrawPixel(9+x,0+y, White);
	   			  ssd1306_DrawPixel(10+x,0+y,White);
	   			  ssd1306_DrawPixel(11+x,0+y,White);
	   			  ssd1306_DrawPixel(12+x,0+y,White);
	   			  ssd1306_DrawPixel(13+x,0+y,White);
	   			  ssd1306_DrawPixel(14+x,0+y,White);
	   			  ssd1306_DrawPixel(15+x,0+y,White);
	   			  ssd1306_DrawPixel(16+x,0+y,White);
	   			  ssd1306_DrawPixel(17+x,0+y, White);
	   			  ssd1306_DrawPixel(18+x,0+y, White);
	   			  ssd1306_DrawPixel(19+x,0+y, White);
	   			  ssd1306_DrawPixel(20+x,0+y, White);
	   			  ssd1306_DrawPixel(21+x,0+y, White);
	   			  ssd1306_DrawPixel(22+x,0+y, White);
	   			  ssd1306_DrawPixel(23+x,0+y, White);
	   			  ssd1306_DrawPixel(24+x,0+y, White);
	   			  ssd1306_DrawPixel(25+x,0+y, White);
	   			  ssd1306_DrawPixel(26+x,0+y, White);
	   			  ssd1306_DrawPixel(27+x,0+y,White);
	   			  ssd1306_DrawPixel(28+x,0+y,White);
	   			  ssd1306_DrawPixel(29+x,0+y,White);
	   			  ssd1306_DrawPixel(30+x,0+y,White);
	   			  ssd1306_DrawPixel(31+x,0+y,White);

	   			  ssd1306_DrawPixel(0+x,7+y, White);
	   			  ssd1306_DrawPixel(1+x,7+y, White);
	   			  ssd1306_DrawPixel(2+x,7+y, White);
	   			  ssd1306_DrawPixel(3+x,7+y, White);
	   			  ssd1306_DrawPixel(4+x,7+y, White);
	   			  ssd1306_DrawPixel(5+x,7+y, White);
	   			  ssd1306_DrawPixel(6+x,7+y, White);
	   			  ssd1306_DrawPixel(7+x,7+y, White);
	   			  ssd1306_DrawPixel(8+x,7+y, White);
	   			  ssd1306_DrawPixel(9+x,7+y, White);
	   			  ssd1306_DrawPixel(10+x,7+y,White);
	   			  ssd1306_DrawPixel(11+x,7+y,White);
	   			  ssd1306_DrawPixel(12+x,7+y,White);
	   			  ssd1306_DrawPixel(13+x,7+y,White);
	   			  ssd1306_DrawPixel(14+x,7+y,White);
	   			  ssd1306_DrawPixel(15+x,7+y,White);
	   			  ssd1306_DrawPixel(16+x,7+y,White);
	   			  ssd1306_DrawPixel(17+x,7+y, White);
	   			  ssd1306_DrawPixel(18+x,7+y, White);
	   			  ssd1306_DrawPixel(19+x,7+y, White);
	   			  ssd1306_DrawPixel(20+x,7+y, White);
	   			  ssd1306_DrawPixel(21+x,7+y, White);
	   			  ssd1306_DrawPixel(22+x,7+y, White);
	   			  ssd1306_DrawPixel(23+x,7+y, White);
	   			  ssd1306_DrawPixel(24+x,7+y, White);
	   			  ssd1306_DrawPixel(25+x,7+y, White);
	   			  ssd1306_DrawPixel(26+x,7+y, White);
	   			  ssd1306_DrawPixel(27+x,7+y,White);
	   			  ssd1306_DrawPixel(28+x,7+y,White);
	   			  ssd1306_DrawPixel(29+x,7+y,White);
	   			  ssd1306_DrawPixel(30+x,7+y,White);
	   			  ssd1306_DrawPixel(31+x,7+y,White);



	   			  ssd1306_DrawPixel(0+x,0+y, White);
	   			  ssd1306_DrawPixel(0+x,1+y, White);
	   			  ssd1306_DrawPixel(0+x,2+y, White);
	   			  ssd1306_DrawPixel(0+x,3+y, White);
	   			  ssd1306_DrawPixel(0+x,4+y, White);
	   			  ssd1306_DrawPixel(0+x,5+y, White);
	   			  ssd1306_DrawPixel(0+x,6+y, White);
	   			  ssd1306_DrawPixel(0+x,7+y, White);


	   			  ssd1306_DrawPixel(31+x,0+y, White);
	   			  ssd1306_DrawPixel(31+x,1+y, White);
	   			  ssd1306_DrawPixel(31+x,2+y, White);
	   			  ssd1306_DrawPixel(31+x,3+y, White);
	   			  ssd1306_DrawPixel(31+x,4+y, White);
	   			  ssd1306_DrawPixel(31+x,5+y, White);
	   			  ssd1306_DrawPixel(31+x,6+y, White);
	   			  ssd1306_DrawPixel(31+x,7+y, White);


	   			ssd1306_UpdateScreen();

}

void ssd1306_tetris_Z_90_Black(int x, int y){

		ssd1306_DrawPixel(1+x,1+y, Black);
		ssd1306_DrawPixel(2+x,1+y, Black);
		ssd1306_DrawPixel(3+x,1+y, Black);
		ssd1306_DrawPixel(4+x,1+y, Black);
		ssd1306_DrawPixel(5+x,1+y, Black);
		ssd1306_DrawPixel(6+x,1+y, Black);
		ssd1306_DrawPixel(7+x,1+y, Black);
		ssd1306_DrawPixel(8+x,1+y, Black);

		ssd1306_DrawPixel(1+x,2+y, Black);
		ssd1306_DrawPixel(1+x,3+y, Black);
		ssd1306_DrawPixel(1+x,4+y, Black);
		ssd1306_DrawPixel(1+x,5+y, Black);
		ssd1306_DrawPixel(1+x,6+y, Black);
		ssd1306_DrawPixel(1+x,7+y, Black);
		ssd1306_DrawPixel(1+x,8+y, Black);
		ssd1306_DrawPixel(1+x,9+y, Black);
		ssd1306_DrawPixel(1+x,10+y, Black);
		ssd1306_DrawPixel(1+x,11+y, Black);
		ssd1306_DrawPixel(1+x,12+y, Black);
		ssd1306_DrawPixel(1+x,13+y, Black);
		ssd1306_DrawPixel(1+x,14+y, Black);
		ssd1306_DrawPixel(1+x,15+y, Black);
		ssd1306_DrawPixel(1+x,16+y, Black);

		ssd1306_DrawPixel(2+x,16+y, Black);
		ssd1306_DrawPixel(3+x,16+y, Black);
	ssd1306_DrawPixel(4+x,16+y, Black);
	ssd1306_DrawPixel(5+x,16+y, Black);
	ssd1306_DrawPixel(6+x,16+y, Black);
	ssd1306_DrawPixel(7+x,16+y, Black);
	ssd1306_DrawPixel(8+x,16+y, Black);
	ssd1306_DrawPixel(9+x,16+y, Black);

	ssd1306_DrawPixel(9+x,16+y, Black);
	ssd1306_DrawPixel(9+x,17+y, Black);
	ssd1306_DrawPixel(9+x,18+y, Black);
	ssd1306_DrawPixel(9+x,19+y, Black);
	ssd1306_DrawPixel(9+x,20+y, Black);
	ssd1306_DrawPixel(9+x,21+y, Black);
	ssd1306_DrawPixel(9+x,22+y, Black);
	ssd1306_DrawPixel(9+x,23+y, Black);
	ssd1306_DrawPixel(9+x,24+y, Black);

	ssd1306_DrawPixel(10+x,24+y, Black);
	ssd1306_DrawPixel(11+x,24+y, Black);
	ssd1306_DrawPixel(12+x,24+y, Black);
	ssd1306_DrawPixel(13+x,24+y, Black);
	ssd1306_DrawPixel(14+x,24+y, Black);
	ssd1306_DrawPixel(15+x,24+y, Black);
	ssd1306_DrawPixel(16+x,24+y, Black);

	ssd1306_DrawPixel(8+x,2+y, Black);
	ssd1306_DrawPixel(8+x,3+y, Black);
	ssd1306_DrawPixel(8+x,4+y, Black);
	ssd1306_DrawPixel(8+x,5+y, Black);
	ssd1306_DrawPixel(8+x,6+y, Black);
	ssd1306_DrawPixel(8+x,7+y, Black);
	ssd1306_DrawPixel(8+x,8+y, Black);

	ssd1306_DrawPixel(8+x,9+y, Black);
	ssd1306_DrawPixel(9+x,9+y, Black);
	ssd1306_DrawPixel(10+x,9+y, Black);
	ssd1306_DrawPixel(11+x,9+y, Black);
	ssd1306_DrawPixel(12+x,9+y, Black);
	ssd1306_DrawPixel(13+x,9+y, Black);
	ssd1306_DrawPixel(14+x,9+y, Black);
	ssd1306_DrawPixel(15+x,9+y, Black);
	ssd1306_DrawPixel(16+x,9+y, Black);

	ssd1306_DrawPixel(16+x,9+y, Black);
	ssd1306_DrawPixel(16+x,10+y, Black);
	ssd1306_DrawPixel(16+x,11+y, Black);
	ssd1306_DrawPixel(16+x,12+y, Black);
	ssd1306_DrawPixel(16+x,13+y, Black);
	ssd1306_DrawPixel(16+x,14+y, Black);
	ssd1306_DrawPixel(16+x,15+y, Black);
	ssd1306_DrawPixel(16+x,16+y, Black);
	ssd1306_DrawPixel(16+x,17+y, Black);
	ssd1306_DrawPixel(16+x,18+y, Black);
	ssd1306_DrawPixel(16+x,19+y, Black);
	ssd1306_DrawPixel(16+x,20+y, Black);
	ssd1306_DrawPixel(16+x,21+y, Black);
	ssd1306_DrawPixel(16+x,22+y, Black);
	ssd1306_DrawPixel(16+x,23+y, Black);

	   			ssd1306_UpdateScreen();


}
void ssd1306_tetris_Z_90_White(int x, int y){

		ssd1306_DrawPixel(1+x,1+y, White);
		ssd1306_DrawPixel(2+x,1+y, White);
		ssd1306_DrawPixel(3+x,1+y, White);
		ssd1306_DrawPixel(4+x,1+y, White);
		ssd1306_DrawPixel(5+x,1+y, White);
		ssd1306_DrawPixel(6+x,1+y, White);
		ssd1306_DrawPixel(7+x,1+y, White);
		ssd1306_DrawPixel(8+x,1+y, White);

		ssd1306_DrawPixel(1+x,2+y, White);
		ssd1306_DrawPixel(1+x,3+y, White);
		ssd1306_DrawPixel(1+x,4+y, White);
		ssd1306_DrawPixel(1+x,5+y, White);
		ssd1306_DrawPixel(1+x,6+y, White);
		ssd1306_DrawPixel(1+x,7+y, White);
		ssd1306_DrawPixel(1+x,8+y, White);
		ssd1306_DrawPixel(1+x,9+y, White);
		ssd1306_DrawPixel(1+x,10+y, White);
		ssd1306_DrawPixel(1+x,11+y, White);
		ssd1306_DrawPixel(1+x,12+y, White);
		ssd1306_DrawPixel(1+x,13+y, White);
		ssd1306_DrawPixel(1+x,14+y, White);
		ssd1306_DrawPixel(1+x,15+y, White);
		ssd1306_DrawPixel(1+x,16+y, White);

		ssd1306_DrawPixel(2+x,16+y, White);
		ssd1306_DrawPixel(3+x,16+y, White);
	ssd1306_DrawPixel(4+x,16+y, White);
	ssd1306_DrawPixel(5+x,16+y, White);
	ssd1306_DrawPixel(6+x,16+y, White);
	ssd1306_DrawPixel(7+x,16+y, White);
	ssd1306_DrawPixel(8+x,16+y, White);
	ssd1306_DrawPixel(9+x,16+y, White);

	ssd1306_DrawPixel(9+x,16+y, White);
	ssd1306_DrawPixel(9+x,17+y, White);
	ssd1306_DrawPixel(9+x,18+y, White);
	ssd1306_DrawPixel(9+x,19+y, White);
	ssd1306_DrawPixel(9+x,20+y, White);
	ssd1306_DrawPixel(9+x,21+y, White);
	ssd1306_DrawPixel(9+x,22+y, White);
	ssd1306_DrawPixel(9+x,23+y, White);
	ssd1306_DrawPixel(9+x,24+y, White);

	ssd1306_DrawPixel(10+x,24+y, White);
	ssd1306_DrawPixel(11+x,24+y, White);
	ssd1306_DrawPixel(12+x,24+y, White);
	ssd1306_DrawPixel(13+x,24+y, White);
	ssd1306_DrawPixel(14+x,24+y, White);
	ssd1306_DrawPixel(15+x,24+y, White);
	ssd1306_DrawPixel(16+x,24+y, White);

	ssd1306_DrawPixel(8+x,2+y, White);
	ssd1306_DrawPixel(8+x,3+y, White);
	ssd1306_DrawPixel(8+x,4+y, White);
	ssd1306_DrawPixel(8+x,5+y, White);
	ssd1306_DrawPixel(8+x,6+y, White);
	ssd1306_DrawPixel(8+x,7+y, White);
	ssd1306_DrawPixel(8+x,8+y, White);

	ssd1306_DrawPixel(8+x,9+y, White);
	ssd1306_DrawPixel(9+x,9+y, White);
	ssd1306_DrawPixel(10+x,9+y, White);
	ssd1306_DrawPixel(11+x,9+y, White);
	ssd1306_DrawPixel(12+x,9+y, White);
	ssd1306_DrawPixel(13+x,9+y, White);
	ssd1306_DrawPixel(14+x,9+y, White);
	ssd1306_DrawPixel(15+x,9+y, White);
	ssd1306_DrawPixel(16+x,9+y, White);

	ssd1306_DrawPixel(16+x,9+y, White);
	ssd1306_DrawPixel(16+x,10+y, White);
	ssd1306_DrawPixel(16+x,11+y, White);
	ssd1306_DrawPixel(16+x,12+y, White);
	ssd1306_DrawPixel(16+x,13+y, White);
	ssd1306_DrawPixel(16+x,14+y, White);
	ssd1306_DrawPixel(16+x,15+y, White);
	ssd1306_DrawPixel(16+x,16+y, White);
	ssd1306_DrawPixel(16+x,17+y, White);
	ssd1306_DrawPixel(16+x,18+y, White);
	ssd1306_DrawPixel(16+x,19+y, White);
	ssd1306_DrawPixel(16+x,20+y, White);
	ssd1306_DrawPixel(16+x,21+y, White);
	ssd1306_DrawPixel(16+x,22+y, White);
	ssd1306_DrawPixel(16+x,23+y, White);
		ssd1306_UpdateScreen();
}

void ssd1306_tetris_Z_Black(int x, int y) {

	ssd1306_DrawPixel(1+x,9+ y, Black);
	ssd1306_DrawPixel(1+x,10+ y, Black);
	ssd1306_DrawPixel(1+x,11+ y, Black);
	ssd1306_DrawPixel(1+x,12+ y, Black);
	ssd1306_DrawPixel(1+x,13+ y, Black);
	ssd1306_DrawPixel(1+x,14+ y, Black);
	ssd1306_DrawPixel(1+x,15+ y, Black);
	ssd1306_DrawPixel(1+x,16+ y, Black);

	ssd1306_DrawPixel(2+x,16+ y, Black);
	ssd1306_DrawPixel(3+x,16+ y, Black);
	ssd1306_DrawPixel(4+x,16+ y, Black);
	ssd1306_DrawPixel(5+x,16+ y, Black);
	ssd1306_DrawPixel(6+x,16+ y, Black);
	ssd1306_DrawPixel(7+x,16+ y, Black);
	ssd1306_DrawPixel(8+x,16+ y, Black);
	ssd1306_DrawPixel(9+x,16+ y, Black);
	ssd1306_DrawPixel(10+x,16+ y, Black);
	ssd1306_DrawPixel(11+x,16+ y, Black);
	ssd1306_DrawPixel(12+x,16+ y, Black);
	ssd1306_DrawPixel(13+x,16+ y, Black);
	ssd1306_DrawPixel(14+x,16+ y, Black);
	ssd1306_DrawPixel(15+x,16+ y, Black);
	ssd1306_DrawPixel(16+x,16+ y, Black);

	ssd1306_DrawPixel(16+x,15+ y, Black);
	ssd1306_DrawPixel(16+x,14+ y, Black);
	ssd1306_DrawPixel(16+x,13+ y, Black);
	ssd1306_DrawPixel(16+x,12+ y, Black);
	ssd1306_DrawPixel(16+x,11+ y, Black);
	ssd1306_DrawPixel(16+x,10+ y, Black);
	ssd1306_DrawPixel(16+x,9+ y, Black);
	ssd1306_DrawPixel(16+x,8+ y, Black);

	ssd1306_DrawPixel(17+x,8+ y, Black);
	ssd1306_DrawPixel(18+x,8+ y, Black);
	ssd1306_DrawPixel(19+x,8+ y, Black);
	ssd1306_DrawPixel(20+x,8+ y, Black);
	ssd1306_DrawPixel(21+x,8+ y, Black);
	ssd1306_DrawPixel(22+x,8+ y, Black);
	ssd1306_DrawPixel(23+x,8+ y, Black);
	ssd1306_DrawPixel(24+x,8+ y, Black);

	ssd1306_DrawPixel(24+x,7+ y, Black);
	ssd1306_DrawPixel(24+x,6+ y, Black);
	ssd1306_DrawPixel(24+x,5+ y, Black);
	ssd1306_DrawPixel(24+x,4+ y, Black);
	ssd1306_DrawPixel(24+x,3+ y, Black);
	ssd1306_DrawPixel(24+x,2+ y, Black);
	ssd1306_DrawPixel(24+x,1+ y, Black);

	ssd1306_DrawPixel(23+x,1+ y, Black);
	ssd1306_DrawPixel(22+x,1+ y, Black);
	ssd1306_DrawPixel(21+x,1+ y, Black);
	ssd1306_DrawPixel(20+x,1+ y, Black);
	ssd1306_DrawPixel(19+x,1+ y, Black);
	ssd1306_DrawPixel(18+x,1+ y, Black);
	ssd1306_DrawPixel(17+x,1+ y, Black);
	ssd1306_DrawPixel(16+x,1+ y, Black);
	ssd1306_DrawPixel(15+x,1+ y, Black);
	ssd1306_DrawPixel(14+x,1+ y, Black);
	ssd1306_DrawPixel(13+x,1+ y, Black);
	ssd1306_DrawPixel(12+x,1+ y, Black);
	ssd1306_DrawPixel(11+x,1+ y, Black);
	ssd1306_DrawPixel(10+x,1+ y, Black);
	ssd1306_DrawPixel(9+x,1+ y, Black);


	ssd1306_DrawPixel(9+x,2+ y, Black);
	ssd1306_DrawPixel(9+x,3+ y, Black);
	ssd1306_DrawPixel(9+x,4+ y, Black);
	ssd1306_DrawPixel(9+x,5+ y, Black);
	ssd1306_DrawPixel(9+x,6+ y, Black);
	ssd1306_DrawPixel(9+x,7+ y, Black);
	ssd1306_DrawPixel(9+x,8+ y, Black);
	ssd1306_DrawPixel(9+x,9+ y, Black);

	ssd1306_DrawPixel(8+x,9+ y, Black);
	ssd1306_DrawPixel(7+x,9+ y, Black);
	ssd1306_DrawPixel(6+x,9+ y, Black);
	ssd1306_DrawPixel(5+x,9+ y, Black);
	ssd1306_DrawPixel(4+x,9+ y, Black);
	ssd1306_DrawPixel(3+x,9+ y, Black);
	ssd1306_DrawPixel(2+x,9+ y, Black);

    ssd1306_UpdateScreen();
}
void ssd1306_tetris_Z_White(int x, int y) {

	ssd1306_DrawPixel(1+x,9+ y, White);
	ssd1306_DrawPixel(1+x,10+ y, White);
	ssd1306_DrawPixel(1+x,11+ y, White);
	ssd1306_DrawPixel(1+x,12+ y, White);
	ssd1306_DrawPixel(1+x,13+ y, White);
	ssd1306_DrawPixel(1+x,14+ y, White);
	ssd1306_DrawPixel(1+x,15+ y, White);
	ssd1306_DrawPixel(1+x,16+ y, White);

	ssd1306_DrawPixel(2+x,16+ y, White);
	ssd1306_DrawPixel(3+x,16+ y, White);
	ssd1306_DrawPixel(4+x,16+ y, White);
	ssd1306_DrawPixel(5+x,16+ y, White);
	ssd1306_DrawPixel(6+x,16+ y, White);
	ssd1306_DrawPixel(7+x,16+ y, White);
	ssd1306_DrawPixel(8+x,16+ y, White);
	ssd1306_DrawPixel(9+x,16+ y, White);
	ssd1306_DrawPixel(10+x,16+ y, White);
	ssd1306_DrawPixel(11+x,16+ y, White);
	ssd1306_DrawPixel(12+x,16+ y, White);
	ssd1306_DrawPixel(13+x,16+ y, White);
	ssd1306_DrawPixel(14+x,16+ y, White);
	ssd1306_DrawPixel(15+x,16+ y, White);
	ssd1306_DrawPixel(16+x,16+ y, White);

	ssd1306_DrawPixel(16+x,15+ y, White);
	ssd1306_DrawPixel(16+x,14+ y, White);
	ssd1306_DrawPixel(16+x,13+ y, White);
	ssd1306_DrawPixel(16+x,12+ y, White);
	ssd1306_DrawPixel(16+x,11+ y, White);
	ssd1306_DrawPixel(16+x,10+ y, White);
	ssd1306_DrawPixel(16+x,9+ y, White);
	ssd1306_DrawPixel(16+x,8+ y, White);

	ssd1306_DrawPixel(17+x,8+ y, White);
	ssd1306_DrawPixel(18+x,8+ y, White);
	ssd1306_DrawPixel(19+x,8+ y, White);
	ssd1306_DrawPixel(20+x,8+ y, White);
	ssd1306_DrawPixel(21+x,8+ y, White);
	ssd1306_DrawPixel(22+x,8+ y, White);
	ssd1306_DrawPixel(23+x,8+ y, White);
	ssd1306_DrawPixel(24+x,8+ y, White);

	ssd1306_DrawPixel(24+x,7+ y, White);
	ssd1306_DrawPixel(24+x,6+ y, White);
	ssd1306_DrawPixel(24+x,5+ y, White);
	ssd1306_DrawPixel(24+x,4+ y, White);
	ssd1306_DrawPixel(24+x,3+ y, White);
	ssd1306_DrawPixel(24+x,2+ y, White);
	ssd1306_DrawPixel(24+x,1+ y, White);

	ssd1306_DrawPixel(23+x,1+ y, White);
	ssd1306_DrawPixel(22+x,1+ y, White);
	ssd1306_DrawPixel(21+x,1+ y, White);
	ssd1306_DrawPixel(20+x,1+ y, White);
	ssd1306_DrawPixel(19+x,1+ y, White);
	ssd1306_DrawPixel(18+x,1+ y, White);
	ssd1306_DrawPixel(17+x,1+ y, White);
	ssd1306_DrawPixel(16+x,1+ y, White);
	ssd1306_DrawPixel(15+x,1+ y, White);
	ssd1306_DrawPixel(14+x,1+ y, White);
	ssd1306_DrawPixel(13+x,1+ y, White);
	ssd1306_DrawPixel(12+x,1+ y, White);
	ssd1306_DrawPixel(11+x,1+ y, White);
	ssd1306_DrawPixel(10+x,1+ y, White);
	ssd1306_DrawPixel(9+x,1+ y, White);


	ssd1306_DrawPixel(9+x,2+ y, White);
	ssd1306_DrawPixel(9+x,3+ y, White);
	ssd1306_DrawPixel(9+x,4+ y, White);
	ssd1306_DrawPixel(9+x,5+ y, White);
	ssd1306_DrawPixel(9+x,6+ y, White);
	ssd1306_DrawPixel(9+x,7+ y, White);
	ssd1306_DrawPixel(9+x,8+ y, White);
	ssd1306_DrawPixel(9+x,9+ y, White);

	ssd1306_DrawPixel(8+x,9+ y, White);
	ssd1306_DrawPixel(7+x,9+ y, White);
	ssd1306_DrawPixel(6+x,9+ y, White);
	ssd1306_DrawPixel(5+x,9+ y, White);
	ssd1306_DrawPixel(4+x,9+ y, White);
	ssd1306_DrawPixel(3+x,9+ y, White);
	ssd1306_DrawPixel(2+x,9+ y, White);

    ssd1306_UpdateScreen();
}

void ssd1306_tetris_T_Black(int x, int y) {

	ssd1306_DrawPixel(16+x,1+y, Black);
		ssd1306_DrawPixel(16+x,2+y, Black);
		ssd1306_DrawPixel(16+x,3+y, Black);
		ssd1306_DrawPixel(16+x,4+y, Black);
		ssd1306_DrawPixel(16+x,5+y, Black);
		ssd1306_DrawPixel(16+x,6+y, Black);
		ssd1306_DrawPixel(16+x,7+y, Black);
		ssd1306_DrawPixel(16+x,8+y, Black);
		ssd1306_DrawPixel(16+x,9+y, Black);
		ssd1306_DrawPixel(16+x,10+y, Black);
		ssd1306_DrawPixel(16+x,11+y, Black);
		ssd1306_DrawPixel(16+x,12+y, Black);
		ssd1306_DrawPixel(16+x,13+y, Black);
		ssd1306_DrawPixel(16+x,14+y, Black);
		ssd1306_DrawPixel(16+x,15+y, Black);
		ssd1306_DrawPixel(16+x,16+y, Black);
		ssd1306_DrawPixel(16+x,17+y, Black);
		ssd1306_DrawPixel(16+x,18+y, Black);
		ssd1306_DrawPixel(16+x,19+y, Black);
		ssd1306_DrawPixel(16+x,20+y, Black);
		ssd1306_DrawPixel(16+x,21+y, Black);
		ssd1306_DrawPixel(16+x,22+y, Black);
		ssd1306_DrawPixel(16+x,23+y, Black);
		ssd1306_DrawPixel(16+x,24+y, Black);

		ssd1306_DrawPixel(9+x,1+y, Black);
		ssd1306_DrawPixel(9+x,2+y, Black);
		ssd1306_DrawPixel(9+x,3+y, Black);
		ssd1306_DrawPixel(9+x,4+y, Black);
		ssd1306_DrawPixel(9+x,5+y, Black);
		ssd1306_DrawPixel(9+x,6+y, Black);
		ssd1306_DrawPixel(9+x,7+y, Black);
		ssd1306_DrawPixel(9+x,8+y, Black);
		ssd1306_DrawPixel(9+x,9+y, Black);

		ssd1306_DrawPixel(9+x,16+y, Black);
		ssd1306_DrawPixel(9+x,17+y, Black);
		ssd1306_DrawPixel(9+x,18+y, Black);
		ssd1306_DrawPixel(9+x,19+y, Black);
		ssd1306_DrawPixel(9+x,20+y, Black);
		ssd1306_DrawPixel(9+x,21+y, Black);
		ssd1306_DrawPixel(9+x,22+y, Black);
		ssd1306_DrawPixel(9+x,23+y, Black);


		ssd1306_DrawPixel(10+x,1+y, Black);
		ssd1306_DrawPixel(11+x,1+y, Black);
		ssd1306_DrawPixel(12+x,1+y, Black);
		ssd1306_DrawPixel(13+x,1+y, Black);
		ssd1306_DrawPixel(14+x,1+y, Black);
		ssd1306_DrawPixel(15+x,1+y, Black);

		ssd1306_DrawPixel(9+x,24+y, Black);
		ssd1306_DrawPixel(10+x,24+y, Black);
		ssd1306_DrawPixel(11+x,24+y, Black);
		ssd1306_DrawPixel(12+x,24+y, Black);
		ssd1306_DrawPixel(13+x,24+y, Black);
		ssd1306_DrawPixel(14+x,24+y, Black);
		ssd1306_DrawPixel(15+x,24+y, Black);

		ssd1306_DrawPixel(1+x,16+y, Black);
		ssd1306_DrawPixel(2+x,16+y, Black);
		ssd1306_DrawPixel(3+x,16+y, Black);
		ssd1306_DrawPixel(4+x,16+y, Black);
		ssd1306_DrawPixel(5+x,16+y, Black);
		ssd1306_DrawPixel(6+x,16+y, Black);
		ssd1306_DrawPixel(7+x,16+y, Black);
		ssd1306_DrawPixel(8+x,16+y, Black);

		ssd1306_DrawPixel(1+x,9+y, Black);
		ssd1306_DrawPixel(2+x,9+y, Black);
		ssd1306_DrawPixel(3+x,9+y, Black);
		ssd1306_DrawPixel(4+x,9+y, Black);
		ssd1306_DrawPixel(5+x,9+y, Black);
		ssd1306_DrawPixel(6+x,9+y, Black);
		ssd1306_DrawPixel(7+x,9+y, Black);
		ssd1306_DrawPixel(8+x,9+y, Black);

		ssd1306_DrawPixel(1+x,10+y, Black);
		ssd1306_DrawPixel(1+x,11+y, Black);
		ssd1306_DrawPixel(1+x,12+y, Black);
		ssd1306_DrawPixel(1+x,13+y, Black);
		ssd1306_DrawPixel(1+x,14+y, Black);
		ssd1306_DrawPixel(1+x,15+y, Black);

	    ssd1306_UpdateScreen();
}
void ssd1306_tetris_T_White(int x, int y) {

	ssd1306_DrawPixel(16+x,1+y, White);
	ssd1306_DrawPixel(16+x,2+y, White);
	ssd1306_DrawPixel(16+x,3+y, White);
	ssd1306_DrawPixel(16+x,4+y, White);
	ssd1306_DrawPixel(16+x,5+y, White);
	ssd1306_DrawPixel(16+x,6+y, White);
	ssd1306_DrawPixel(16+x,7+y, White);
	ssd1306_DrawPixel(16+x,8+y, White);
	ssd1306_DrawPixel(16+x,9+y, White);
	ssd1306_DrawPixel(16+x,10+y, White);
	ssd1306_DrawPixel(16+x,11+y, White);
	ssd1306_DrawPixel(16+x,12+y, White);
	ssd1306_DrawPixel(16+x,13+y, White);
	ssd1306_DrawPixel(16+x,14+y, White);
	ssd1306_DrawPixel(16+x,15+y, White);
	ssd1306_DrawPixel(16+x,16+y, White);
	ssd1306_DrawPixel(16+x,17+y, White);
	ssd1306_DrawPixel(16+x,18+y, White);
	ssd1306_DrawPixel(16+x,19+y, White);
	ssd1306_DrawPixel(16+x,20+y, White);
	ssd1306_DrawPixel(16+x,21+y, White);
	ssd1306_DrawPixel(16+x,22+y, White);
	ssd1306_DrawPixel(16+x,23+y, White);
	ssd1306_DrawPixel(16+x,24+y, White);

	ssd1306_DrawPixel(9+x,1+y, White);
	ssd1306_DrawPixel(9+x,2+y, White);
	ssd1306_DrawPixel(9+x,3+y, White);
	ssd1306_DrawPixel(9+x,4+y, White);
	ssd1306_DrawPixel(9+x,5+y, White);
	ssd1306_DrawPixel(9+x,6+y, White);
	ssd1306_DrawPixel(9+x,7+y, White);
	ssd1306_DrawPixel(9+x,8+y, White);
	ssd1306_DrawPixel(9+x,9+y, White);

	ssd1306_DrawPixel(9+x,16+y, White);
	ssd1306_DrawPixel(9+x,17+y, White);
	ssd1306_DrawPixel(9+x,18+y, White);
	ssd1306_DrawPixel(9+x,19+y, White);
	ssd1306_DrawPixel(9+x,20+y, White);
	ssd1306_DrawPixel(9+x,21+y, White);
	ssd1306_DrawPixel(9+x,22+y, White);
	ssd1306_DrawPixel(9+x,23+y, White);


	ssd1306_DrawPixel(10+x,1+y, White);
	ssd1306_DrawPixel(11+x,1+y, White);
	ssd1306_DrawPixel(12+x,1+y, White);
	ssd1306_DrawPixel(13+x,1+y, White);
	ssd1306_DrawPixel(14+x,1+y, White);
	ssd1306_DrawPixel(15+x,1+y, White);

	ssd1306_DrawPixel(9+x,24+y, White);
	ssd1306_DrawPixel(10+x,24+y, White);
	ssd1306_DrawPixel(11+x,24+y, White);
	ssd1306_DrawPixel(12+x,24+y, White);
	ssd1306_DrawPixel(13+x,24+y, White);
	ssd1306_DrawPixel(14+x,24+y, White);
	ssd1306_DrawPixel(15+x,24+y, White);

	ssd1306_DrawPixel(1+x,16+y, White);
	ssd1306_DrawPixel(2+x,16+y, White);
	ssd1306_DrawPixel(3+x,16+y, White);
	ssd1306_DrawPixel(4+x,16+y, White);
	ssd1306_DrawPixel(5+x,16+y, White);
	ssd1306_DrawPixel(6+x,16+y, White);
	ssd1306_DrawPixel(7+x,16+y, White);
	ssd1306_DrawPixel(8+x,16+y, White);

	ssd1306_DrawPixel(1+x,9+y, White);
	ssd1306_DrawPixel(2+x,9+y, White);
	ssd1306_DrawPixel(3+x,9+y, White);
	ssd1306_DrawPixel(4+x,9+y, White);
	ssd1306_DrawPixel(5+x,9+y, White);
	ssd1306_DrawPixel(6+x,9+y, White);
	ssd1306_DrawPixel(7+x,9+y, White);
	ssd1306_DrawPixel(8+x,9+y, White);

	ssd1306_DrawPixel(1+x,10+y, White);
	ssd1306_DrawPixel(1+x,11+y, White);
	ssd1306_DrawPixel(1+x,12+y, White);
	ssd1306_DrawPixel(1+x,13+y, White);
	ssd1306_DrawPixel(1+x,14+y, White);
	ssd1306_DrawPixel(1+x,15+y, White);

    ssd1306_UpdateScreen();
}

void ssd1306_tetris_T_links_Black(int x, int y) {

	ssd1306_DrawPixel(1+x,16+y, Black);
	ssd1306_DrawPixel(2+x,16+y, Black);
	ssd1306_DrawPixel(3+x,16+y, Black);
	ssd1306_DrawPixel(4+x,16+y, Black);
	ssd1306_DrawPixel(5+x,16+y, Black);
	ssd1306_DrawPixel(6+x,16+y, Black);
	ssd1306_DrawPixel(7+x,16+y, Black);
	ssd1306_DrawPixel(8+x,16+y, Black);
	ssd1306_DrawPixel(9+x,16+y, Black);
	ssd1306_DrawPixel(10+x,16+y, Black);
	ssd1306_DrawPixel(11+x,16+y, Black);
	ssd1306_DrawPixel(12+x,16+y, Black);
	ssd1306_DrawPixel(13+x,16+y, Black);
	ssd1306_DrawPixel(14+x,16+y, Black);
	ssd1306_DrawPixel(15+x,16+y, Black);
	ssd1306_DrawPixel(16+x,16+y, Black);
	ssd1306_DrawPixel(17+x,16+y, Black);
	ssd1306_DrawPixel(18+x,16+y, Black);
	ssd1306_DrawPixel(19+x,16+y, Black);
	ssd1306_DrawPixel(20+x,16+y, Black);
	ssd1306_DrawPixel(21+x,16+y, Black);
	ssd1306_DrawPixel(22+x,16+y, Black);
	ssd1306_DrawPixel(23+x,16+y, Black);
	ssd1306_DrawPixel(24+x,16+y, Black);

	ssd1306_DrawPixel(1+x,9+y, Black);
	ssd1306_DrawPixel(1+x,10+y, Black);
	ssd1306_DrawPixel(1+x,11+y, Black);
	ssd1306_DrawPixel(1+x,12+y, Black);
	ssd1306_DrawPixel(1+x,13+y, Black);
	ssd1306_DrawPixel(1+x,14+y, Black);
	ssd1306_DrawPixel(1+x,15+y, Black);
	ssd1306_DrawPixel(1+x,16+y, Black);

	ssd1306_DrawPixel(24+x,9+y, Black);
	ssd1306_DrawPixel(24+x,10+y, Black);
	ssd1306_DrawPixel(24+x,11+y, Black);
	ssd1306_DrawPixel(24+x,12+y, Black);
	ssd1306_DrawPixel(24+x,13+y, Black);
	ssd1306_DrawPixel(24+x,14+y, Black);
	ssd1306_DrawPixel(24+x,15+y, Black);

	ssd1306_DrawPixel(2+x,9+y, Black);
	ssd1306_DrawPixel(3+x,9+y, Black);
	ssd1306_DrawPixel(4+x,9+y, Black);
	ssd1306_DrawPixel(5+x,9+y, Black);
	ssd1306_DrawPixel(6+x,9+y, Black);
	ssd1306_DrawPixel(7+x,9+y, Black);
	ssd1306_DrawPixel(8+x,9+y, Black);
	ssd1306_DrawPixel(9+x,9+y, Black);

	ssd1306_DrawPixel(16+x,9+y, Black);
	ssd1306_DrawPixel(17+x,9+y, Black);
	ssd1306_DrawPixel(18+x,9+y, Black);
	ssd1306_DrawPixel(19+x,9+y, Black);
	ssd1306_DrawPixel(20+x,9+y, Black);
	ssd1306_DrawPixel(21+x,9+y, Black);
	ssd1306_DrawPixel(22+x,9+y, Black);
	ssd1306_DrawPixel(23+x,9+y, Black);

	ssd1306_DrawPixel(9+x,1+y, Black);
	ssd1306_DrawPixel(10+x,1+y, Black);
	ssd1306_DrawPixel(11+x,1+y, Black);
	ssd1306_DrawPixel(12+x,1+y, Black);
	ssd1306_DrawPixel(13+x,1+y, Black);
	ssd1306_DrawPixel(14+x,1+y, Black);
	ssd1306_DrawPixel(15+x,1+y, Black);
	ssd1306_DrawPixel(16+x,1+y, Black);

	ssd1306_DrawPixel(9+x,2+y, Black);
	ssd1306_DrawPixel(9+x,3+y, Black);
	ssd1306_DrawPixel(9+x,4+y, Black);
	ssd1306_DrawPixel(9+x,5+y, Black);
	ssd1306_DrawPixel(9+x,6+y, Black);
	ssd1306_DrawPixel(9+x,7+y, Black);
	ssd1306_DrawPixel(9+x,8+y, Black);

	ssd1306_DrawPixel(16+x,2+y, Black);
	ssd1306_DrawPixel(16+x,3+y, Black);
	ssd1306_DrawPixel(16+x,4+y, Black);
	ssd1306_DrawPixel(16+x,5+y, Black);
	ssd1306_DrawPixel(16+x,6+y, Black);
	ssd1306_DrawPixel(16+x,7+y, Black);
	ssd1306_DrawPixel(16+x,8+y, Black);

	ssd1306_UpdateScreen();
}
void ssd1306_tetris_T_links_White(int x, int y) {

	ssd1306_DrawPixel(1+x,16+y, White);
	ssd1306_DrawPixel(2+x,16+y, White);
	ssd1306_DrawPixel(3+x,16+y, White);
	ssd1306_DrawPixel(4+x,16+y, White);
	ssd1306_DrawPixel(5+x,16+y, White);
	ssd1306_DrawPixel(6+x,16+y, White);
	ssd1306_DrawPixel(7+x,16+y, White);
	ssd1306_DrawPixel(8+x,16+y, White);
	ssd1306_DrawPixel(9+x,16+y, White);
	ssd1306_DrawPixel(10+x,16+y, White);
	ssd1306_DrawPixel(11+x,16+y, White);
	ssd1306_DrawPixel(12+x,16+y, White);
	ssd1306_DrawPixel(13+x,16+y, White);
	ssd1306_DrawPixel(14+x,16+y, White);
	ssd1306_DrawPixel(15+x,16+y, White);
	ssd1306_DrawPixel(16+x,16+y, White);
	ssd1306_DrawPixel(17+x,16+y, White);
	ssd1306_DrawPixel(18+x,16+y, White);
	ssd1306_DrawPixel(19+x,16+y, White);
	ssd1306_DrawPixel(20+x,16+y, White);
	ssd1306_DrawPixel(21+x,16+y, White);
	ssd1306_DrawPixel(22+x,16+y, White);
	ssd1306_DrawPixel(23+x,16+y, White);
	ssd1306_DrawPixel(24+x,16+y, White);

	ssd1306_DrawPixel(1+x,9+y, White);
	ssd1306_DrawPixel(1+x,10+y, White);
	ssd1306_DrawPixel(1+x,11+y, White);
	ssd1306_DrawPixel(1+x,12+y, White);
	ssd1306_DrawPixel(1+x,13+y, White);
	ssd1306_DrawPixel(1+x,14+y, White);
	ssd1306_DrawPixel(1+x,15+y, White);
	ssd1306_DrawPixel(1+x,16+y, White);

	ssd1306_DrawPixel(24+x,9+y, White);
	ssd1306_DrawPixel(24+x,10+y, White);
	ssd1306_DrawPixel(24+x,11+y, White);
	ssd1306_DrawPixel(24+x,12+y, White);
	ssd1306_DrawPixel(24+x,13+y, White);
	ssd1306_DrawPixel(24+x,14+y, White);
	ssd1306_DrawPixel(24+x,15+y, White);

	ssd1306_DrawPixel(2+x,9+y, White);
	ssd1306_DrawPixel(3+x,9+y, White);
	ssd1306_DrawPixel(4+x,9+y, White);
	ssd1306_DrawPixel(5+x,9+y, White);
	ssd1306_DrawPixel(6+x,9+y, White);
	ssd1306_DrawPixel(7+x,9+y, White);
	ssd1306_DrawPixel(8+x,9+y, White);
	ssd1306_DrawPixel(9+x,9+y, White);

	ssd1306_DrawPixel(16+x,9+y, White);
	ssd1306_DrawPixel(17+x,9+y, White);
	ssd1306_DrawPixel(18+x,9+y, White);
	ssd1306_DrawPixel(19+x,9+y, White);
	ssd1306_DrawPixel(20+x,9+y, White);
	ssd1306_DrawPixel(21+x,9+y, White);
	ssd1306_DrawPixel(22+x,9+y, White);
	ssd1306_DrawPixel(23+x,9+y, White);

	ssd1306_DrawPixel(9+x,1+y, White);
	ssd1306_DrawPixel(10+x,1+y, White);
	ssd1306_DrawPixel(11+x,1+y, White);
	ssd1306_DrawPixel(12+x,1+y, White);
	ssd1306_DrawPixel(13+x,1+y, White);
	ssd1306_DrawPixel(14+x,1+y, White);
	ssd1306_DrawPixel(15+x,1+y, White);
	ssd1306_DrawPixel(16+x,1+y, White);

	ssd1306_DrawPixel(9+x,2+y, White);
	ssd1306_DrawPixel(9+x,3+y, White);
	ssd1306_DrawPixel(9+x,4+y, White);
	ssd1306_DrawPixel(9+x,5+y, White);
	ssd1306_DrawPixel(9+x,6+y, White);
	ssd1306_DrawPixel(9+x,7+y, White);
	ssd1306_DrawPixel(9+x,8+y, White);

	ssd1306_DrawPixel(16+x,2+y, White);
	ssd1306_DrawPixel(16+x,3+y, White);
	ssd1306_DrawPixel(16+x,4+y, White);
	ssd1306_DrawPixel(16+x,5+y, White);
	ssd1306_DrawPixel(16+x,6+y, White);
	ssd1306_DrawPixel(16+x,7+y, White);
	ssd1306_DrawPixel(16+x,8+y, White);

	ssd1306_UpdateScreen();
}

void ssd1306_tetris_FillBLack_Outro() {
int x = 0;
int y = 0;
int x2 = 128;


	while(x<65)
	{
		while(y<64)
		{
			ssd1306_DrawPixel(x,y, Black);
			ssd1306_DrawPixel(x2,y, Black);
			y = y +1;
		}
		x = x +1;
		x2 = x2 -1;
		y = 0;
		ssd1306_UpdateScreen();
	}
	ssd1306_UpdateScreen();
}
void ssd1306_tetris_Outro(){
	int x = 128;

		while(x>0){
	    		ssd1306_SetCursor(x + 9, 13);
	    	    ssd1306_WriteString("Demo ended", Font_11x18, White);
	    	    ssd1306_SetCursor(x + 8 ,32);
	    	    ssd1306_WriteString("Ga naar spele.be", Font_7x10, White);
	    	    ssd1306_SetCursor(x + 10,43);
	    	    ssd1306_WriteString("voor de echte deal", Font_6x8, White);
	    	    x = x -1;
	    	    ssd1306_UpdateScreen();
	    }
}


