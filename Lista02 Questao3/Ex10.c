// 1) Declaração do vetor "cameraData" com 10 valores em Arduino
int cameraData[10];  // Declaração do vetor com 10 elementos inteiros

// 2) Função do código cameraData[3] = analogRead(A1);
cameraData[3] = analogRead(A1);

Neste código, o Arduino lê o valor de um pino analógico (A1) e o armazena na posição 3 do vetor cameraData.

analogRead(A1): Lê o valor analógico no pino A1, que varia de 0 a 1023.
cameraData[3]: Armazena o valor lido na posição 3 do vetor cameraData.
Esse código é útil para armazenar leituras contínuas de sensores analógicos em diferentes posições do vetor.

// 3) Inicialização de um vetor de floats chamado "temperaturas"
Para inicializar um vetor de floats com os valores fornecidos, você pode fazer da seguinte maneira:

float temperaturas[] = {25.5, 26.0, 24.8, 27.3, 26.5};  // Inicializa o vetor com os valores de temperatura

Este vetor armazena 5 valores de temperatura. Como você não especificou o tamanho,
o compilador automaticamente determina que o vetor tem 5 elementos com base nos valores fornecidos.

// 4) Explicação do código do Arduino e possível resposta
for (int i = 0; i < 4; i++) {
    Serial.println(ledPins[i]);
}
Explicação:

O for é uma estrutura de repetição que irá iterar 4 vezes.
int i = 0: Inicializa o contador i como 0.
i < 4: A repetição ocorre enquanto i for menor que 4 (ou seja, o loop vai rodar de i = 0 até i = 3).
Serial.println(ledPins[i]): Para cada valor de i, ele acessa o valor correspondente do vetor ledPins e imprime esse valor na porta serial.

Possível resposta:
O vetor ledPins pode armazenar os números dos pinos aos quais os LEDs estão conectados. Se o vetor for:
int ledPins[] = {3, 5, 6, 9};

A saída seria:
3
5
6
9


// 5) Completar o código da questão 4 para execução no Arduino
int ledPins[] = {3, 5, 6, 9};  // Pinos dos LEDs

void setup() {
    Serial.begin(9600);  // Inicia comunicação serial
    for (int i = 0; i < 4; i++) {
        pinMode(ledPins[i], OUTPUT);  // Configura os pinos dos LEDs como saída
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


// 6) Como utilizar a função random() para atribuir
// valores aleatórios a um vetor "randomValues" de tamanho 5
int randomValues[5];  // Vetor de tamanho 5

void setup() {
    Serial.begin(9600);  // Inicia comunicação serial
    for (int i = 0; i < 5; i++) {
        randomValues[i] = random(0, 100);  // Atribui um valor aleatório entre 0 e 99
    }

    // Exibe os valores aleatórios gerados
    for (int i = 0; i < 5; i++) {
        Serial.println(randomValues[i]);
    }
}

void loop() {
    // O loop pode estar vazio ou rodar outras tarefas
}


// 7) Explicação do código
for (int i = 0; i < tamanhoVetor; i++) {
    if (sensorReadings[i] == 150) {
        break;
    }
}

Explicação:
A estrutura for percorre o vetor sensorReadings até o tamanho do vetor tamanhoVetor.
Se algum valor de sensorReadings[i] for igual a 150, o break interrompe o loop.
Objetivo: O código interrompe a leitura do vetor sensorReadings assim que encontrar o valor 150.

// 8) Função do código sizeof(sensorData) / sizeof(sensorData[0])
Explicação:

sizeof(sensorData): Retorna o tamanho total do vetor sensorData em bytes.
sizeof(sensorData[0]): Retorna o tamanho de um único elemento do vetor sensorData (em bytes).
sizeof(sensorData) / sizeof(sensorData[0]): Divide o tamanho total do vetor pelo tamanho de um
único elemento, resultando no número de elementos do vetor.

Exemplo: Se o vetor for definido como:

int sensorData[10];

Então, sizeof(sensorData) retornaria o total de bytes ocupados por 10 inteiros e ]
sizeof(sensorData[0]) retornaria o tamanho de um inteiro. Dividindo os dois valores,
você obtém o número de elementos no vetor (neste caso, 10).

//
