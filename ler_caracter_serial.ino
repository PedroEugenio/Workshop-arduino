char recebido = 0;

void setup() {
  Serial.begin(9600); //Estabelece a velocidade da conexão
  Serial.println("Introduza um caracter: ");
  
}

void loop() {
  if (Serial.available() > 0){ //verifica se recebe algum caracter
    recebido = Serial.read(); //Lê o caracter e guarda-o na variavel

  if ((recebido >= '0') && (recebido <= '9')){
    Serial.print("O numero recebido: ");
    Serial.println(recebido);
  }
  else if((recebido >= 'A') && (recebido <= 'Z')){ //'A'=65 'Z'=90
    Serial.print("A letra Maiuscula recebida foi: ");
    Serial.println(recebido);
  }
  else if((recebido >= 'a') && (recebido <= 'z')){ //'a'=97 'z'=122'
    Serial.print("A letra minuscula recebida foi: ");
    Serial.println(recebido);
  }
  else {
    Serial.println("Nao e' numero, nem letra!");
  }
  }

}
