#ifndef __ARDUHAL_LOG_H__
#define __ARDUHAL_LOG_H__

#include "esp_log.h"

#define log_e(format, ...) ESP_LOGE(__FILE__, format, ##__VA_ARGS__)
#define log_w(format, ...) ESP_LOGW(__FILE__, format, ##__VA_ARGS__)
#define log_i(format, ...) ESP_LOGI(__FILE__, format, ##__VA_ARGS__)
#define log_d(format, ...) ESP_LOGD(__FILE__, format, ##__VA_ARGS__)
#define log_v(format, ...) ESP_LOGV(__FILE__, format, ##__VA_ARGS__)

#endif /* __ARDUHAL_LOG_H__ */
