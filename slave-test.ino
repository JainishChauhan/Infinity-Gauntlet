//slave
char state = '1';

void setup() {
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
 if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 
 // Controlling the LED
 if (state == '1') {
  digitalWrite(7, HIGH); // LED1 ON
  digitalWrite(9, LOW); // LED2 OFF
  digitalWrite(10, LOW); //LED3 OFF
  delay (1000);
  digitalWrite(7, LOW); // LED1 ON
  digitalWrite(9, LOW); // LED2 OFF
  digitalWrite(10, LOW); //LED3 OFF
  //state = '1';

 }
 else if (state == '2') {
  digitalWrite(7, LOW); // LED1 OFF
  digitalWrite(9, HIGH); // LED2 ON
  digitalWrite(10, LOW); //LED3 OFF
  delay (1000);
  digitalWrite(7, LOW); // LED1 ON
  digitalWrite(9, LOW); // LED2 OFF
  digitalWrite(10, LOW); //LED3 OFF
  //state = '1';

 }
 else if (state == '3') {
  digitalWrite(7, LOW); // LED1 OFF
  digitalWrite(9, LOW); // LED2 OFF
  digitalWrite(10, HIGH); //LED3 ON
  delay (1000);
  digitalWrite(7, LOW); // LED1 ON
  digitalWrite(9, LOW); // LED2 OFF
  digitalWrite(10, LOW); //LED3 OFF
  //state = '1';


 }
 else if (state == '4') {
  digitalWrite(7, LOW); // LED1 OFF
  digitalWrite(9, LOW); // LED2 ON
  digitalWrite(10, LOW); //LED3 ON
  delay (1000);
  digitalWrite(7, LOW); // LED1 ON
  digitalWrite(9, LOW); // LED2 OFF
  digitalWrite(10, LOW); //LED3 OFF
  //state = '1';

 }
 

 }
 Serial.print (state);
}
