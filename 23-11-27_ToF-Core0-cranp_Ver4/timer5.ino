void timer5(){
    unsigned long nowTime = millis();   
    if(Flag==0){
    FrontSetTime=nowTime+15000;
    Serial.print("5秒set  ");  
    Serial.println(FrontSetTime);
    Flag=1; 
     Serial.println(nowTime); 
    }
    if(Flag==1 && (nowTime > FrontSetTime)){
     dy=0;
      Serial.print("5秒end  ");
      Serial.println(nowTime);
      cranp=2;
      Flag=0;       
    }
}
