//EMMA (Educational Multilingual Mentor Assistant)

void setup() {
  Serial.begin(9600);
  Serial.print("hi");

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(14000);
}

void loop() {
  //red
  int pinsRojo = digitalRead(5);
  if (pinsRojo == HIGH) {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    Serial.print("rojo");
    delay(3000);
    digitalWrite(4,LOW);
    digitalWrite(12,LOW);
   } 
   //yellow
  int pinsAmarillo = digitalRead(6);
  if (pinsAmarillo == HIGH) {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    Serial.print("amarillo");
    delay(3000);
    digitalWrite(4,LOW);
    digitalWrite(12,LOW);
    digitalWrite(3,LOW);
    digitalWrite(11,LOW);
   }
   //green
  int pinsVerde = digitalRead(7);
  if (pinsVerde == HIGH) {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    Serial.print("verde");
    delay(3000);
    digitalWrite(3,LOW);
    digitalWrite(11,LOW);
   }    
   //blue
  int pinsAzul = digitalRead(8);
  if (pinsAzul == HIGH) {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    Serial.print("azul");
    delay(3000);
    digitalWrite(2,LOW);
    digitalWrite(10,LOW);
   }  
   //white
  int pinsBlanco = digitalRead(9);
  if (pinsBlanco == HIGH) {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    Serial.print("blanco");
    delay(3000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
   } 
   Serial.flush();
}
