

// Variables:
// момент предыдущего  нажатия 
int previous_push_Start_button_time = 0;        //  момент предыдущего  нажатия
int confirmed_push_delay = 5000;            // интервал "подтвержденного" нажатия 5 сек.  (in milliseconds)

// настройки 
void setup() {
    // Входы
    pinMode(PB9, INPUT);  // контакт кнопки Старт
    pinMode(PB6, INPUT);  // lub oil pressure  OK    
    pinMode(PB3, INPUT);  // eng speed OK 

    // Выходы       
    pinMode(PB7, OUTPUT);   // lub oil pump LED   
    pinMode(PA15, OUTPUT);  // eng start success LED
    pinMode(PB5, OUTPUT);    // main Air Switch  LED
    pinMode(PB5, OUTPUT);   // main Air Fuel Switch LED
     // pinMode(PA3, OUTPUT); // резерв

}


// всего  три входа DI
// уставка по  дребезгу  для всех одна
#define BUTTON_DEBOUNCE_DELAY 1

// кнопка 
uint8 isStartButtonPressed(uint8 pin=PB9,
                      uint32 pressedLevel=HIGH) {
    if (digitalRead(pin) == pressedLevel) {
        delay(BUTTON_DEBOUNCE_DELAY);
        while (digitalRead(pin) == pressedLevel)
            ;
        return true;
    }
    return false;
}

// давление масла (Switch)
uint8 isLubOilPressureOK(uint8 pin=PB6,
                      uint32 pressedLevel=HIGH) {
    if (digitalRead(pin) == HIGH) {
        delay(BUTTON_DEBOUNCE_DELAY);
        while (digitalRead(pin) == HIGH)
            ;
        return true;
    }
    return false;
}

// двигатель запустился (Switch)
uint8 isEngineSpeedOK(uint8 pin=PB3,
                      uint32 pressedLevel=HIGH) {
    if (digitalRead(pin) == HIGH) {
        delay(BUTTON_DEBOUNCE_DELAY);
        while (digitalRead(pin) == HIGH)
            ;
        return true;
    }
    return false;
}


// главный  цикл Приложения
void loop() {
	
	
	// обрабатываем нажатие  кнопки
    if (isStartButtonPressed()) {
		// 
        if (millis() - previous_push_Start_button_time  > confirmed_push_delay) {
        // сохраняем момент момент предыдущего  нажатия
        previous_push_Start_button_time = millis();
     
        digitalWrite(PB7,HIGH);// Turn the LED from off to on, or on to off
    }
				
  }

}
