void ToFK(){
 // timer5();
   if (Ltof<Rtof ){
    Left();
    Serial.println("Left");   
    delay(20);
    Stop(); 
    delay(20);
    SerialBT.println("Left");     
  }  
  if (Ltof>Rtof){
    Right(); 
    Serial.println("Right");  
    delay(20);
    Stop(); 
    delay(20); 
    SerialBT.println("Right");   
  }
  }
