#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "taskConfig.h"
#include "queue.h"
#include "mySecondTask.h"

/* Task Handles */
extern TaskHandle_t _taskSecondHandle;
extern QueueHandle_t queueHandle;

// Testable task code
void mySecondTaskRun()
{	
	int rec = 0;
	xQueueReceive(queueHandle, &rec, portMAX_DELAY);
	printf("%d\n", rec);
	//vTaskDelay(pdMS_TO_TICKS(100));
}

/* Create the task, storing the handle. */
void mySecondTaskCreate()
{
	xTaskCreate(
		taskMySeccondTask,       /* Function that implements the task. */
		"MySecondTask",          /* Text name for the task. */
		TASK_MY_SECOND_TASK_STACK,      /* Stack size in words, not bytes. */
		(void*)2,    /* Parameter passed into the task. */
		TASK_MY_SECOND_TASK_PRIORITY,/* Priority at which the task is created. */
		&_taskSecondHandle);      /* Used to pass out the created task's handle. */
}

// The "clean code" task
void taskMySeccondTask(void* pvParameters)
{
	// Remove compiler warnings.
	(void)pvParameters;

	for (;;)
	{
		mySecondTaskRun();
	}
}
