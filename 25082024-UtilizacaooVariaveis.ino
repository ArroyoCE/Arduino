int led = 12;

void setup() {
  pinMode(led, OUTPUT); // CONFIGURANDO PORTA 12 PARA SAÍDA


}

void loop() {
  digitalWrite(led, HIGH); //Porta ligada
  delay(150);
  digitalWrite(led, LOW); 
  delay(150);

}