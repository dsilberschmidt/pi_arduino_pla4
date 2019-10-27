// Tomé como base  https://www.luisllamas.es/arduino-puerto-serie/ , modificando pocas cosas

int option_letra1;
int option_letra2;
int option_letra3;
 
void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); 
}
 
void loop(){
  //si existe datos disponibles los leemos
  if (Serial.available()>0){
    //leemos la opcion enviada
    option_letra1=Serial.read();
    option_letra2=Serial.read();
    option_letra3=Serial.read();
    if((option_letra1=='O') && (option_letra2=='N') ) {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("ON");
    }
    if((option_letra1=='O') && (option_letra2=='F') && (option_letra3=='F')) {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("OFF");
    }
  }
  
}
