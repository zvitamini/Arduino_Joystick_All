#define x A1
#define y A2
#define button 2

int sol=4;
int sag=5;
int ileri=6;
int geri=7;

void setup() {
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(button, INPUT_PULLUP); //Doruk'a tesekkurler

  pinMode(sol, OUTPUT);
  pinMode(sag, OUTPUT);
  pinMode(ileri, OUTPUT);
  pinMode(geri, OUTPUT);
}

void loop() {
  int xdeger= analogRead(x);
  int ydeger= analogRead(y);

  if( xdeger <= 20){
    digitalWrite(sol, HIGH);
    digitalWrite(sag, LOW);
  }
  else if (xdeger >= 1000){
    digitalWrite(sol, LOW);
    digitalWrite(sag, HIGH);
  }
  else if (ydeger >= 1000) {
    digitalWrite(ileri, HIGH);
    digitalWrite(geri, LOW);
  }
  else if (ydeger <= 20) {
    digitalWrite(ileri, LOW);
    digitalWrite(geri, HIGH);
  }
  else if (ydeger <= 20 && xdeger <= 20 ) {
    digitalWrite(ileri, LOW);
    digitalWrite(sag, LOW);
    digitalWrite(geri, HIGH);
    digitalWrite(sol, HIGH);
  }
  else if (ydeger >= 1000 && xdeger >= 1000 ) {
    digitalWrite(ileri, HIGH);
    digitalWrite(sag, HIGH);
    digitalWrite(geri, LOW);
    digitalWrite(sol, LOW);
  }
  else {
    digitalWrite(ileri, LOW);
    digitalWrite(geri, LOW);
    digitalWrite(sol, LOW);
    digitalWrite(sag, LOW);
  }
  delay(250);

}
