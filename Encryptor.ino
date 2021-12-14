//char words[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
byte one,two, three, four;

void setup(){
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  one = digitalRead(7);
  two = digitalRead(6);
  three = digitalRead(5);
  four = digitalRead(4);
  if(digitalRead(8) == 0){
    if(two == 1){
      two = 0;
    } else if(two == 0){
      two = 1;
    }

    if(four == 1){
      four = 0;
    } else if(four == 0){
      four = 1;
    }

    Serial.print(one);
    Serial.print(two);
    Serial.print(three);
    Serial.println(four);
    if(one == 1){
      digitalWrite(10, HIGH);
    } else if(one == 0) {
      digitalWrite(10, LOW);
    }

    if(two == 1){
      digitalWrite(11, HIGH);
    } else if(two == 0) {
      digitalWrite(11, LOW);
    }

    if(three == 1){
      digitalWrite(12, HIGH);
    } else if(three == 0) {
      digitalWrite(12, LOW);
    }

    if(four == 1){
      digitalWrite(13, HIGH);
    } else if(four == 0) {
      digitalWrite(13, LOW);
    }
    delay(50);
  }
  delay(50);
}
