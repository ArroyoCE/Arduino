void setup() {
  pinMode(13, OUTPUT); // CONFIGURANDO PORTA 13 PARA SAÍDA


}

void loop() {
  digitalWrite(13, HIGH); //Porta ligada
  delay(2000);
  digitalWrite(13, LOW); 
  delay(2000);

}
