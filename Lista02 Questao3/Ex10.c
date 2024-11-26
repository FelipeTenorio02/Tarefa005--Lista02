// 1) Declara��o do vetor "cameraData" com 10 valores em Arduino
int cameraData[10];  // Declara��o do vetor com 10 elementos inteiros

// 2) Fun��o do c�digo cameraData[3] = analogRead(A1);
cameraData[3] = analogRead(A1);

Neste c�digo, o Arduino l� o valor de um pino anal�gico (A1) e o armazena na posi��o 3 do vetor cameraData.

analogRead(A1): L� o valor anal�gico no pino A1, que varia de 0 a 1023.
cameraData[3]: Armazena o valor lido na posi��o 3 do vetor cameraData.
Esse c�digo � �til para armazenar leituras cont�nuas de sensores anal�gicos em diferentes posi��es do vetor.

// 3) Inicializa��o de um vetor de floats chamado "temperaturas"
Para inicializar um vetor de floats com os valores fornecidos, voc� pode fazer da seguinte maneira:

float temperaturas[] = {25.5, 26.0, 24.8, 27.3, 26.5};  // Inicializa o vetor com os valores de temperatura

Este vetor armazena 5 valores de temperatura. Como voc� n�o especificou o tamanho,
o compilador automaticamente determina que o vetor tem 5 elementos com base nos valores fornecidos.

// 4) Explica��o do c�digo do Arduino e poss�vel resposta
for (int i = 0; i < 4; i++) {
    Serial.println(ledPins[i]);
}
Explica��o:

O for � uma estrutura de repeti��o que ir� iterar 4 vezes.
int i = 0: Inicializa o contador i como 0.
i < 4: A repeti��o ocorre enquanto i for menor que 4 (ou seja, o loop vai rodar de i = 0 at� i = 3).
Serial.println(ledPins[i]): Para cada valor de i, ele acessa o valor correspondente do vetor ledPins e imprime esse valor na porta serial.

Poss�vel resposta:
O vetor ledPins pode armazenar os n�meros dos pinos aos quais os LEDs est�o conectados. Se o vetor for:
int ledPins[] = {3, 5, 6, 9};

A sa�da seria:
3
5
6
9


// 5) Completar o c�digo da quest�o 4 para execu��o no Arduino
int ledPins[] = {3, 5, 6, 9};  // Pinos dos LEDs

void setup() {
    Serial.begin(9600);  // Inicia comunica��o serial
    for (int i = 0; i < 4; i++) {
        pinMode(ledPins[i], OUTPUT);  // Configura os pinos dos LEDs como sa�da
    }
}

void loop() {
    for (int i = 0; i < 4; i++) {
        Serial.println(ledPins[i]);  // Imprime os pinos dos LEDs no monitor serial
        digitalWrite(ledPins[i], HIGH);  // Acende o LED
        delay(1000);  // Aguarda 1 segundo
        digitalWrite(ledPins[i], LOW);  // Apaga o LED
        delay(1000);  // Aguarda 1 segundo
    }
}


// 6) Como utilizar a fun��o random() para atribuir
// valores aleat�rios a um vetor "randomValues" de tamanho 5
int randomValues[5];  // Vetor de tamanho 5

void setup() {
    Serial.begin(9600);  // Inicia comunica��o serial
    for (int i = 0; i < 5; i++) {
        randomValues[i] = random(0, 100);  // Atribui um valor aleat�rio entre 0 e 99
    }

    // Exibe os valores aleat�rios gerados
    for (int i = 0; i < 5; i++) {
        Serial.println(randomValues[i]);
    }
}

void loop() {
    // O loop pode estar vazio ou rodar outras tarefas
}


// 7) Explica��o do c�digo
for (int i = 0; i < tamanhoVetor; i++) {
    if (sensorReadings[i] == 150) {
        break;
    }
}

Explica��o:
A estrutura for percorre o vetor sensorReadings at� o tamanho do vetor tamanhoVetor.
Se algum valor de sensorReadings[i] for igual a 150, o break interrompe o loop.
Objetivo: O c�digo interrompe a leitura do vetor sensorReadings assim que encontrar o valor 150.

// 8) Fun��o do c�digo sizeof(sensorData) / sizeof(sensorData[0])
Explica��o:

sizeof(sensorData): Retorna o tamanho total do vetor sensorData em bytes.
sizeof(sensorData[0]): Retorna o tamanho de um �nico elemento do vetor sensorData (em bytes).
sizeof(sensorData) / sizeof(sensorData[0]): Divide o tamanho total do vetor pelo tamanho de um
�nico elemento, resultando no n�mero de elementos do vetor.

Exemplo: Se o vetor for definido como:

int sensorData[10];

Ent�o, sizeof(sensorData) retornaria o total de bytes ocupados por 10 inteiros e ]
sizeof(sensorData[0]) retornaria o tamanho de um inteiro. Dividindo os dois valores,
voc� obt�m o n�mero de elementos no vetor (neste caso, 10).

//
