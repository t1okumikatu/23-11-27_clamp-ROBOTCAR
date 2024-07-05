void ToFm(){
  SerialBT.print("c-");
  SerialBT.print(cranp);
  SerialBT.print(", "); 
  SerialBT.print("dy-");
  SerialBT.print(dy); 
  SerialBT.print(", ");
  SerialBT.print("p-");
  SerialBT.print(ping);
  SerialBT.print(", ");
  SerialBT.print("R-");
  SerialBT.print(Rtof);
  SerialBT.print(", ");
  SerialBT.print("L-");
  SerialBT.println(Ltof);
  Serial.print("c-");
  Serial.print(cranp);
  Serial.print(", "); 
  Serial.print("dy-");
  Serial.print(dy); 
  Serial.print(", ");
  Serial.print("p-");
  Serial.print(ping);
  Serial.print(", ");
  Serial.print("R-");
  Serial.print(RTOF);
  Serial.print(", ");
  Serial.print("L-");
  Serial.println(LTOF);
 
// *********************************
// *************************************   
}
