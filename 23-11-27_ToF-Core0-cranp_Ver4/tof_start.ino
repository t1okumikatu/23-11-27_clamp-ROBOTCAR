void tof_start(){
   //I2C通信ライブラリ(Wire)の初期化
  Wire.begin();
  //タイムアウトまでの時間をセット
  for (int i = 0; i < SENSOR_NUM; i++)
  {  
    Sensor[i].setTimeout(500);  
  }
  // まず全てのGPIOをLOW
  for (int i = 0; i < SENSOR_NUM; i++)
  {
    pinMode(GPIO_MASK_ARRAY[i], OUTPUT);
    digitalWrite(GPIO_MASK_ARRAY[i], LOW);
  }
  for (int i = 0; i < SENSOR_NUM; i++) {
    // センサを初期化
    pinMode(GPIO_MASK_ARRAY[i], INPUT);
    if (Sensor[i].init() == true)
    {
      Sensor[i].setTimeout(1000);
      Sensor[i].startContinuous(10);
      int address = ADDRESS_00 + (i * 2);
      Sensor[i].setAddress(address);
      Serial.print("migi" );
     // Serial.println(address);
      Serial.print("hidari" );
      Serial.println(address);
    }
  
    else
    {
      Serial.print("Sensor ");
      Serial.print(i);
      Serial.println(" error");
    }
  } 
}
