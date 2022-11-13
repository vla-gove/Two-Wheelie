int speed1=6; 
int speed2=5;
int direction1=7; 
int direction2=4;
void setup()
{
pinMode(direction1, OUTPUT);
pinMode(direction2, OUTPUT);
delay(5000);
}
void loop()
{

}
void forward(int t, int pwm)
{
digitalWrite(direction1,HIGH); 
digitalWrite(direction2,HIGH); 
analogWrite(speed1, pwm); 
analogWrite(speed2, pwm);
delay(t);
analogWrite(speed1, 0); 
analogWrite(speed2, 0);
}
void backward(int t, int pwm)
{
digitalWrite(direction1,LOW); 
digitalWrite(direction2,LOW); 
analogWrite(speed1, pwm); 
analogWrite(speed2, pwm);
delay(t);
analogWrite(speed1, 0); 
analogWrite(speed2, 0);
}
void right(int t, int pwm)
{
digitalWrite(direction1,HIGH); 
digitalWrite(direction2,LOW); 
analogWrite(speed1, pwm); 
analogWrite(speed2, pwm);
delay(t);
analogWrite(speed1, 0); 
analogWrite(speed2, 0);
}

void left(int t, int pwm)
{
digitalWrite(direction1,LOW); 
digitalWrite(direction2,HIGH); 
analogWrite(speed1, pwm); 
analogWrite(speed2, pwm);
delay(t);
analogWrite(speed1, 0); 
analogWrite(speed2, 0);
}
