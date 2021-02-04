
int red_pin = 6;
int red_pin2 = 5;
int white_pin2 = 3;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
 //red up
 /* for(int i=0; i<255; i++){
    analogWrite(red_pin, i);
    delay(3);
  }
  //red down
    for(int i=255; i>0; i--){
    analogWrite(white_pin, i);
    delay(3);
  }
  //red up
  for(int i=0; i<255; i++){
    analogWrite(red_pin2, i);
    delay(3);
  }
  //red down
    for(int i=255; i>0; i--){
    analogWrite(white_pin2, i);
    delay(3);
  }


  //40 per minut, 1.5 sek per blink
  //reset red
  analogWrite(red_pin, 0);
  analogWrite(red_pin2, 0);
    */
  //white up       
  for(int i=0; i<128; i=i+2){
    analogWrite(white_pin2, i);
    delay(7);
  }
  
  delay(131);
  
  //white down
  for(int i=128; i>0; i=i-2){
    analogWrite(white_pin2, i);
    delay(7);
  }
  analogWrite(white_pin2,0);
  delay(500);

}
