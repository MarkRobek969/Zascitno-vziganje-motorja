#define S1 2
#define S2 3
#define S3 4
#define S4 5
#define M1 8

void setup()
{
 pinMode(S1, INPUT);
 pinMode(S2, INPUT);
 pinMode(S3, INPUT);
 pinMode(S4, INPUT);
 pinMode(M1, OUTPUT);
}
void loop()
{
if((digitalRead(S2)==HIGH && digitalRead(S3)==HIGH)&&(digitalRead(S4)==LOW))
 {digitalWrite(M1, HIGH);
}
if(digitalRead(S1)==HIGH || digitalRead(S3)==LOW)
 {digitalWrite(M1, LOW);
 }
}
