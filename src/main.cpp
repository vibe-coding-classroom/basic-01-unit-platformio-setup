#include <Arduino.h>
// 任務 1：請在此修正編譯錯誤（提示：PlatformIO 的 C++ 需要手動引用某個標頭檔）

void setup() {
  // 初始化串口
  Serial.begin(115200);
  Serial.println("PlatformIO Setup Successful!");
  
  // 初始化內建 LED (ESP32 通常是 GPIO 2)
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  
  // 任務 2 測試：如果 ArduinoJson 引用成功，取消下行註解應可編譯
  StaticJsonDocument<200> doc;
}
