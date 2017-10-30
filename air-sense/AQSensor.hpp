#include "Arduino.h"

// Select between BME680 and BME280 + IAQ
#define BME680

#define LINESZ 1024
#define BUFSZ 1024

class AQSensor {
public:
    AQSensor();
    void initSensors();
    void readSensors();
    void readAnalogSensors();
    const char* format(int counter=0);

private:
    char line[BUFSZ];
    char buf[BUFSZ];

    float temperature;
    float humidity;
    float pressure;
    float gas_resistance;

    uint16_t analog_mq135;
    uint16_t analog_light;
};
