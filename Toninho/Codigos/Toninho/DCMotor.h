#ifndef DCMOTOR_H
#define DCMOTOR_H




class DCMotor 
{
  public:
    DCMotor(int in1, int in2, int in3, int in4);
    void forward();
    void forward2();
    void backward();
    void left();
    void right(); 
    void stop(); 
    void leftBack();
    void rightBack();
    bool slowMode(long interval);

  private:
    void clockwise(int inx, int iny);
    void antiClockwise(int inx, int iny); 
    int _in1, _in2, _in3, _in4; 
    unsigned long currentMillis;
    unsigned long previousMillis = millis();
    bool estado;
    //const int  IN1 = 5, IN2 = 4, IN3 = 3, IN4 = 2;//pinos
  
};

#endif  //endif DCMotor

