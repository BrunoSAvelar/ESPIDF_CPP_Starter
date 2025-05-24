#include "AppManager.hpp"

AppManager::AppManager(){

    ESP_LOGI("App_MANAGER", "App_MANAGER object created");

    ESP_LOGI("App_MANAGER", "Creating AppManagerTask...");
    xTaskCreate(AppManagerTask, "AppManagerTask", 4096, NULL, 5, NULL);

}

void AppManager::AppManagerTask(void *pvParameter){

    while(1){
        ESP_LOGI("App_MANAGER", "AppManagerTask is running...");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
