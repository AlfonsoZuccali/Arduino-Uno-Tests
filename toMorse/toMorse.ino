const int ledPIN = 9;
const int dot_en_ms = 500;

//aplicamos las funciones para cada simbolo del codigo morse
//dot > dura 3 dots
//space > dura 5 dots
//espacio entre letras > dura 3 dots
//espacio en la letra > dura 1 dot
void dot() {
  digitalWrite(ledPIN , HIGH); //encendemos el led
  delay(dot_en_ms); //cada punto dura un dot
}

void dash() {
  digitalWrite(ledPIN , HIGH); //encendemos el led
  delay(dot_en_ms*3); //cada dash dura 3 veces la duracion del punto
}

void space() {
  digitalWrite(ledPIN , LOW); //apagamos el led
  delay(dot_en_ms*5); //cada espacio dura 5 veces la duracion del punto (5s) (3s del final de letra + 2s del espacio)
}

void spaceBetweenLetters() {
  digitalWrite(ledPIN , LOW);
  delay(dot_en_ms*3);
}

void spaceInLetter() {
  digitalWrite(ledPIN , LOW);
  delay(dot_en_ms);
}

void h(){
    dot();
    spaceInLetter();
    dot();
    spaceInLetter();
    dot();
    spaceInLetter();
    dot();
    spaceBetweenLetters();
}

void e(){
    dot();
    spaceBetweenLetters();  
}

void l(){
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceBetweenLetters();  
}

void o(){
  dash();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void setup() {
  Serial.begin(9600); // inciar puerto serie
  pinMode(ledPIN , OUTPUT); // definimos el pin 9 como salida
}

void loop() {
  // put your main code here, to run repeatedly:
  h();
  e();
  l();
  l();
  o();
}
