#include <VirtualWire.h>
int forward = 1;
int reverse = 2;
int left = 3;
int right = 4;
int stop = 5;
int button;
char temparray[5];

void setup() {
  vw_setup(2000);  
  pinMode(forward, INPUT_PULLUP);
  pinMode(reverse, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  Serial.begin(9600); 
}

void loop() {
  
  if (digitalRead(forward) == LOW) {
    button = 200;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }
  
  if (digitalRead(reverse) == LOW) {
    button = 400;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }

  if (digitalRead(right) == LOW) {
    button = 600;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }

  if (digitalRead(left) == LOW) {
    button = 800;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }

  if (digitalRead(stop) == LOW) {
    button = 800;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }

  
}