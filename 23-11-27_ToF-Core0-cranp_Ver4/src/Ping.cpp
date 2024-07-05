#include "Arduino.h"
#include "Ping.h"

Ping::Ping(){
  pinMode( echoPin, INPUT );
  pinMode( trigPin, OUTPUT );
}
 void Ping::obstacle(){
 digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite( trigPin, HIGH );//超音波を出力
  delayMicroseconds( 10 );      //音波出力時間
  digitalWrite( trigPin, LOW ); //音波停止
  
  Duration = pulseIn( echoPin, HIGH ); //センサからの入力
  if (Duration > 0) {
    Duration = Duration/2; //往復距離を半分にする
    Distance = Duration*340*100/1000000; // 音速を340m/sに設定
    Serial.print("Distance:");
    Serial.print(Distance);
    Serial.println(" cm");
  }
  delay(100);//取得間隔1秒
}
