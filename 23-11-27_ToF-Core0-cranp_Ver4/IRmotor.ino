void IRmotor(){
   ir.sensor();   
   Motor();
  
         // 黒５０以上白５０以下
    if(ir.Rdata < 50){
      if(ir.Ldata < 50){
        SerialBT.println("前進");
        motor.forward(170);
      }else { 
        SerialBT.println("左回転");
        motor.Lback(140);
        motor.Rforward(170);
      }
    }
    if(ir.Rdata > 4000){
      if(ir.Ldata > 4000){
        SerialBT.println("前進");
        motor.forward(170);
      }else{
        SerialBT.println("右回転");
        motor.Lforward(170);
        motor.Rback(140);
      }
    }
    }  
