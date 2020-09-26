#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 1

// What is our data pin?
#define DATA_PIN 6

// Define the array of leds
CRGB leds[NUM_LEDS];


void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
   // Turn the LED on, then pause
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);

}
