#include <Arduino.h>

// vermelho
const int pinLedVM25 = 25; // superior direito 
const int pinLedVM26 = 26; // inferior direito 
const int pinLedVM32 = 32; // superior esquerdo
const int pinLedVM14 = 14; // inferior esquerdo 

const int pinLedVD13 = 13; // verde central

const int pinLedAM33 = 33; // topo amarelo
const int pinLedAM27 = 27; // base amarelo

// Assinatura de Funções
void ligarSetaEsquerda();
void ligarSetaDireita();
void ligarPiscaAlerta();

void setup() {

  pinMode(pinLedVM25, OUTPUT);
  pinMode(pinLedVM26, OUTPUT);
  pinMode(pinLedVM32, OUTPUT);
  pinMode(pinLedVM14, OUTPUT);

  pinMode(pinLedVD13, OUTPUT);
  
  pinMode(pinLedAM33, OUTPUT);
  pinMode(pinLedAM27, OUTPUT);


  digitalWrite(pinLedVM25, LOW);
  digitalWrite(pinLedVM26, LOW);
  digitalWrite(pinLedVM32, LOW);
  digitalWrite(pinLedVM14, LOW);

  digitalWrite(pinLedAM33, LOW);
  digitalWrite(pinLedAM27, LOW);

  digitalWrite(pinLedVD13, LOW);
}


void loop() {
  
  void ligarSetaEsquerda();
  void ligarSetaDireita();
  void ligarPiscaAlerta();

}


void ligarSetaEsquerda(){
  for (int x = 0; x < 3; x++){
  digitalWrite(pinLedAM33, HIGH);
  delay(1000);

  // digitalWrite(pinLedAM33, LOW);
  // delay(1000);
  
  digitalWrite(pinLedVM25, HIGH);
  delay(1000);
  // digitalWrite(pinLedVM25, LOW);
  // delay(1000);

  //digitalWrite(pinLedVM26, HIGH);
  //delay(1000);
  // digitalWrite(pinLedVM26, LOW);
  // delay(1000);

  //digitalWrite(pinLedAM27, HIGH);
  //delay(1000);
  // digitalWrite(pinLedAM27, LOW);
  // delay(1000);

  //digitalWrite(pinLedVM14, HIGH);
  //delay(1000);
  // digitalWrite(pinLedVM14, LOW);
  // delay(1000);

  digitalWrite(pinLedVM32, HIGH);
  delay(1000);
  // digitalWrite(pinLedVM32, LOW);
  // delay(1000);

  //digitalWrite(pinLedVD13, HIGH);
  //delay(1000);
  //digitalWrite(pinLedVD13, LOW);
  //delay(1000);

  }
}

void ligarSetaDireita(){
  for (int x = 0; x < 3; x++){
    //digitalWrite(pinLedAM33, HIGH);
    //delay(1000);
    // digitalWrite(pinLedAM33, LOW);
    // delay(1000);
    
    //digitalWrite(pinLedVM25, HIGH);
    //delay(1000);
    // digitalWrite(pinLedVM25, LOW);
    // delay(1000);

    digitalWrite(pinLedVM26, HIGH);
    delay(1000);
    // digitalWrite(pinLedVM26, LOW);
    // delay(1000);

    digitalWrite(pinLedAM27, HIGH);
    delay(1000);
    // digitalWrite(pinLedAM27, LOW);
    // delay(1000);

    digitalWrite(pinLedVM14, HIGH);
    delay(1000);
    // digitalWrite(pinLedVM14, LOW);
    // delay(1000);

    //digitalWrite(pinLedVM32, HIGH);
    //delay(1000);
    // digitalWrite(pinLedVM32, LOW);
    // delay(1000);

    //digitalWrite(pinLedVD13, HIGH);
    //delay(1000);
    //digitalWrite(pinLedVD13, LOW);
    //delay(1000);

    }
}

void ligarPiscaAlerta(){
   for (int x = 0; x < 5; x++){
    digitalWrite(pinLedAM33, HIGH);
    delay(1000);
    digitalWrite(pinLedAM33, LOW);
    delay(1);
    
    digitalWrite(pinLedVM25, HIGH);
    delay(1000);
    digitalWrite(pinLedVM25, LOW);
    delay(1);

    digitalWrite(pinLedVM26, HIGH);
    delay(1000);
    digitalWrite(pinLedVM26, LOW);
    delay(1);

    digitalWrite(pinLedAM27, HIGH);
    delay(1000);
    digitalWrite(pinLedAM27, LOW);
    delay(1);

    digitalWrite(pinLedVM14, HIGH);
    delay(1000);
    digitalWrite(pinLedVM14, LOW);
    delay(1);

    digitalWrite(pinLedVM32, HIGH);
    delay(1000);
    digitalWrite(pinLedVM32, LOW);
    delay(1);

    digitalWrite(pinLedVD13, HIGH);
    delay(1000);
    digitalWrite(pinLedVD13, LOW);
    delay(1);
   }


 }
