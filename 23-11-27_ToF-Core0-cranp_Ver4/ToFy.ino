 void ToFy(){
  if(dy>1 && cranp==1 ){
    ToFK();   
  }
  if(dy<1 && cranp==1 ){ 
     Stop();
     SerialBT.println("STOP<15stop");
     delay(50);
     timer5();
 }
 }
