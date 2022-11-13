#include <VirtualWire.h>
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
vw_set_rx_pin(1);
vw_set_ptt_inverted(true);
vw_setup(2000);
vw_rx_start();
pinMode(PWM1, OUTPUT);
pinMode(PWM2, OUTPUT);
pinMode(Dir1, OUTPUT);
pinMode(Dir2, OUTPUT);
}
void loop()
{   
    int button;
    char temparr[5];
    uint8_t message[VW_MAX_MESSAGE_LEN]; //buffer
    uint8_t messageLength = VW_MAX_MESSAGE_LEN; //message size

    if (vw_get_message(message, &messageLength))
    {
    int i;
  
  for (i = 0; i < messageLength; i++)
  {       
    temparr[i] = char(message[i]);        
  }
    temparr[messageLength] = '\0';
    button=atoi(temparr); 

    if(button==200){
    fwd();
    }

    if(button==400){
    rvrs();
    }

    if(button==600){
    rght();
    }

    if(button==800){
    lft();
    }   

    if(button==100){
    stp();
    }        
}
}
void fwd()
{
digitalWrite(Dir1, HIGH);
analogWrite(PWM1, 255);

digitalWrite(Dir2, HIGH);
analogWrite(PWM2, 255);

}

void rvrs()
{
digitalWrite(Dir1, LOW);
analogWrite(PWM1, 255);

digitalWrite(Dir2, LOW);
analogWrite(PWM2, 255);

}

void rght()
{
digitalWrite(Dir1, LOW);
analogWrite(PWM1, 200);

digitalWrite(Dir2, HIGH);
analogWrite(PWM2, 255);

}

void lft()
{
digitalWrite(Dir1, HIGH);
analogWrite(PWM1, 255);

digitalWrite(Dir2, LOW);
analogWrite(PWM2, 200);

}

void stp()
{
digitalWrite(Dir1, LOW);
analogWrite(PWM1, 0);

digitalWrite(Dir2, LOW);
analogWrite(PWM2, 0);

}
