
int led_pin = 6;
int led_pin2 = 5;
int white_pin2 = 3;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(led_pin, i);
    analogWrite(led_pin2, 255-i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin, i);
    analogWrite(led_pin2, 255-i);
    delay(5);
  }
    analogWrite(led_pin, 0);
    analogWrite(led_pin2, 0);
        for(int i=0; i<255; i++){
    analogWrite(white_pin2, i);
    delay(5);
  }
    for(int i=255; i>0; i--){
    analogWrite(white_pin2, i);
    delay(5);
  }

}
