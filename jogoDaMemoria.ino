const int BOTAO1 = 10;
const int BOTAO2 = 11;
const int BOTAO3 = 12;
const int BOTAO4 = 13;

const int LED1 = 4;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 7;

void setup() {
  Serial.begin(9600);

  // configuração da porta dos botões para entrada
  for (int i = 10; i != 14; i++) {
    pinMode(i, INPUT);
    Serial.println(i);
  }

  // configuração da porta dos leds para saída
  for (int i = 4; i != 8; i++) {
    pinMode(i, OUTPUT);
    Serial.println(i);
  }
}

void loop() {
  // configuração dos leds

  // led 1
  if (digitalRead(BOTAO1) == HIGH) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  // led 2
  if (digitalRead(BOTAO2) == HIGH) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }

  // led 3
  if (digitalRead(BOTAO3) == HIGH) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }

  // led 4
  if (digitalRead(BOTAO4) == HIGH) {
    digitalWrite(LED4, HIGH);
  } else {
    digitalWrite(LED4, LOW);
  }

  int num = random(1,4);
  Serial.begin(num);
}


