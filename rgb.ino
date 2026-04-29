const int pinRojo = 9;
const int pinVerde = 10;
const int pinAzul = 11;

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  // --- MAGENTA (Rojo + Azul) ---
  analogWrite(pinRojo, 255); // Encendido
  analogWrite(pinVerde, 0);   // Apagado
  analogWrite(pinAzul, 255);  // Encendido
  delay(1000);

  // --- BLANCO (Rojo + Verde + Azul) ---
  analogWrite(pinRojo, 255); // Encendido
  analogWrite(pinVerde, 255); // Encendido
  analogWrite(pinAzul, 255);  // Encendido
  delay(1000);

  // --- CIAN (Verde + Azul) ---
  analogWrite(pinRojo, 0);    // Apagado
  analogWrite(pinVerde, 255); // Encendido
  analogWrite(pinAzul, 255);  // Encendido
  delay(1000);

  // --- AZUL (Solo Azul) ---
  analogWrite(pinRojo, 0);    // Apagado
  analogWrite(pinVerde, 0);    // Apagado
  analogWrite(pinAzul, 255);  // Encendido
  delay(1000);
}