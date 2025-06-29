const int ledPIN = 9;

void setup() {
  Serial.begin(9600); // inciar puerto serie
  pinMode(ledPIN , OUTPUT); // definimos el pin 9 como salida

  void dot(){
      digitalWrite(ledPIN , HIGH); //encendemos el led
      delay(1000); //cada punto dura 1s
    } 
  void space(){
      digitalWrite(ledPIN , LOW); //apagamos el led
      delay(5000); //cada espacio dura 5 veces la duracion del punto (5s)
    }
  void dash(){
      digitalWrite(ledPIN , HIGH); //encendemos el led
      delay(3000); //cada dash dura 3 veces la duracion del punto(5s)
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
