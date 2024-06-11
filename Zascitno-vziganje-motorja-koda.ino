int ML_enable=11;
int ML_naprej=10;
int ML_nazaj=9;
int MD_enable=3;
int MD_naprej=6;
int MD_nazaj=5;
int Sen_spr=A0;
int Sen_des=A1;
int Ovira=LOW;
int NiOvire=HIGH;

void vozi(int Levi, int Desni){
  if(Desni>=0){
    digitalWrite(MD_nazaj,LOW);
    digitalWrite(MD_enable,HIGH);
    analogWrite(MD_naprej,Desni);
    }
    else
    {
    digitalWrite(MD_enable,HIGH);
    digitalWrite(MD_naprej,LOW);
    analogWrite(MD_nazaj,abs(Desni));
    }

    if(Levi>=0){
    digitalWrite(ML_nazaj,LOW);
    digitalWrite(ML_enable,HIGH);
    analogWrite(ML_naprej,Levi);
    }
    else
    {
    digitalWrite(ML_enable,HIGH);
    digitalWrite(ML_naprej,LOW);
    analogWrite(ML_nazaj,abs(Levi));
    }
    return;
  }

 void setup() {
  // put your setup code here, to run once:
  pinMode(ML_enable,OUTPUT);
  pinMode(ML_naprej,OUTPUT);
  pinMode(ML_nazaj,OUTPUT );
  pinMode(MD_enable,OUTPUT);
  pinMode(MD_naprej,OUTPUT);
  pinMode(MD_nazaj,OUTPUT );
}

void loop() {
  
if(digitalRead(Sen_des)==Ovira){
    vozi(90,200);

    delay(20);
}

else{
  vozi(220,80);
  
 
  }
 if(digitalRead(Sen_spr)==Ovira){
    vozi(-120, 170);
    delay(20);
}

  }
 
