	
Ardudroid.h

	Ardudroid();
	
	//setter
	//******************************************************************

	void BTbee_begin(int Baud); -> Bluetooth-Bee Modul
	void BTserial_begin();      -> Serial Bluetooth Modul (Baud 38400)			
	
	//getter
	//******************************************************************

	//Fernsteuerung
	
	int getSpeed();		         -> R�ckgabe Geschwindigkeit -100 bis 100
	int getDirection();	         -> R�ckgabe Richtung-100 bis 100
	bool getButton(uint8_t Button);  -> gibt zur�ck ob Button gedr�ckt (Button = 1/2: Taster + Button =3/4: Schalter)

	//LED_Steuerung

	int getRed();			-> Rot-Wert 0-255
	int getGreen();			-> Gr�n-Wert 0-255
	int getBlue();			-> Blau-Wert 0-255
	bool getLedSwitch();		-> boolean Schalter z.B. Lampe ein/aus

	//Events
	bool getEvent(uint8_t Event);	-> boolean Event aktiv (Event = 1-6)
		
	//Read Android
	//******************************************************************
	void readBluetooth();		-> lese serielle Kommunikation in Char-Array
	void getData();			-> Parse Char-Array f�r getter Methoden

