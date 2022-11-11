//pwm motors 
int PWM1 = 3;
int PWM2 = 5;
//direction pins 
int Dir1 = 4;
int Dir2 = 6;

//prototypes
void fwd(int); //forward
void rvrs(int); //reverse
void rght(int); //turn right
void lft(int); // turn left
void stp(int); //stop

void setup()
{
pinMode(PWM1, OUTPUT);
pinMode(PWM2, OUTPUT);
pinMode(Dir1, OUTPUT);
pinMode(Dir2, OUTPUT);
}
void loop()
{
//desired car movement [in ms]
fwd(2500);

rght(500);

fwd(2000);

lft(500);

rvrs(2500);

stp(2500);
}

void fwd(int tdelay)
{
digitalWrite(Dir1, HIGH);
analogWrite(PWM1, 255);

digitalWrite(Dir2, HIGH);
analogWrite(PWM2, 255);

delay(tdelay);
}

void rvrs(int tdelay)
{
digitalWrite(Dir1, LOW);
analogWrite(PWM1, 255);

digitalWrite(Dir2, LOW);
analogWrite(PWM2, 255);

delay(tdelay);
}

void rght(int tdelay)
{
digitalWrite(Dir1, LOW);
analogWrite(PWM1, 200);

digitalWrite(Dir2, HIGH);
analogWrite(PWM2, 255);

delay(tdelay);
}

void lft(int tdelay)
{
digitalWrite(Dir1, HIGH);
analogWrite(PWM1, 255);

digitalWrite(Dir2, LOW);
analogWrite(PWM2, 200);

delay(tdelay);
}

void stp(int tdelay)
{
digitalWrite(Dir1, LOW);
analogWrite(PWM1, 0);

digitalWrite(Dir2, LOW);
analogWrite(PWM2, 0);

delay(tdelay);
}
