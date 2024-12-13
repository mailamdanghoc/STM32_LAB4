/*
 * button.h
 *
 *  Created on: Nov 2, 2024
 *      Author: QUÝ
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button0_flag;
extern int button1_flag;
extern int button2_flag;

int isButton0Pressed();
int isButton1Pressed();
int isButton2Pressed();
int isButton1LongPressed();
void getKeyInput();


#endif /* INC_BUTTON_H_ */
