const int buttonPin =2;
const int ledPin=13;

//variable will change
int buttonState=0; //variable for reading the push button status

void setup(){
//initialize the LED pin as output
pinMode(ledPin, OUTPUT);
//initialize the button pin as input
pinMode(buttonPin, INPUT);
}

void loop(){
 // Read the state of Push button value;
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
    }
}
