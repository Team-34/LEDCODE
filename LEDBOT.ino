#include <FastLED.h>

#define DATA_PIN 3
#define NUM_LEDS 144
#define LED_TYPE WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

#define BRIGHTNESS          80
#define FRAMES_PER_SECOND  120

//void pong(){
//  for(int i = 0; i < NUM_LEDS/2; i++) { //9948
//    leds[i] = CRGB::Red;
//    FastLED.show(); 
//  }
//  
//  delay(10);
//  for(int i = NUM_LEDS-(NUM_LEDS/2); i < NUM_LEDS; i++) { //9948
//    leds[i] = CRGB::White;
//    FastLED.show(); 
//  }
//  delay(3000);
//
//  for(int i = 0 < NUM_LEDS/2; i < NUM_LEDS; i--){
//    leds[i] = CRGB::White;
//    FastLED.show();
//  }
//     
//  for(int i < NUM_LEDS - (NUM_LEDS/2); i < NUM_LEDS; i--){
//    leds[i] = CRGB::Red;
//    FastLED.show();
//  }
//}

void meet(){
  while(true){
    leds[iter] = CRGB::Red;
    leds[NUM_LEDS-iter] = CRGB::Blue;
    FastLED.show();
    if (iter == middle){
      break;
    }
    delay(10);
    iter++;
  }
}
void bounceMeet(){
  int middle = NUM_LEDS/2;
//  for(int i = NUM_LEDS; i > middle; i--){
//    leds[i] = CRGB::Blue;
//    FastLED.show();
//    delay(10);
//  }
//  for(int i = 0; i < middle; i++){
//    leds[i] = CRGB::Red;
//    FastLED.show();
//    delay(10);
//  }

  int iter = 0;

  while(true){
    leds[iter] = 
  }
}

void setup() {
  delay(3000); // 3 second delay for recovery
  
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);

  bounceMeet();
  
}


void loop() {


}
