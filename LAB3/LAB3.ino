int SEG_A=0;
int SEG_B=1;
int SEG_C=2;
int SEG_D=3;
int SEG_E=4;
int SEG_F=5;
int SEG_G=6;
int SEG_DP=9;
int Q1 = 13;
int Q2 = 12;
int Q3 = 11;
int Q4 = 7;
int i;
int j;

char seg[] =
 
  {

    0b10110110, // 5 
    0b10111110, // 6 
    0b11111100, // 0 
    0b11110010, // 3 
    0b11111100, // 0 
    0b11110010, // 3 
    0b11011010, // 2            
    0b11111100, // 0         
   
   } ;
void display7seg(int a)
{
  digitalWrite(SEG_A,seg[a] & 1<<7);
  digitalWrite(SEG_B,seg[a] & 1<<6);
  digitalWrite(SEG_C,seg[a] & 1<<5);
  digitalWrite(SEG_D,seg[a] & 1<<4);
  digitalWrite(SEG_E,seg[a] & 1<<3);
  digitalWrite(SEG_F,seg[a] & 1<<2);
  digitalWrite(SEG_G,seg[a] & 1<<1);
  digitalWrite(SEG_DP,seg[a] & 1<<0);
  } 
void setup() {
  pinMode(SEG_A,OUTPUT);
  pinMode(SEG_B,OUTPUT);
  pinMode(SEG_C,OUTPUT);
  pinMode(SEG_D,OUTPUT);
  pinMode(SEG_E,OUTPUT);
  pinMode(SEG_F,OUTPUT);
  pinMode(SEG_G,OUTPUT);
  pinMode(SEG_DP,OUTPUT);
  pinMode(Q1,OUTPUT);
  pinMode(Q2,OUTPUT);
  pinMode(Q3,OUTPUT);
  pinMode(Q4,OUTPUT);
}

void loop(){
 for (i=0; i<8; i++) {
      digitalWrite(Q1,HIGH);
      digitalWrite(Q2,HIGH);
      digitalWrite(Q3,HIGH);
      digitalWrite(Q4,HIGH);
      display7seg(i);
      delay(1000);
  }
}
