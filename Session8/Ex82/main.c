#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "myTask.h"
#include "mySecondTask.h"


/* Task Handles */
TaskHandle_t _taskSecondHandle = NULL;
QueueHandle_t queueHandle;

// --------------------------------------------------------------------------------------
void main(void)
{
	// Turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0);

	// Create all tasks
	myTaskCreate();
	mySecondTaskCreate();

	queueHandle = xQueueCreate(5, sizeof(int16_t));

	// Let the operating system take over :)
	vTaskStartScheduler();
}