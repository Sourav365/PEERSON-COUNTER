int c1=0;
int c2=0;
void setup() {
pinMode(9,INPUT);
pinMode(10,INPUT);
Serial.begin(9600);
}
void loop() {
 int ir1=digitalRead(9);
 int ir2=digitalRead(10);
       //ENTERS...................
  if(ir1==0)
  {
    while(ir2==1)
       {
       Serial.println("ENTERS");
       c1=c1+1;
       Serial.print("TOTAL PERSON =  ");
       Serial.println(c1+c2);
       delay(2000);
       break;
       }
  } 
      //EXITS.....................
  else if(ir2==0)
    {
      while(ir1==1) 
       {
        Serial.println("EXITS");
        c2=c2-1;
        Serial.print("TOTAL PERSON =  ");
        Serial.println(c1+c2);
        delay(2000);
        break;
        }
  }
}
