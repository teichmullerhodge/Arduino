#define LED_PORT 11
#define SERIAL_LOCATION 9600
void setup() {
  pinMode(LED_PORT, OUTPUT);      
  Serial.begin(SERIAL_LOCATION);      
}

void loop() {
  if (Serial.available() > 0) { 
    char input = Serial.read();  
    if (input == '\n') {           
      digitalWrite(LED_PORT, HIGH);     
      delay(1000);                
      digitalWrite(LED_PORT, LOW);       
    }
  }
}

