     void Forward(){ 
        Motor();
        motor.forward(170);   
    // SerialBT.println("Forward");//  
    }
    void Stop(){ 
        Motor();
        motor.brake(0);   
    // SerialBT.println("Stop");//  
    }
    void Back(){ 
        Motor();
        motor.back(170);   
    // SerialBT.println("Back");//  
    }
    void preLeft(){ 
        Motor();
        //motor.brake(0);   
    // SerialBT.println("pre左回転");//  
     motor.Lback(170);
     motor.Rforward(170);
    }
     void Left(){ 
        Motor();
        //motor.brake(0);   
    // SerialBT.println("左回転");//  
     motor.Rforward(180);
     motor.Lback(182);
    }  
    //-----------
     void preRight(){ 
        Motor();
        //motor.brake(0);   
    //SerialBT.println("pre右回転");//  
     motor.Rback(170);
     motor.Lforward(170);
    }
     void Right(){ 
        Motor();
        //motor.brake(0);   
    // SerialBT.println("右回転");//  
     motor.Lforward(184);
     motor.Rback(178);
    }                                
