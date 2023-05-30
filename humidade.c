int umidade = 0;

void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  // Aplica alimentação ao sensor de umidade do solo
  digitalWrite(A0, HIGH);
  delay(10); // Aguarda 10 milissegundos
  umidade = analogRead(A1);
  // Desliga o sensor para reduzir a corrosão dos metais
  // ao longo do tempo
  digitalWrite(A0, LOW);
  Serial.println(umidade);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  if (umidade < 200) {
    digitalWrite(12, HIGH);
  } else {
    if (umidade < 400) {
      digitalWrite(11, HIGH);
    } else {
      if (umidade < 600) {
        digitalWrite(10, HIGH);
      } else {
        if (umidade < 800) {
          digitalWrite(9, HIGH);
        } else {
          digitalWrite(8, HIGH);
        }
      }
    }
  }
  delay(100); // Aguarda 100 milissegundos
}
