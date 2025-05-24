#pragma once

#include <stdint.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"

class AppManager{
    public:
        AppManager();
        ~AppManager() = default;
    
    private:
    static void AppManagerTask(void *pvParameter);
    char tag[15] = "App_MANAGER";
    
};