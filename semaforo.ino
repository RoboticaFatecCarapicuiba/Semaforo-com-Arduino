//Pinos dos LEDS
int ledVerde = 10;
int ledAmarelo = 9;
int ledVermelho = 8;

//Pino do Botão
int botao = 2;

//Variável para armazenar estado do botão
bool pedidoTravessia = false;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(botao, INPUT);

  //Começa com o semáforo verde ligado
  digitalWrite(ledVerde, HIGH);
  
}

void loop {
  //Lê o botão
  if(digitalRead(botao)==HIGH) {
    pedidoTravessia = true;
  }
  if(pedidoTravessia){
    //troca para amarelo
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    delay(2000);

    //Troca para amarelo
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    delay(5000);

    //Volta para o verde
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);

    pedidoTravessia = false;
  }
}
