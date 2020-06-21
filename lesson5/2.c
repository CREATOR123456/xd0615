#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
void setup()
{
  pinMode(IN1, OUTPUT);//����1
  pinMode(IN2, OUTPUT);//����2
  pinMode(IN3, OUTPUT);//����3
  pinMode(IN4, OUTPUT);//����4
  pinMode(S1, OUTPUT);//Ƭѡ1
  pinMode(S2, OUTPUT);//Ƭѡ2
  pinMode(S3, OUTPUT);//Ƭѡ3
  pinMode(S4, OUTPUT);//Ƭѡ4

  pinMode(LT,OUTPUT);//����
  pinMode(BT,OUTPUT);//����

  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);

  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
  Serial.begin(9600);

};
byte income=0;
byte temp[4];
String abc="";
void loop()
{
 while(Serial.available()>0)
 {
   abc+=char(Serial.read());
   delay(3);

  for(int i=0;i<4;i++)
  {
    temp[i]=int(abc[i]);
    Serial.println(temp[i]);
    switch (i)
    {
      case 0:
        digitalWrite(S1,LOW);
      case 1:
      digitalWrite(S2,LOW);
      case 2:
      digitalWrite(S3,LOW);

      case 3:
      digitalWrite(S4,LOW);
    };
     income=temp[i]-'0';
     digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(S1,HIGH);
    digitalWrite(S2,HIGH);
    digitalWrite(S3,HIGH);
    digitalWrite(S4,HIGH);
    delay(4);
  }
 }
     abc="";
}