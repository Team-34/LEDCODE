#include <FastLED.h>
#define DATA_PIN   3
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS    144
CRGB leds[NUM_LEDS];
#define BRIGHTNESS          96
#define FRAMES_PER_SECOND  120
CRGB on[] = { CRGB::Red, CRGB::Red, CRGB::Red, CRGB::Red };
CRGB off[] = { CRGB::Black, CRGB::Black, CRGB::Black, CRGB::Black };

void setup() {
FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

 void loop() { 
    for(int i = 0; i < (NUM_LEDS - 3); i++)
    {
      if (i > 0)
          leds[i-1] = CRGB::Black;
          
      if (i == 140)//(NUM_LEDS - 4))
      {
         memcpy( &leds[140], off, sizeof(CRGB) * 4);
         FastLED.show();   
         break;
      }
      else 
      {
        if (i > 0)
           leds[i-1] = CRGB::Black;
           
        memcpy( &leds[i], on, sizeof(CRGB) * 4);
        FastLED.show();       
        delay(30);
      } 
    }
 }
