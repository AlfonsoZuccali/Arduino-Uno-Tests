#include <string.h>

const int ledPIN = 9;
const int dot_en_ms = 500;

//aplicamos las funciones para cada simbolo del codigo morse
//dot > dura 3 dots
//space > dura 5 dots
//espacio entre letras > dura 3 dots
//espacio en la letra > dura 1 dot
//espacio entre palabras > 
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
  delay(dot_en_ms*2); //cada espacio dura 5 veces la duracion del punto(3dots del final de letra + 2dots del espacio)
}

void spaceBetweenLetters() {
  digitalWrite(ledPIN , LOW);
  delay(dot_en_ms*3);
}

void spaceInLetter() {
  digitalWrite(ledPIN , LOW);
  delay(dot_en_ms);
}

void a(){
  dot();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void b(){
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceBetweenLetters();    
}

void c(){
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceBetweenLetters();
}

void d(){
  dash();
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

void f(){
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceBetweenLetters();
}

void g(){
  dash();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceBetweenLetters();
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

void i(){
  dot();
  spaceInLetter();
  dot();
  spaceBetweenLetters();
}

void j(){
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceBetweenLetters();
}

void k(){
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
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

void m(){
  dash();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void n(){
  dash();
  spaceInLetter();
  dot();
  spaceBetweenLetters;
}

void o(){
  dash();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void p(){
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceBetweenLetters();  
}

void q(){
 dash();
 spaceInLetter();
 dash();
 spaceInLetter();
 dot();
 spaceInLetter();
 dash();
 spaceBetweenLetters();
}

void r(){
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceBetweenLetters();  
}

void s(){
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceBetweenLetters();  
}

void t(){
  dash();
  spaceBetweenLetters();  
}

void u(){
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void v(){
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
  spaceBetweenLetters();
}

void w(){
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void x(){
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void y(){
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dash();
  spaceInLetter();
  dash();
  spaceBetweenLetters();  
}

void z(){
  dash();
  spaceInLetter();
  dash();
  spaceInLetter();
  dot();
  spaceInLetter();
  dot();
  spaceBetweenLetters();  
}

void stringToMorse(char letra){
  switch (letra){
    case 'a':
      a();
      break;
    case 'b':
      b();
      break;
    case 'c':
      c();
      break;
    case 'e':
      e();
      break;
    case 'f':
      f();
      break;
    case 'g':
      g();
      break;
    case 'h':
      h();
      break;
    case 'i':
      i();
      break;
    case 'j':
      j();
      break;
    case 'k':
      a();
      break;
    case 'l':
      l();
      break;
    case 'm':
      m();
      break;
    case 'n':
      n();
      break;
    case 'o':
      o();
      break;
    case 'p':
      p();
      break;
    case 'q':
      q();
      break;
    case 'r':
      r();
      break;
    case 's':
      s();
      break;
    case 't':
      t();
      break;
    case 'u':
      u();
      break;
    case 'v':
      v();
      break;
    case 'w':
      a();
      break;
    case 'x':
      x();
      break;
    case 'y':
      y();
      break;
    case 'z':
      z();
      break;
    case ' ':
      space();
      break;
  }  
}

String input = "polo music"; //string a convertir a codigo morse
int length = input.length(); // hacemos una variable con el length del string

void setup() {
  Serial.begin(9600); // inciar puerto serie
  pinMode(ledPIN , OUTPUT); // definimos el pin 9 como salida
}

void loop() {
  //iteramos sobre cada uno de los caracteres del string
  for(int i = 0; i < length; i++){
      stringToMorse(input[i]);
    }
}
