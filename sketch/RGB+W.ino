#define PIN1 3 // W
#define PIN2 5 // B
#define PIN3 6 // R
#define PIN4 9 // G
#define DELATE 10
#define LIGHT 25

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial){}
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  Serial.print("START_RGB");
}

void loop() {
  // put your main code here, to run repeatedly:
  char serial_in = '\0';
  bool info = false;
  if (Serial.available() > 0){
      serial_in = Serial.read();
      if (serial_in == 'W'){
        while(true){
          if (Serial.available() > 0){
              int num_serial = 0;
              static int start = 0;
              num_serial = Serial.read() - 65;
              if (num_serial >= 0 && num_serial <= 25){
                num_serial *= 10;
                if (num_serial < start){
                for (int i = start; i != num_serial;  i--){
                  start = i;
                  analogWrite(PIN1, i);
                  delay(DELATE);
                }
              }
              else{
                for (int i = start; i < num_serial; i++){
                start = i;
                analogWrite(PIN1, i);
                delay(DELATE);
                }
              }
            } 
            else if (num_serial == -1){
              break;
            }
            if (num_serial == 0){
               analogWrite(PIN1, LOW);
               start = LOW;
            }
          }
        }
        if (info){
           Serial.print("W");
        }
      }
      else if (serial_in == 'R'){
        while(true){
          if (Serial.available() > 0){
              int num_serial = 0;
              static int start = 0;
              num_serial = Serial.read() - 65;
              if (num_serial >= 0 && num_serial <= 25){
                num_serial *= 10;
                if (num_serial < start){
                for (int i = start; i != num_serial;  i--){
                  start = i;
                  analogWrite(PIN3, i);
                  delay(DELATE);
                }
              }
              else{
                for (int i = start; i < num_serial; i++){
                start = i;
                analogWrite(PIN3, i);
                delay(DELATE);
                }
              }
            } 
            else if (num_serial == -1){
              break;
            }
            if (num_serial == 0){
               analogWrite(PIN3, LOW);
               start = LOW;
            }
          }
        }
        if (info){
           Serial.print("R");
        }
      }
      else if (serial_in == 'G'){
        while(true){
          if (Serial.available() > 0){
              int num_serial = 0;
              static int start = 0;
              num_serial = Serial.read() - 65;
              if (num_serial >= 0 && num_serial <= 25){
                num_serial *= 10;
                if (num_serial < start){
                for (int i = start; i != num_serial;  i--){
                  start = i;
                  analogWrite(PIN4, i);
                  delay(DELATE);
                }
              }
              else{
                for (int i = start; i < num_serial; i++){
                start = i;
                analogWrite(PIN4, i);
                delay(DELATE);
                }
              }
            } 
            else if (num_serial == -1){
              break;
            }
            if (num_serial == 0){
               analogWrite(PIN4, LOW);
               start = LOW;
            }
          }
        }
        if (info){
           Serial.print("G");
        }
      }
      else if (serial_in == 'B'){
        while(true){
          if (Serial.available() > 0){
              int num_serial = 0;
              static int start = 0;
              num_serial = Serial.read() - 65;
              if (num_serial >= 0 && num_serial <= 25){
                num_serial *= 10;
                if (num_serial < start){
                for (int i = start; i != num_serial;  i--){
                  start = i;
                  analogWrite(PIN2, i);
                  delay(DELATE);
                }
              }
              else{
                for (int i = start; i < num_serial; i++){
                start = i;
                analogWrite(PIN2, i);
                delay(DELATE);
                }
              }
            } 
            else if (num_serial == -1){
              break;
            }
            if (num_serial == 0){
               analogWrite(PIN2, LOW);
               start = LOW;
            }
          }
        }
        if (info){
           Serial.print("B");
        }
      }
      else if (serial_in == 'X'){
        info = true;
      }
       else if (serial_in == 'Y'){
        info = false;
      }
   }
}
