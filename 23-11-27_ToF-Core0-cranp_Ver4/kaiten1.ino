void kaiten1(){
  //ir.sensor();
  SerialBT.print("IR.Rdata ");
  SerialBT.println(ir.Rdata );
  SerialBT.print("IR.Ldata ");
  SerialBT.println(ir.Ldata );
   if(cranp==2){
    motor.brake(0);
    grab1();//up 1回転目 pipe up
    cranp=3;  
   }
    if(cranp==3){
      ir.sensor();
     rotation1();//１回転目a
    if(ir.Ldata >4000){
      SerialBT.println("L停止");//
       Motor();   
     Stop();
      delay(1000);
      cranp=4; 
      }  
    }
     if(cranp==4){
      rotation2();//1回転目b
      if(ir.Ldata <100 && ir.Rdata <100 ){
      SerialBT.println("LR停止");//
       Motor();   
      motor.brake(0);
      delay(100);
      cranp=5; 
     }
      }
}
