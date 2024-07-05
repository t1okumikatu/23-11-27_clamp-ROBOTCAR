void kaiten2(){
   if(cranp==5){
    motor.brake(0);
    grab2();//down 2回転目
    cranp=6;  
   }
    if(cranp==6 ){
     rotation1();//１回転目a
    if(ir.Ldata >4000){
      SerialBT.println("3停止");//
       Motor();   
      motor.brake(0);
      delay(1000);
      cranp=7; 
      }  
    }
      if(cranp==7 ){
      rotation2();//1回転目b
      if(ir.Ldata <100 && ir.Rdata <100 ){
      SerialBT.println("4停止");//
       Motor();   
      motor.brake(0);
      delay(1000);
      ESP.restart();
        delay(200); 
     }
      }
}
