#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "taskConfig.h"
#include "semphr.h"
#include "myThirdTask.h"

/* Task Handles */
extern TaskHandle_t _taskSecondHandle;
extern SemaphoreHandle_t syncSemaphoreB;
extern SemaphoreHandle_t syncSemaphoreC;

// Testable task code
void myThirdTaskRun()
{
	vTaskDelay(pdMS_TO_TICKS(100));
    vTaskDelay(pdMS_TO_TICKS(100));
	xSemaphoreTake(syncSemaphoreB, portMAX_DELAY);
	printf("O ");
	xSemaphoreGive(syncSemaphoreC);
	xSemaphoreTake(syncSemaphoreB, portMAX_DELAY);
	printf("OK ");
	xSemaphoreGive(syncSemaphoreC);
}

/* Create the task, storing the handle. */
void myThirdTaskCreate()
{
	xTaskCreate(
		taskMyThirdTask,       /* Function that implements the task. */
		"MyThirdTask",          /* Text name for the task. */
		TASK_MY_THIRD_TASK_STACK,      /* Stack size in words, not bytes. */
		(void*)3,    /* Parameter passed into the task. */
		TASK_MY_THIRD_TASK_PRIORITY,/* Priority at which the task is created. */
		&_taskSecondHandle);      /* Used to pass out the created task's handle. */
}

// The "clean code" task
void taskMyThirdTask(void* pvParameters)
{
	// Remove compiler warnings.
	(void)pvParameters;

	for (;;)
	{
		myThirdTaskRun();
	}
}
