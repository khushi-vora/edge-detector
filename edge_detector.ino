// edge detector 
int m1a = 10;
int m1b = 11;
int m2a = 12;
int m2b = 13;
int ir1 = 2;
int ir2 = 4;

void forward()
{
digitalWrite(m1a,HIGH);
digitalWrite(m1b,LOW);
digitalWrite(m2a,HIGH);
digitalWrite(m2b,LOW);
}
void anti()
{
digitalWrite(m1a,HIGH);
digitalWrite(m1b,LOW);
digitalWrite(m2a,LOW);
digitalWrite(m2b,HIGH);  
}

void setup() {
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(m1a,OUTPUT);
pinMode(m1b,OUTPUT);
pinMode(m2a,OUTPUT);
pinMode(m2b,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if ((digitalRead(2)) == (HIGH))
  {
    if ((digitalRead(4)) == (HIGH))
      forward();
    
  }
  else
  {
    if ((digitalRead(4)) == (LOW))
      anti();
  }

}
