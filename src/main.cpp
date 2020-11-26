#include <Arduino.h>
#include "BluetoothA2DPSink.h"

BluetoothA2DPSink a2dp_sink;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("hello world");
  a2dp_sink.start("MyMusic");
}

int delay_time = 2000;

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.println("first");
  delay(delay_time);
  Serial.println("second");
  delay(delay_time);
}