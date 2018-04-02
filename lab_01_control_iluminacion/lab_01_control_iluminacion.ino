#define OUT 5
#define IN A0
int out = 0;
byte in = 0;

void setup() {  
  pinMode(OUT, OUTPUT);             // preparar output
  analogWrite(OUT,0);
  Serial.begin(9600);               // inicializar puerto serial
}

void loop() {
  out = analogRead(IN);             // leer del pin A0 como
  out = map(out, 0, 1023, 0, 255);  // escalar para obtener formato uint8 (0-255)
  Serial.write(out);                // enviar datos en ASCII
  if(Serial.available()){           // leer del serie si hay datos
    in = Serial.read();             // escribir en el OUT
    analogWrite(OUT, in);
  }
  delay(10);    // esperar para estabilizar el conversor
}
