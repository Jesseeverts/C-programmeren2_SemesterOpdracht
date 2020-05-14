/*
 * ssd1306_test.c
 *
 *  Created on: Jan 30, 2020
 *      Author: 20004719
 */

#include "ssd1306.h"
#include <string.h>
#include <stdio.h>

void ssd1306_smiley() {

	ssd1306_Fill(White);
	  ssd1306_DrawPixel(43, 20, Black);
	  ssd1306_DrawPixel(43, 21, Black);
	  ssd1306_DrawPixel(43, 22, Black);
	  ssd1306_DrawPixel(44, 22, Black);
	  ssd1306_DrawPixel(44, 21, Black);
	  ssd1306_DrawPixel(44, 20, Black);
	  ssd1306_DrawPixel(45, 20, Black);
	  ssd1306_DrawPixel(45, 21, Black);
	  ssd1306_DrawPixel(45, 22, Black);
	  ssd1306_DrawPixel(55, 26, Black);
	  ssd1306_DrawPixel(55, 27, Black);
	  ssd1306_DrawPixel(55, 28, Black);

	  ssd1306_DrawPixel(69, 19, Black);
	  ssd1306_DrawPixel(69, 20, Black);
	  ssd1306_DrawPixel(69, 21, Black);
	  ssd1306_DrawPixel(69, 22, Black);
	  ssd1306_DrawPixel(70, 19, Black);
	  ssd1306_DrawPixel(70, 20, Black);
	  ssd1306_DrawPixel(70, 21, Black);
	  ssd1306_DrawPixel(70, 22, Black);
	  ssd1306_DrawPixel(71, 19, Black);
	  ssd1306_DrawPixel(71, 20, Black);
	  ssd1306_DrawPixel(71, 21, Black);
	  ssd1306_DrawPixel(71, 22, Black);

	  ssd1306_DrawPixel(47, 35, Black);
	  ssd1306_DrawPixel(48, 35, Black);
	  ssd1306_DrawPixel(48, 36, Black);
	  ssd1306_DrawPixel(49, 36, Black);
	  ssd1306_DrawPixel(49, 37, Black);
	  ssd1306_DrawPixel(50, 37, Black);
	  ssd1306_DrawPixel(50, 38, Black);
	  ssd1306_DrawPixel(51, 38, Black);
	  ssd1306_DrawPixel(52, 38, Black);
	  ssd1306_DrawPixel(53, 38, Black);
	  ssd1306_DrawPixel(54, 38, Black);
	  ssd1306_DrawPixel(55, 38, Black);
	  ssd1306_DrawPixel(56, 38, Black);
	  ssd1306_DrawPixel(57, 38, Black);
	  ssd1306_DrawPixel(58, 38, Black);
	  ssd1306_DrawPixel(59, 38, Black);
	  ssd1306_DrawPixel(60, 38, Black);
	  ssd1306_DrawPixel(61, 38, Black);

	  ssd1306_DrawPixel(61, 37, Black);
	  ssd1306_DrawPixel(61, 36, Black);
	  ssd1306_DrawPixel(62, 36, Black);
	  ssd1306_DrawPixel(62, 35, Black);
	  ssd1306_DrawPixel(63, 35, Black);

	  ssd1306_UpdateScreen();
}

void ssd1306_klok2() {
	ssd1306_Fill(White);
			  ssd1306_DrawPixel(18,3, Black);
			  ssd1306_DrawPixel(19,3, Black);
			  ssd1306_DrawPixel(20,3, Black);
			  ssd1306_DrawPixel(21,3, Black);
			  ssd1306_DrawPixel(22,3, Black);

			  ssd1306_DrawPixel(23,3, Black);
			  ssd1306_DrawPixel(24,4, Black);
			  ssd1306_DrawPixel(25,4, Black);
			  ssd1306_DrawPixel(26,4, Black);
			  ssd1306_DrawPixel(27,5, Black);

			  ssd1306_DrawPixel(28,5, Black);
			  ssd1306_DrawPixel(29,5, Black);
			  ssd1306_DrawPixel(29,6, Black);
			  ssd1306_DrawPixel(30,6, Black);
			  ssd1306_DrawPixel(31,7, Black);

			  ssd1306_DrawPixel(32,7, Black);
			  ssd1306_DrawPixel(33,8, Black);
			  ssd1306_DrawPixel(34,9, Black);
			  ssd1306_DrawPixel(35,10, Black);
			  ssd1306_DrawPixel(36,11, Black);

			  ssd1306_DrawPixel(37,12, Black);
			  ssd1306_DrawPixel(38,13, Black);
			  ssd1306_DrawPixel(38,14, Black);
			  ssd1306_DrawPixel(39,14, Black);
			  ssd1306_DrawPixel(39,15, Black);

			  ssd1306_DrawPixel(39,16, Black);
			  ssd1306_DrawPixel(40,16, Black);
			  ssd1306_DrawPixel(40,17, Black);
			  ssd1306_DrawPixel(40,18, Black);
			  ssd1306_DrawPixel(41,18, Black);

			  ssd1306_DrawPixel(41,19, Black);
			  ssd1306_DrawPixel(41,20, Black);
			  ssd1306_DrawPixel(41,21, Black);
			  ssd1306_DrawPixel(42,21, Black);
			  ssd1306_DrawPixel(42,22, Black);

			  ssd1306_DrawPixel(42,23, Black);
			  ssd1306_DrawPixel(42,24, Black);
			  ssd1306_DrawPixel(42,25, Black);
			  ssd1306_DrawPixel(42,26, Black);
			  ssd1306_DrawPixel(42,27, Black);

			  ssd1306_DrawPixel(41,26, Black);
			  ssd1306_DrawPixel(41,25, Black);
			  ssd1306_DrawPixel(40,25, Black);
			  ssd1306_DrawPixel(40,24, Black);
			  ssd1306_DrawPixel(39,24, Black);

			  ssd1306_DrawPixel(39,23, Black);
			  ssd1306_DrawPixel(38,23, Black);
			  ssd1306_DrawPixel(38,22, Black);
			  ssd1306_DrawPixel(37,21, Black);
			  ssd1306_DrawPixel(43,26, Black);

			  ssd1306_DrawPixel(43,25, Black);
			  ssd1306_DrawPixel(43,24, Black);
			  ssd1306_DrawPixel(44,24, Black);
			  ssd1306_DrawPixel(44,25, Black);
			  ssd1306_DrawPixel(44,23, Black);

			  ssd1306_DrawPixel(45,23, Black);
			  ssd1306_DrawPixel(45,22, Black);
			  ssd1306_DrawPixel(45,21, Black);
			  ssd1306_DrawPixel(46,20, Black);

			  ssd1306_DrawPixel(1,25, Black);
			  ssd1306_DrawPixel(1,26, Black);
			  ssd1306_DrawPixel(1,27, Black);
			  ssd1306_DrawPixel(1,28, Black);
			  ssd1306_DrawPixel(1,29, Black);

			  ssd1306_DrawPixel(1,30, Black);
			  ssd1306_DrawPixel(2,31, Black);
			  ssd1306_DrawPixel(2,32, Black);
			  ssd1306_DrawPixel(2,33, Black);
			  ssd1306_DrawPixel(3,34, Black);

			  ssd1306_DrawPixel(3,35, Black);
			  ssd1306_DrawPixel(4,36, Black);
			  ssd1306_DrawPixel(4,37, Black);
			  ssd1306_DrawPixel(5,37, Black);
			  ssd1306_DrawPixel(5,38, Black);

			  ssd1306_DrawPixel(6,38, Black);
			  ssd1306_DrawPixel(6,39, Black);
			  ssd1306_DrawPixel(7,39, Black);
			  ssd1306_DrawPixel(7,40, Black);
			  ssd1306_DrawPixel(8,41, Black);

			  ssd1306_DrawPixel(9,41, Black);
			  ssd1306_DrawPixel(10,42, Black);
			  ssd1306_DrawPixel(11,42, Black);
			  ssd1306_DrawPixel(12,43, Black);
			  ssd1306_DrawPixel(13,43, Black);

			  ssd1306_DrawPixel(14,43, Black);
			  ssd1306_DrawPixel(15,44, Black);
			  ssd1306_DrawPixel(16,44, Black);
			  ssd1306_DrawPixel(17,44, Black);
			  ssd1306_DrawPixel(18,44, Black);

			  ssd1306_DrawPixel(19,44, Black);
			  ssd1306_DrawPixel(20,44, Black);
			  ssd1306_DrawPixel(21,44, Black);
			  ssd1306_DrawPixel(22,44, Black);
			  ssd1306_DrawPixel(23,43, Black);

			  ssd1306_DrawPixel(24,43, Black);
			  ssd1306_DrawPixel(25,43, Black);
			  ssd1306_DrawPixel(26,42, Black);
			  ssd1306_DrawPixel(27,41, Black);
			  ssd1306_DrawPixel(28,41, Black);

			  ssd1306_DrawPixel(29,40, Black);
			  ssd1306_DrawPixel(30,39, Black);
			  ssd1306_DrawPixel(31,38, Black);
			  ssd1306_DrawPixel(32,37, Black);
			  ssd1306_DrawPixel(33,36, Black);

			  ssd1306_DrawPixel(33,35, Black);
			  ssd1306_DrawPixel(34,34, Black);
			  ssd1306_DrawPixel(34,33, Black);
			  ssd1306_DrawPixel(35,32, Black);
			  ssd1306_DrawPixel(35,31, Black);

			  ssd1306_DrawPixel(35,30, Black);
			  ssd1306_DrawPixel(35,29, Black);
			  ssd1306_DrawPixel(35,28, Black);
			  ssd1306_DrawPixel(35,27, Black);
			  ssd1306_DrawPixel(35,26, Black);

			  ssd1306_DrawPixel(35,25, Black);
			  ssd1306_DrawPixel(35,24, Black);
			  ssd1306_DrawPixel(35,23, Black);
			  ssd1306_DrawPixel(34,22, Black);
			  ssd1306_DrawPixel(34,21, Black);

			  ssd1306_DrawPixel(34,20, Black);
			  ssd1306_DrawPixel(33,19, Black);
			  ssd1306_DrawPixel(33,18, Black);
			  ssd1306_DrawPixel(32,17, Black);
			  ssd1306_DrawPixel(31,16, Black);

			  ssd1306_DrawPixel(30,15, Black);
			  ssd1306_DrawPixel(29,14, Black);
			  ssd1306_DrawPixel(28,13, Black);
			  ssd1306_DrawPixel(27,12, Black);
			  ssd1306_DrawPixel(26,12, Black);

			  ssd1306_DrawPixel(25,11, Black);
			  ssd1306_DrawPixel(24,11, Black);
			  ssd1306_DrawPixel(23,11, Black);
			  ssd1306_DrawPixel(22,10, Black);
			  ssd1306_DrawPixel(21,10, Black);

			  ssd1306_DrawPixel(20,10, Black);
			  ssd1306_DrawPixel(19,10, Black);
			  ssd1306_DrawPixel(18,10, Black);
			  ssd1306_DrawPixel(17,10, Black);
			  ssd1306_DrawPixel(16,10, Black);

			  ssd1306_DrawPixel(15,10, Black);
			  ssd1306_DrawPixel(14,11, Black);
			  ssd1306_DrawPixel(13,11, Black);
			  ssd1306_DrawPixel(12,11, Black);
			  ssd1306_DrawPixel(11,12, Black);

			  ssd1306_DrawPixel(10,12, Black);
			  ssd1306_DrawPixel(9,13, Black);
			  ssd1306_DrawPixel(8,13, Black);
			  ssd1306_DrawPixel(7,14, Black);
			  ssd1306_DrawPixel(6,15, Black);

			  ssd1306_DrawPixel(5,15, Black);
			  ssd1306_DrawPixel(4,17, Black);
			  ssd1306_DrawPixel(4,18, Black);
			  ssd1306_DrawPixel(3,19, Black);
			  ssd1306_DrawPixel(3,20, Black);

			  ssd1306_DrawPixel(2,21, Black);
			  ssd1306_DrawPixel(2,22, Black);
			  ssd1306_DrawPixel(2,23, Black);
			  ssd1306_DrawPixel(1,24, Black);

			  /* Dit zijn de wijzers:*/
				ssd1306_DrawPixel(19,26, Black);
				ssd1306_DrawPixel(20,27, Black);
				ssd1306_DrawPixel(21,28, Black);
				ssd1306_DrawPixel(22,29, Black);
				ssd1306_DrawPixel(23,30, Black);

				ssd1306_DrawPixel(24,31, Black);
				ssd1306_DrawPixel(25,32, Black);
				ssd1306_DrawPixel(26,33, Black);

				ssd1306_DrawPixel(18,26, Black);
				ssd1306_DrawPixel(18,25, Black);
				ssd1306_DrawPixel(18,24, Black);
				ssd1306_DrawPixel(18,23, Black);
				ssd1306_DrawPixel(18,22, Black);
				ssd1306_DrawPixel(18,21, Black);

			  ssd1306_UpdateScreen();
}

void ssd1306_klok() {
	ssd1306_Fill(White);
		  ssd1306_DrawPixel(18,3, Black);
		  ssd1306_DrawPixel(19,3, Black);
		  ssd1306_DrawPixel(20,3, Black);
		  ssd1306_DrawPixel(21,3, Black);
		  ssd1306_DrawPixel(22,3, Black);

		  ssd1306_DrawPixel(23,3, Black);
		  ssd1306_DrawPixel(24,4, Black);
		  ssd1306_DrawPixel(25,4, Black);
		  ssd1306_DrawPixel(26,4, Black);
		  ssd1306_DrawPixel(27,5, Black);

		  ssd1306_DrawPixel(28,5, Black);
		  ssd1306_DrawPixel(29,5, Black);
		  ssd1306_DrawPixel(29,6, Black);
		  ssd1306_DrawPixel(30,6, Black);
		  ssd1306_DrawPixel(31,7, Black);

		  ssd1306_DrawPixel(32,7, Black);
		  ssd1306_DrawPixel(33,8, Black);
		  ssd1306_DrawPixel(34,9, Black);
		  ssd1306_DrawPixel(35,10, Black);
		  ssd1306_DrawPixel(36,11, Black);

		  ssd1306_DrawPixel(37,12, Black);
		  ssd1306_DrawPixel(38,13, Black);
		  ssd1306_DrawPixel(38,14, Black);
		  ssd1306_DrawPixel(39,14, Black);
		  ssd1306_DrawPixel(39,15, Black);

		  ssd1306_DrawPixel(39,16, Black);
		  ssd1306_DrawPixel(40,16, Black);
		  ssd1306_DrawPixel(40,17, Black);
		  ssd1306_DrawPixel(40,18, Black);
		  ssd1306_DrawPixel(41,18, Black);

		  ssd1306_DrawPixel(41,19, Black);
		  ssd1306_DrawPixel(41,20, Black);
		  ssd1306_DrawPixel(41,21, Black);
		  ssd1306_DrawPixel(42,21, Black);
		  ssd1306_DrawPixel(42,22, Black);

		  ssd1306_DrawPixel(42,23, Black);
		  ssd1306_DrawPixel(42,24, Black);
		  ssd1306_DrawPixel(42,25, Black);
		  ssd1306_DrawPixel(42,26, Black);
		  ssd1306_DrawPixel(42,27, Black);

		  ssd1306_DrawPixel(41,26, Black);
		  ssd1306_DrawPixel(41,25, Black);
		  ssd1306_DrawPixel(40,25, Black);
		  ssd1306_DrawPixel(40,24, Black);
		  ssd1306_DrawPixel(39,24, Black);

		  ssd1306_DrawPixel(39,23, Black);
		  ssd1306_DrawPixel(38,23, Black);
		  ssd1306_DrawPixel(38,22, Black);
		  ssd1306_DrawPixel(37,21, Black);
		  ssd1306_DrawPixel(43,26, Black);

		  ssd1306_DrawPixel(43,25, Black);
		  ssd1306_DrawPixel(43,24, Black);
		  ssd1306_DrawPixel(44,24, Black);
		  ssd1306_DrawPixel(44,25, Black);
		  ssd1306_DrawPixel(44,23, Black);

		  ssd1306_DrawPixel(45,23, Black);
		  ssd1306_DrawPixel(45,22, Black);
		  ssd1306_DrawPixel(45,21, Black);
		  ssd1306_DrawPixel(46,20, Black);

		  ssd1306_DrawPixel(1,25, Black);
		  ssd1306_DrawPixel(1,26, Black);
		  ssd1306_DrawPixel(1,27, Black);
		  ssd1306_DrawPixel(1,28, Black);
		  ssd1306_DrawPixel(1,29, Black);

		  ssd1306_DrawPixel(1,30, Black);
		  ssd1306_DrawPixel(2,31, Black);
		  ssd1306_DrawPixel(2,32, Black);
		  ssd1306_DrawPixel(2,33, Black);
		  ssd1306_DrawPixel(3,34, Black);

		  ssd1306_DrawPixel(3,35, Black);
		  ssd1306_DrawPixel(4,36, Black);
		  ssd1306_DrawPixel(4,37, Black);
		  ssd1306_DrawPixel(5,37, Black);
		  ssd1306_DrawPixel(5,38, Black);

		  ssd1306_DrawPixel(6,38, Black);
		  ssd1306_DrawPixel(6,39, Black);
		  ssd1306_DrawPixel(7,39, Black);
		  ssd1306_DrawPixel(7,40, Black);
		  ssd1306_DrawPixel(8,41, Black);

		  ssd1306_DrawPixel(9,41, Black);
		  ssd1306_DrawPixel(10,42, Black);
		  ssd1306_DrawPixel(11,42, Black);
		  ssd1306_DrawPixel(12,43, Black);
		  ssd1306_DrawPixel(13,43, Black);

		  ssd1306_DrawPixel(14,43, Black);
		  ssd1306_DrawPixel(15,44, Black);
		  ssd1306_DrawPixel(16,44, Black);
		  ssd1306_DrawPixel(17,44, Black);
		  ssd1306_DrawPixel(18,44, Black);

		  ssd1306_DrawPixel(19,44, Black);
		  ssd1306_DrawPixel(20,44, Black);
		  ssd1306_DrawPixel(21,44, Black);
		  ssd1306_DrawPixel(22,44, Black);
		  ssd1306_DrawPixel(23,43, Black);

		  ssd1306_DrawPixel(24,43, Black);
		  ssd1306_DrawPixel(25,43, Black);
		  ssd1306_DrawPixel(26,42, Black);
		  ssd1306_DrawPixel(27,41, Black);
		  ssd1306_DrawPixel(28,41, Black);

		  ssd1306_DrawPixel(29,40, Black);
		  ssd1306_DrawPixel(30,39, Black);
		  ssd1306_DrawPixel(31,38, Black);
		  ssd1306_DrawPixel(32,37, Black);
		  ssd1306_DrawPixel(33,36, Black);

		  ssd1306_DrawPixel(33,35, Black);
		  ssd1306_DrawPixel(34,34, Black);
		  ssd1306_DrawPixel(34,33, Black);
		  ssd1306_DrawPixel(35,32, Black);
		  ssd1306_DrawPixel(35,31, Black);

		  ssd1306_DrawPixel(35,30, Black);
		  ssd1306_DrawPixel(35,29, Black);
		  ssd1306_DrawPixel(35,28, Black);
		  ssd1306_DrawPixel(35,27, Black);
		  ssd1306_DrawPixel(35,26, Black);

		  ssd1306_DrawPixel(35,25, Black);
		  ssd1306_DrawPixel(35,24, Black);
		  ssd1306_DrawPixel(35,23, Black);
		  ssd1306_DrawPixel(34,22, Black);
		  ssd1306_DrawPixel(34,21, Black);

		  ssd1306_DrawPixel(34,20, Black);
		  ssd1306_DrawPixel(33,19, Black);
		  ssd1306_DrawPixel(33,18, Black);
		  ssd1306_DrawPixel(32,17, Black);
		  ssd1306_DrawPixel(31,16, Black);

		  ssd1306_DrawPixel(30,15, Black);
		  ssd1306_DrawPixel(29,14, Black);
		  ssd1306_DrawPixel(28,13, Black);
		  ssd1306_DrawPixel(27,12, Black);
		  ssd1306_DrawPixel(26,12, Black);

		  ssd1306_DrawPixel(25,11, Black);
		  ssd1306_DrawPixel(24,11, Black);
		  ssd1306_DrawPixel(23,11, Black);
		  ssd1306_DrawPixel(22,10, Black);
		  ssd1306_DrawPixel(21,10, Black);

		  ssd1306_DrawPixel(20,10, Black);
		  ssd1306_DrawPixel(19,10, Black);
		  ssd1306_DrawPixel(18,10, Black);
		  ssd1306_DrawPixel(17,10, Black);
		  ssd1306_DrawPixel(16,10, Black);

		  ssd1306_DrawPixel(15,10, Black);
		  ssd1306_DrawPixel(14,11, Black);
		  ssd1306_DrawPixel(13,11, Black);
		  ssd1306_DrawPixel(12,11, Black);
		  ssd1306_DrawPixel(11,12, Black);

		  ssd1306_DrawPixel(10,12, Black);
		  ssd1306_DrawPixel(9,13, Black);
		  ssd1306_DrawPixel(8,13, Black);
		  ssd1306_DrawPixel(7,14, Black);
		  ssd1306_DrawPixel(6,15, Black);

		  ssd1306_DrawPixel(5,15, Black);
		  ssd1306_DrawPixel(4,17, Black);
		  ssd1306_DrawPixel(4,18, Black);
		  ssd1306_DrawPixel(3,19, Black);
		  ssd1306_DrawPixel(3,20, Black);

		  ssd1306_DrawPixel(2,21, Black);
		  ssd1306_DrawPixel(2,22, Black);
		  ssd1306_DrawPixel(2,23, Black);
		  ssd1306_DrawPixel(1,24, Black);

		  /* Dit zijn de wijzers:*/
			ssd1306_DrawPixel(19,26, Black);
			ssd1306_DrawPixel(20,25, Black);
			ssd1306_DrawPixel(21,24, Black);
			ssd1306_DrawPixel(22,23, Black);
			ssd1306_DrawPixel(23,22, Black);

			ssd1306_DrawPixel(24,21, Black);
			ssd1306_DrawPixel(25,20, Black);
			ssd1306_DrawPixel(26,19, Black);

			ssd1306_DrawPixel(18,26, Black);
			ssd1306_DrawPixel(18,25, Black);
			ssd1306_DrawPixel(18,24, Black);
			ssd1306_DrawPixel(18,23, Black);
			ssd1306_DrawPixel(18,22, Black);
			ssd1306_DrawPixel(18,21, Black);

		  ssd1306_UpdateScreen();
}

void ssd1306_klok3() {
	ssd1306_Fill(White);
			  ssd1306_DrawPixel(18,3, Black);
			  ssd1306_DrawPixel(19,3, Black);
			  ssd1306_DrawPixel(20,3, Black);
			  ssd1306_DrawPixel(21,3, Black);
			  ssd1306_DrawPixel(22,3, Black);

			  ssd1306_DrawPixel(23,3, Black);
			  ssd1306_DrawPixel(24,4, Black);
			  ssd1306_DrawPixel(25,4, Black);
			  ssd1306_DrawPixel(26,4, Black);
			  ssd1306_DrawPixel(27,5, Black);

			  ssd1306_DrawPixel(28,5, Black);
			  ssd1306_DrawPixel(29,5, Black);
			  ssd1306_DrawPixel(29,6, Black);
			  ssd1306_DrawPixel(30,6, Black);
			  ssd1306_DrawPixel(31,7, Black);

			  ssd1306_DrawPixel(32,7, Black);
			  ssd1306_DrawPixel(33,8, Black);
			  ssd1306_DrawPixel(34,9, Black);
			  ssd1306_DrawPixel(35,10, Black);
			  ssd1306_DrawPixel(36,11, Black);

			  ssd1306_DrawPixel(37,12, Black);
			  ssd1306_DrawPixel(38,13, Black);
			  ssd1306_DrawPixel(38,14, Black);
			  ssd1306_DrawPixel(39,14, Black);
			  ssd1306_DrawPixel(39,15, Black);

			  ssd1306_DrawPixel(39,16, Black);
			  ssd1306_DrawPixel(40,16, Black);
			  ssd1306_DrawPixel(40,17, Black);
			  ssd1306_DrawPixel(40,18, Black);
			  ssd1306_DrawPixel(41,18, Black);

			  ssd1306_DrawPixel(41,19, Black);
			  ssd1306_DrawPixel(41,20, Black);
			  ssd1306_DrawPixel(41,21, Black);
			  ssd1306_DrawPixel(42,21, Black);
			  ssd1306_DrawPixel(42,22, Black);

			  ssd1306_DrawPixel(42,23, Black);
			  ssd1306_DrawPixel(42,24, Black);
			  ssd1306_DrawPixel(42,25, Black);
			  ssd1306_DrawPixel(42,26, Black);
			  ssd1306_DrawPixel(42,27, Black);

			  ssd1306_DrawPixel(41,26, Black);
			  ssd1306_DrawPixel(41,25, Black);
			  ssd1306_DrawPixel(40,25, Black);
			  ssd1306_DrawPixel(40,24, Black);
			  ssd1306_DrawPixel(39,24, Black);

			  ssd1306_DrawPixel(39,23, Black);
			  ssd1306_DrawPixel(38,23, Black);
			  ssd1306_DrawPixel(38,22, Black);
			  ssd1306_DrawPixel(37,21, Black);
			  ssd1306_DrawPixel(43,26, Black);

			  ssd1306_DrawPixel(43,25, Black);
			  ssd1306_DrawPixel(43,24, Black);
			  ssd1306_DrawPixel(44,24, Black);
			  ssd1306_DrawPixel(44,25, Black);
			  ssd1306_DrawPixel(44,23, Black);

			  ssd1306_DrawPixel(45,23, Black);
			  ssd1306_DrawPixel(45,22, Black);
			  ssd1306_DrawPixel(45,21, Black);
			  ssd1306_DrawPixel(46,20, Black);

			  ssd1306_DrawPixel(1,25, Black);
			  ssd1306_DrawPixel(1,26, Black);
			  ssd1306_DrawPixel(1,27, Black);
			  ssd1306_DrawPixel(1,28, Black);
			  ssd1306_DrawPixel(1,29, Black);

			  ssd1306_DrawPixel(1,30, Black);
			  ssd1306_DrawPixel(2,31, Black);
			  ssd1306_DrawPixel(2,32, Black);
			  ssd1306_DrawPixel(2,33, Black);
			  ssd1306_DrawPixel(3,34, Black);

			  ssd1306_DrawPixel(3,35, Black);
			  ssd1306_DrawPixel(4,36, Black);
			  ssd1306_DrawPixel(4,37, Black);
			  ssd1306_DrawPixel(5,37, Black);
			  ssd1306_DrawPixel(5,38, Black);

			  ssd1306_DrawPixel(6,38, Black);
			  ssd1306_DrawPixel(6,39, Black);
			  ssd1306_DrawPixel(7,39, Black);
			  ssd1306_DrawPixel(7,40, Black);
			  ssd1306_DrawPixel(8,41, Black);

			  ssd1306_DrawPixel(9,41, Black);
			  ssd1306_DrawPixel(10,42, Black);
			  ssd1306_DrawPixel(11,42, Black);
			  ssd1306_DrawPixel(12,43, Black);
			  ssd1306_DrawPixel(13,43, Black);

			  ssd1306_DrawPixel(14,43, Black);
			  ssd1306_DrawPixel(15,44, Black);
			  ssd1306_DrawPixel(16,44, Black);
			  ssd1306_DrawPixel(17,44, Black);
			  ssd1306_DrawPixel(18,44, Black);

			  ssd1306_DrawPixel(19,44, Black);
			  ssd1306_DrawPixel(20,44, Black);
			  ssd1306_DrawPixel(21,44, Black);
			  ssd1306_DrawPixel(22,44, Black);
			  ssd1306_DrawPixel(23,43, Black);

			  ssd1306_DrawPixel(24,43, Black);
			  ssd1306_DrawPixel(25,43, Black);
			  ssd1306_DrawPixel(26,42, Black);
			  ssd1306_DrawPixel(27,41, Black);
			  ssd1306_DrawPixel(28,41, Black);

			  ssd1306_DrawPixel(29,40, Black);
			  ssd1306_DrawPixel(30,39, Black);
			  ssd1306_DrawPixel(31,38, Black);
			  ssd1306_DrawPixel(32,37, Black);
			  ssd1306_DrawPixel(33,36, Black);

			  ssd1306_DrawPixel(33,35, Black);
			  ssd1306_DrawPixel(34,34, Black);
			  ssd1306_DrawPixel(34,33, Black);
			  ssd1306_DrawPixel(35,32, Black);
			  ssd1306_DrawPixel(35,31, Black);

			  ssd1306_DrawPixel(35,30, Black);
			  ssd1306_DrawPixel(35,29, Black);
			  ssd1306_DrawPixel(35,28, Black);
			  ssd1306_DrawPixel(35,27, Black);
			  ssd1306_DrawPixel(35,26, Black);

			  ssd1306_DrawPixel(35,25, Black);
			  ssd1306_DrawPixel(35,24, Black);
			  ssd1306_DrawPixel(35,23, Black);
			  ssd1306_DrawPixel(34,22, Black);
			  ssd1306_DrawPixel(34,21, Black);

			  ssd1306_DrawPixel(34,20, Black);
			  ssd1306_DrawPixel(33,19, Black);
			  ssd1306_DrawPixel(33,18, Black);
			  ssd1306_DrawPixel(32,17, Black);
			  ssd1306_DrawPixel(31,16, Black);

			  ssd1306_DrawPixel(30,15, Black);
			  ssd1306_DrawPixel(29,14, Black);
			  ssd1306_DrawPixel(28,13, Black);
			  ssd1306_DrawPixel(27,12, Black);
			  ssd1306_DrawPixel(26,12, Black);

			  ssd1306_DrawPixel(25,11, Black);
			  ssd1306_DrawPixel(24,11, Black);
			  ssd1306_DrawPixel(23,11, Black);
			  ssd1306_DrawPixel(22,10, Black);
			  ssd1306_DrawPixel(21,10, Black);

			  ssd1306_DrawPixel(20,10, Black);
			  ssd1306_DrawPixel(19,10, Black);
			  ssd1306_DrawPixel(18,10, Black);
			  ssd1306_DrawPixel(17,10, Black);
			  ssd1306_DrawPixel(16,10, Black);

			  ssd1306_DrawPixel(15,10, Black);
			  ssd1306_DrawPixel(14,11, Black);
			  ssd1306_DrawPixel(13,11, Black);
			  ssd1306_DrawPixel(12,11, Black);
			  ssd1306_DrawPixel(11,12, Black);

			  ssd1306_DrawPixel(10,12, Black);
			  ssd1306_DrawPixel(9,13, Black);
			  ssd1306_DrawPixel(8,13, Black);
			  ssd1306_DrawPixel(7,14, Black);
			  ssd1306_DrawPixel(6,15, Black);

			  ssd1306_DrawPixel(5,15, Black);
			  ssd1306_DrawPixel(4,17, Black);
			  ssd1306_DrawPixel(4,18, Black);
			  ssd1306_DrawPixel(3,19, Black);
			  ssd1306_DrawPixel(3,20, Black);

			  ssd1306_DrawPixel(2,21, Black);
			  ssd1306_DrawPixel(2,22, Black);
			  ssd1306_DrawPixel(2,23, Black);
			  ssd1306_DrawPixel(1,24, Black);

			  /* Dit zijn de wijzers:*/
				ssd1306_DrawPixel(18,26, Black);
				ssd1306_DrawPixel(17,27, Black);
				ssd1306_DrawPixel(16,28, Black);
				ssd1306_DrawPixel(15,29, Black);
				ssd1306_DrawPixel(14,30, Black);

				ssd1306_DrawPixel(13,31, Black);
				ssd1306_DrawPixel(12,32, Black);
				ssd1306_DrawPixel(11,33, Black);

				ssd1306_DrawPixel(18,26, Black);
				ssd1306_DrawPixel(18,25, Black);
				ssd1306_DrawPixel(18,24, Black);
				ssd1306_DrawPixel(18,23, Black);
				ssd1306_DrawPixel(18,22, Black);
				ssd1306_DrawPixel(18,21, Black);


			  ssd1306_UpdateScreen();
}

void ssd1306_klok4() {
	ssd1306_Fill(White);
			  ssd1306_DrawPixel(18,3, Black);
			  ssd1306_DrawPixel(19,3, Black);
			  ssd1306_DrawPixel(20,3, Black);
			  ssd1306_DrawPixel(21,3, Black);
			  ssd1306_DrawPixel(22,3, Black);

			  ssd1306_DrawPixel(23,3, Black);
			  ssd1306_DrawPixel(24,4, Black);
			  ssd1306_DrawPixel(25,4, Black);
			  ssd1306_DrawPixel(26,4, Black);
			  ssd1306_DrawPixel(27,5, Black);

			  ssd1306_DrawPixel(28,5, Black);
			  ssd1306_DrawPixel(29,5, Black);
			  ssd1306_DrawPixel(29,6, Black);
			  ssd1306_DrawPixel(30,6, Black);
			  ssd1306_DrawPixel(31,7, Black);

			  ssd1306_DrawPixel(32,7, Black);
			  ssd1306_DrawPixel(33,8, Black);
			  ssd1306_DrawPixel(34,9, Black);
			  ssd1306_DrawPixel(35,10, Black);
			  ssd1306_DrawPixel(36,11, Black);

			  ssd1306_DrawPixel(37,12, Black);
			  ssd1306_DrawPixel(38,13, Black);
			  ssd1306_DrawPixel(38,14, Black);
			  ssd1306_DrawPixel(39,14, Black);
			  ssd1306_DrawPixel(39,15, Black);

			  ssd1306_DrawPixel(39,16, Black);
			  ssd1306_DrawPixel(40,16, Black);
			  ssd1306_DrawPixel(40,17, Black);
			  ssd1306_DrawPixel(40,18, Black);
			  ssd1306_DrawPixel(41,18, Black);

			  ssd1306_DrawPixel(41,19, Black);
			  ssd1306_DrawPixel(41,20, Black);
			  ssd1306_DrawPixel(41,21, Black);
			  ssd1306_DrawPixel(42,21, Black);
			  ssd1306_DrawPixel(42,22, Black);

			  ssd1306_DrawPixel(42,23, Black);
			  ssd1306_DrawPixel(42,24, Black);
			  ssd1306_DrawPixel(42,25, Black);
			  ssd1306_DrawPixel(42,26, Black);
			  ssd1306_DrawPixel(42,27, Black);

			  ssd1306_DrawPixel(41,26, Black);
			  ssd1306_DrawPixel(41,25, Black);
			  ssd1306_DrawPixel(40,25, Black);
			  ssd1306_DrawPixel(40,24, Black);
			  ssd1306_DrawPixel(39,24, Black);

			  ssd1306_DrawPixel(39,23, Black);
			  ssd1306_DrawPixel(38,23, Black);
			  ssd1306_DrawPixel(38,22, Black);
			  ssd1306_DrawPixel(37,21, Black);
			  ssd1306_DrawPixel(43,26, Black);

			  ssd1306_DrawPixel(43,25, Black);
			  ssd1306_DrawPixel(43,24, Black);
			  ssd1306_DrawPixel(44,24, Black);
			  ssd1306_DrawPixel(44,25, Black);
			  ssd1306_DrawPixel(44,23, Black);

			  ssd1306_DrawPixel(45,23, Black);
			  ssd1306_DrawPixel(45,22, Black);
			  ssd1306_DrawPixel(45,21, Black);
			  ssd1306_DrawPixel(46,20, Black);

			  ssd1306_DrawPixel(1,25, Black);
			  ssd1306_DrawPixel(1,26, Black);
			  ssd1306_DrawPixel(1,27, Black);
			  ssd1306_DrawPixel(1,28, Black);
			  ssd1306_DrawPixel(1,29, Black);

			  ssd1306_DrawPixel(1,30, Black);
			  ssd1306_DrawPixel(2,31, Black);
			  ssd1306_DrawPixel(2,32, Black);
			  ssd1306_DrawPixel(2,33, Black);
			  ssd1306_DrawPixel(3,34, Black);

			  ssd1306_DrawPixel(3,35, Black);
			  ssd1306_DrawPixel(4,36, Black);
			  ssd1306_DrawPixel(4,37, Black);
			  ssd1306_DrawPixel(5,37, Black);
			  ssd1306_DrawPixel(5,38, Black);

			  ssd1306_DrawPixel(6,38, Black);
			  ssd1306_DrawPixel(6,39, Black);
			  ssd1306_DrawPixel(7,39, Black);
			  ssd1306_DrawPixel(7,40, Black);
			  ssd1306_DrawPixel(8,41, Black);

			  ssd1306_DrawPixel(9,41, Black);
			  ssd1306_DrawPixel(10,42, Black);
			  ssd1306_DrawPixel(11,42, Black);
			  ssd1306_DrawPixel(12,43, Black);
			  ssd1306_DrawPixel(13,43, Black);

			  ssd1306_DrawPixel(14,43, Black);
			  ssd1306_DrawPixel(15,44, Black);
			  ssd1306_DrawPixel(16,44, Black);
			  ssd1306_DrawPixel(17,44, Black);
			  ssd1306_DrawPixel(18,44, Black);

			  ssd1306_DrawPixel(19,44, Black);
			  ssd1306_DrawPixel(20,44, Black);
			  ssd1306_DrawPixel(21,44, Black);
			  ssd1306_DrawPixel(22,44, Black);
			  ssd1306_DrawPixel(23,43, Black);

			  ssd1306_DrawPixel(24,43, Black);
			  ssd1306_DrawPixel(25,43, Black);
			  ssd1306_DrawPixel(26,42, Black);
			  ssd1306_DrawPixel(27,41, Black);
			  ssd1306_DrawPixel(28,41, Black);

			  ssd1306_DrawPixel(29,40, Black);
			  ssd1306_DrawPixel(30,39, Black);
			  ssd1306_DrawPixel(31,38, Black);
			  ssd1306_DrawPixel(32,37, Black);
			  ssd1306_DrawPixel(33,36, Black);

			  ssd1306_DrawPixel(33,35, Black);
			  ssd1306_DrawPixel(34,34, Black);
			  ssd1306_DrawPixel(34,33, Black);
			  ssd1306_DrawPixel(35,32, Black);
			  ssd1306_DrawPixel(35,31, Black);

			  ssd1306_DrawPixel(35,30, Black);
			  ssd1306_DrawPixel(35,29, Black);
			  ssd1306_DrawPixel(35,28, Black);
			  ssd1306_DrawPixel(35,27, Black);
			  ssd1306_DrawPixel(35,26, Black);

			  ssd1306_DrawPixel(35,25, Black);
			  ssd1306_DrawPixel(35,24, Black);
			  ssd1306_DrawPixel(35,23, Black);
			  ssd1306_DrawPixel(34,22, Black);
			  ssd1306_DrawPixel(34,21, Black);

			  ssd1306_DrawPixel(34,20, Black);
			  ssd1306_DrawPixel(33,19, Black);
			  ssd1306_DrawPixel(33,18, Black);
			  ssd1306_DrawPixel(32,17, Black);
			  ssd1306_DrawPixel(31,16, Black);

			  ssd1306_DrawPixel(30,15, Black);
			  ssd1306_DrawPixel(29,14, Black);
			  ssd1306_DrawPixel(28,13, Black);
			  ssd1306_DrawPixel(27,12, Black);
			  ssd1306_DrawPixel(26,12, Black);

			  ssd1306_DrawPixel(25,11, Black);
			  ssd1306_DrawPixel(24,11, Black);
			  ssd1306_DrawPixel(23,11, Black);
			  ssd1306_DrawPixel(22,10, Black);
			  ssd1306_DrawPixel(21,10, Black);

			  ssd1306_DrawPixel(20,10, Black);
			  ssd1306_DrawPixel(19,10, Black);
			  ssd1306_DrawPixel(18,10, Black);
			  ssd1306_DrawPixel(17,10, Black);
			  ssd1306_DrawPixel(16,10, Black);

			  ssd1306_DrawPixel(15,10, Black);
			  ssd1306_DrawPixel(14,11, Black);
			  ssd1306_DrawPixel(13,11, Black);
			  ssd1306_DrawPixel(12,11, Black);
			  ssd1306_DrawPixel(11,12, Black);

			  ssd1306_DrawPixel(10,12, Black);
			  ssd1306_DrawPixel(9,13, Black);
			  ssd1306_DrawPixel(8,13, Black);
			  ssd1306_DrawPixel(7,14, Black);
			  ssd1306_DrawPixel(6,15, Black);

			  ssd1306_DrawPixel(5,15, Black);
			  ssd1306_DrawPixel(4,17, Black);
			  ssd1306_DrawPixel(4,18, Black);
			  ssd1306_DrawPixel(3,19, Black);
			  ssd1306_DrawPixel(3,20, Black);

			  ssd1306_DrawPixel(2,21, Black);
			  ssd1306_DrawPixel(2,22, Black);
			  ssd1306_DrawPixel(2,23, Black);
			  ssd1306_DrawPixel(1,24, Black);

			  /* Dit zijn de wijzers:*/
				ssd1306_DrawPixel(18,26, Black);
				ssd1306_DrawPixel(17,25, Black);
				ssd1306_DrawPixel(16,24, Black);
				ssd1306_DrawPixel(15,23, Black);
				ssd1306_DrawPixel(14,22, Black);

				ssd1306_DrawPixel(13,21, Black);
				ssd1306_DrawPixel(12,20, Black);
				ssd1306_DrawPixel(11,19, Black);

				ssd1306_DrawPixel(18,26, Black);
				ssd1306_DrawPixel(18,25, Black);
				ssd1306_DrawPixel(18,24, Black);
				ssd1306_DrawPixel(18,23, Black);
				ssd1306_DrawPixel(18,22, Black);
				ssd1306_DrawPixel(18,21, Black);

			  ssd1306_UpdateScreen();
}



