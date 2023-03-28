#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "myTask.h"
#include "mySecondTask.h"
#include "myThirdTask.h"


/* Task Handles */
TaskHandle_t _taskSecondHandle = NULL;
SemaphoreHandle_t syncSemaphoreA;
SemaphoreHandle_t syncSemaphoreB;
SemaphoreHandle_t syncSemaphoreC;
// --------------------------------------------------------------------------------------
void main(void)
{
	// Turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0);

	// Create all tasks
	myTaskCreate();
	mySecondTaskCreate();
	myThirdTaskCreate();

	syncSemaphoreA = xSemaphoreCreateBinary();
	syncSemaphoreB = xSemaphoreCreateBinary();
	syncSemaphoreC = xSemaphoreCreateBinary();
	xSemaphoreGive(syncSemaphoreC);

	// Let the operating system take over :)
	vTaskStartScheduler();
}