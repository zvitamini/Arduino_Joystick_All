#define VRx A1
#define VRy A2
#define SW 2

void setup() {
  Serial.begin(9600);
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  int xdeger= analogRead(VRx);
  int ydeger= analogRead(VRy);
  int buton= digitalRead(SW);

  Serial.println("X değeri: ");
  Serial.print(xdeger);

  Serial.println();

  Serial.println("Y değeri: ");
  Serial.print(ydeger);

  Serial.println();
  delay(250);
}
