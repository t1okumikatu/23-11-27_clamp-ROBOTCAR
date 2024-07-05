void grab2(){    
   motor.brake(0);
         SerialBT.println("grab2====1");
        servoClamp.gripclose130();//60-130
        servoClamp.shoulderclose();//60-170
        servoClamp.gripopen();//130-60
        servoClamp.shoulderopen();//170-60
        motor.brake(0);
         Motor();   
         SerialBT.println("grab2====2");
        delay(1000);  
  }        
