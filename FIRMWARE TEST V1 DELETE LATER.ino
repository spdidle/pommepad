#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel leds(8,3, NEO_GRB + NEOKHZ800);

int rows[]={26,27}
int cols[] = {29,28,4}
void setup() {

Serial.begin(115200)
leds.begin();
leds.setBrightness(30);
for (int i = 0; i<8, i++){
  leds.setPixelColor(i,leds.Color(255,255,255));
}
leds.show();

pinMode(26, INPUT_PULLUP);
pinMode(27, INPUT_PULLUP);
pinMode(29, OUTPUT);
pinMode(28, OUTPUT;
pinMode(4, OUTPUT);
}

void loop() {
  for (int c=0; c<3, c++){
    digitalWrite(cols[0], HIGH);
    digitalWrite(cols[1], HIGH);
    digitalWrite(cols[2], HIGH);
    digitalWrite(cols[c], LOW);
    delay(1);

  for (int r=0; r<2, r++){
    if (digitalRead(rows[r])==LOW){
      int btn = r*3+c+1;
      Serial.print("SW PRESSED!! :))");
      Serial.println(btn);
      delay(200);
    }
  }
  }

}
