#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


void task1(void *p) {
    int count = 0;
    while (1) {
        printf("hello task1: count %d\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}

void task2(void *p) {
    int count = 0;
    while (1) {
        printf("hello task2: count %d\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }

}

void task3(void *p) {
    int count = 0;
    while (1) {
        printf("hello task3: count %d\n", count++);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}


void app_main(void)
{

    xTaskCreate(task1, "Task1", 2048, NULL, 3, NULL);
    xTaskCreate(task2, "Task2", 2048, NULL, 2, NULL);
    xTaskCreate(task3, "Task3", 2048, NULL, 1, NULL);


}