TaskHandle_t thp[1];//マルチスレッドのタスクハンドル格納用
#include "src/VL53L0X.h"
#include "src/motor.h"
#include "src/IR.h"  //library
#include "src/servoClamp.h"
#include <Wire.h>
#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
#define SENSOR_NUM  2             // 使用するセンサーの数
#define ADDRESS_DEFAULT 0b0101001 // 0x29
#define ADDRESS_00 (ADDRESS_DEFAULT + 1)
const int GPIO_MASK_ARRAY[SENSOR_NUM] = {23,27};
VL53L0X Sensor[SENSOR_NUM];       // 使用するセンサークラス配列
int Ltof;
int Rtof;
int LTOF;
int RTOF;
int x=0;
int dy=0;
int ping;
int PING;
int cranp=0;
int Flag=0;
int FrontSetTime=0;
int count=0;
#define Echo_PIN    19 // Ultrasonic Echo pin connect to D11
#define Trig_PIN    18 // Ultrasonic Trig pin connect to D12
Motor motor = Motor();
IR ir = IR();         //library_use
ServoClamp servoClamp;
//Servo myservo25;  // create servo object to control a servo
//Servo myservo26;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos25 = 0;    // grip variable to store the servo position
int pos26 = 0;    // sholder variable to store the servo position

void setup() {
  Serial.begin(115200);
 SerialBT.begin("ESP32test");
  pinMode(Trig_PIN,OUTPUT);
  pinMode(Echo_PIN,INPUT); 
  servoClamp.servosetup();
// tof_start();
  Motor();
  motor.brake(0);
  delay(1000);
 xTaskCreatePinnedToCore(Core0a, "Core0a", 4096, NULL, 3, &thp[0], 0); 
}
void loop() {
   ToFm();
   ir.sensor(); 
   battery();
   bluetooth(); 
   kaiten1();
   kaiten2(); 
   //--------------------------
    Serial.print("ping-- ");
     Serial.println(ping); 
     if(cranp==1){
      ToFK();
      ToFy();    
     }
     if(ping>8 && cranp==0){
     IRmotor();
     }
     if(ping<8 && !ping==0 && cranp==0){ 
      Stop();
      cranp=1;
      SerialBT.print("ToF-- "); 
}
}
void Core0a(void *args) {
  tof_start();
  while (1) {
    ping=watch();
    ToF();
    ToFm();
   delay(1);
  }
}
