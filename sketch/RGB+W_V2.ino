#define PIN1 3 // W
#define PIN2 5 // B
#define PIN3 6 // R
#define PIN4 9 // G

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.setTimeout(5);
  while (!Serial){}
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  Serial.print("START_RGB");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    const char ch = Serial.read();
    const int in_serial = Serial.parseInt();
    if (ch == 'W'){
      analogWrite(PIN1, in_serial);
    }
    else if (ch == 'R'){
      analogWrite(PIN3, in_serial);
    }
    else if (ch == 'G'){
      analogWrite(PIN4, in_serial);
    }
    else if (ch == 'B'){
      analogWrite(PIN2, in_serial);
    }
  }
}
