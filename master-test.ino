//Master-test
#define hall1 9
#define hall2 10
#define k 8
#define l 11
#define h1 A0
#define h2 A1
int hs1=0;
int hs2=0;
//int m=0;
//int n=0;
void setup() {
  // put your setup code here, to run once:
pinMode(hall1,INPUT);
pinMode(hall2,INPUT);
pinMode(h1,INPUT);
pinMode(h1,INPUT);
pinMode(k,OUTPUT);
pinMode(l,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(k,HIGH);
  digitalWrite(l,HIGH);
  hs1=digitalRead(hall1);
  hs2=digitalRead(hall2);
 // m=analogRead(h1);

  //n=analogRead(h2);
//  Serial.println(m);
  
  
  if(hs1==LOW && hs2==HIGH ){
    Serial.write('1');
    
    hs1=digitalRead(hall1);
    hs2=digitalRead(hall2);
    //m=analogRead(h1);
    delay (1000);
  }
  else if(hs1==LOW && hs2==LOW){
    Serial.write('2');
    
    hs1=digitalRead(hall1);
    hs2=digitalRead(hall2);
    //m=analogRead(h1);
    delay (1000);
  }
  else if(hs1==HIGH && hs2==LOW ){
    Serial.write('3');
    
    hs1=digitalRead(hall1);
    hs2=digitalRead(hall2);
    //m=analogRead(h1);
    delay (1000);
  }
  else if(hs1==HIGH && hs2==HIGH ){
    Serial.write('4');
    
    hs1=digitalRead(hall1);
    hs2=digitalRead(hall2);
    //m=analogRead(h1);
    delay (1000);
  }
  
  }
  
  
