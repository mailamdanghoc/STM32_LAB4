/*
 * global.h
 *
 *  Created on: Nov 23, 2024
 *      Author: QUÝ
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "fsm_auto.h"
#include "fsm_manual.h"
#include "fsm_setting.h"
#include "traffic_light.h"
#include "7seg.h"
#include "sched.h"

#define AUTO_INIT 1

#define AUTO_RED_GREEN 2
#define AUTO_RED_YELLOW 3
#define AUTO_GREEN_RED 4
#define AUTO_YELLOW_RED 5

#define MANUAL_INIT 10
#define TER_INIT 14
#define RED_SET 11
#define YELLOW_SET 12
#define GREEN_SET 13

#define MAN_RED_GREEN 6
#define MAN_RED_YELLOW 7
#define MAN_GREEN_RED 8
#define MAN_YELLOW_RED 9

extern int status;
extern int led_buffer[4];
#define SCH_MAX_TASKS 40
#define NO_TASK_ID 0

typedef struct sTask {
    void (*pTask)(void);
    uint32_t Delay;
    uint32_t Period;
    uint8_t RunMe;
    //uint32_t TaskID;
} sTask;

extern sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init();
unsigned char SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Update(uint32_t Index);
unsigned char SCH_Delete_Task(uint32_t TASK_INDEX);
void SCH_Dispatch_Tasks(void);


#endif /* INC_GLOBAL_H_ */
