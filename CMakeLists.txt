idf_component_register(
        SRCS
        
        src/BLE2902.cpp
        src/BLE2904.cpp
        src/BLEAddress.cpp
        src/BLEAdvertisedDevice.cpp
        src/BLEAdvertising.cpp
        src/BLEBeacon.cpp
        src/BLECharacteristic.cpp
        src/BLECharacteristicMap.cpp
        src/BLEClient.cpp
        src/BLEDescriptor.cpp
        src/BLEDescriptorMap.cpp
        src/BLEDevice.cpp
        src/BLEEddystoneTLM.cpp
        src/BLEEddystoneURL.cpp
        src/BLEExceptions.cpp
        src/BLEHIDDevice.cpp
        src/BLERemoteCharacteristic.cpp
        src/BLERemoteDescriptor.cpp
        src/BLERemoteService.cpp
        src/BLEScan.cpp
        src/BLESecurity.cpp
        src/BLEServer.cpp
        src/BLEService.cpp
        src/BLEServiceMap.cpp
        src/BLEUtils.cpp
        src/BLEUUID.cpp
        src/BLEValue.cpp
        src/FreeRTOS.cpp
        src/GeneralUtils.cpp

        PRIV_INCLUDE_DIRS "lib/arduino-esp32/cores/esp32"

        INCLUDE_DIRS "src"

        REQUIRES nvs_flash bt
)
