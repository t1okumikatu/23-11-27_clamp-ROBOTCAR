#ifndef  _PING_H_
#define  _PING_H_
#include "Arduino.h"
class Ping {
    public:
      Ping();
      void obstacle();
      double Duration = 0; //受信した間隔
      double Distance = 0; //距離
      
    private:
      const int trigPin = 18;
      const int echoPin = 19;     
};

#endif
