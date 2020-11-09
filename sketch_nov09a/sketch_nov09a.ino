const int MAX = 8;
const int MIN = 2;
const boolean numeros[10][7] = {
{1,1,1,0,1,1,1},  // 0
{0,0,1,0,0,0,1},  // 1
{1,1,0,1,0,1,1},  // 2
{0,1,1,1,0,1,1},  // 3
{0,0,1,1,1,0,1},  // 4
{0,1,1,1,1,1,0},  // 5
{1,1,1,1,1,1,0},  // 6
{0,0,1,0,0,1,1},  // 7
{1,1,1,1,1,1,1},  // 8
{0,1,1,1,1,1,1}   // 9
};

void setup() {
  for (int i = MIN; i <= MAX; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void enciende(int numero) {
  for (int j = 2; j < 9; j++) {
    digitalWrite(j, numeros[numero][j-2] ? HIGH : LOW);
  }
}

int i = 0;

void loop() {
  delay(1000);
  i = i % 10;
  enciende(i);
  i++;
}

