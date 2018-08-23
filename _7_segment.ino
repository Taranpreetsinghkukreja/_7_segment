int pins[7] = {2, 3, 4, 5, 6, 7, 8};
int contol[4]={9,10,11,12};
int data[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 1, 1}};
void setup() {
  for (int i = 0; i < 7; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
  for(int j=0;j<4;j++)
  {pinMode(contol[j],OUTPUT);}
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void t1()
{digitalWrite(9,1);
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(12,0);
}
void t2()
{digitalWrite(9,0);
digitalWrite(10,1);
digitalWrite(11,0);
digitalWrite(12,0);
}
void t3()
{digitalWrite(9,0);
digitalWrite(10,0);
digitalWrite(11,1);
digitalWrite(12,0);
}
void t4()
{digitalWrite(9,0);
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(12,1);
}
void dislay(int a)
{for(int i=0;i<7;i++)
{digitalWrite(pins[i],data[a][j]);}}
void loop()
{
  t1();
  display(1);
    delay(5);
    t2();
  display(2);
    delay(5);
    t3();
  display(3);
    delay(5);
    t4();
  display(4);
    delay(5);

   
    
    
    
    

  }
  // put your main code here, to run repeatedly:

}
