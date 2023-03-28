// initialisation des variables
int ledrouge = 11;   
int ledjaune = 10;
int ledverte = 9;

void setup () {
pinMode(ledrouge  ,OUTPUT);       // Initialistation du circuit dans    l' Arduino 
pinMode(ledverte ,OUTPUT);
pinMode(ledrouge ,OUTPUT);

}


void loop () {

// allume les leds

digitalWrite(ledrouge ,HIGH);
digitalWrite(ledjaune ,HIGH);
digitalWrite(ledverte ,HIGH);

}
