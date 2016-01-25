#include <LGI_QTouch.h>

//Anlegen der Instanzen für 3 Buttons
//erster Pin -> Anschluss-Pin, zweiter Pin -> Partner-Pin
QTouchButton Button1(4, 5); 
QTouchButton Button2(5, 4);
QTouchButton Button3(3, 4);

void setup() {
  //starten der seriellen Schnittstelle
  Serial.begin(9600);
  
  //Initialisieren der Buttons (Einmessen der Offsets)
  Button1.init();
  Button2.init();
  Button3.init();

  //Ausgabe der Offsetwerte
  Serial.print("\n\nOffset 1: ");
  Serial.print(Button1.getOffset());
  Serial.print("  Offset 2: ");
  Serial.print(Button2.getOffset());
  Serial.print("  Offset 3: ");
  Serial.println(Button2.getOffset());
}

void loop() {

  //Ausgabe der Zustände
  Serial.print("Button1: ");
  Serial.print(Button1.isTouched());
  Serial.print("   Button2: ");
  Serial.print(Button2.isTouched());
  Serial.print("   Button3: ");
  Serial.print(Button3.isTouched());

  delay(50);
}


