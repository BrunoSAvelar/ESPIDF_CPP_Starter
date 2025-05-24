#include "AppManager.hpp"

#include <stdio.h>

void LogConfig();

extern "C" void app_main(void)
{
    LogConfig();
    AppManager appManager;

    ESP_LOGW("MAIN", "Hello world!"); 

    while(1){
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void LogConfig(){
    esp_log_level_set("*", ESP_LOG_WARN);
    esp_log_level_set("App_MANAGER", ESP_LOG_DEBUG);
}