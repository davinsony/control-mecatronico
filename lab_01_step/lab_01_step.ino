#define OUT 5
#define IN A0
#define STEPTIME 5000
byte outval = 0;

void setup() {
  pinMode(OUT, OUTPUT);
  analogWrite(OUT, 0);
  Serial.begin(115200);
}

void loop() {
  if (millis() > STEPTIME) outval = 255; else outval = 0;
  analogWrite(OUT, outval);
  Serial.println((String) millis() + ',' + outval + ',' + analogRead(IN));
}
