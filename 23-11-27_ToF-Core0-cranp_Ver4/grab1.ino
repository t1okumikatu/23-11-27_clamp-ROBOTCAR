 void grab1(){
   motor.brake(0);
        SerialBT.println("grab1====1");
        servoClamp.gripopen60();//130-60 　　　開く
        servoClamp.shoulderclose();//60-170　　ゆっくり降ろす
        servoClamp.gripclose();//60-130　　　　ゆっくり閉める
        servoClamp.shoulderopen();//170-60　　ゆっくり上げる
        motor.brake(0);
         Motor();   
        SerialBT.println("grab1====2");
        delay(1000);       
  } 
