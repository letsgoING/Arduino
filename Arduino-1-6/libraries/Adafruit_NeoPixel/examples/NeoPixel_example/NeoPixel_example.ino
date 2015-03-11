#include <Adafruit_NeoPixel.h>

#define PIN 6
#define PIXEL 4

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

uint32_t white, red, green, blue;
int numPixel;

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

  white = strip.Color(255, 255, 255);
  red   = strip.Color(255, 0, 0); // Red
  green = strip.Color(0, 255, 0); // Green
  blue   = strip.Color(0, 0, 255); // Blue

  numPixel = strip.numPixels();
}

void loop() {

  for( int i = 0; i < numPixel; i++){
    strip.setPixelColor(i, 255, 255, 255);   // set color direct by rgb value
    strip.show();
    delay(500);
  }

  for( int i = 0; i < numPixel; i++){
    strip.setPixelColor(i, red);   // get color by strip.Color(r, g, b);
    strip.show();
    delay(500);
  }

  for( int i = 0; i < numPixel; i++){
    strip.setPixelColor(i, green);   // get color by strip.Color(r, g, b);
    strip.show();
    delay(500);
  }
  for( int i = 0; i < numPixel; i++){
    strip.setPixelColor(i, blue);   // get color by strip.Color(r, g, b);
    strip.show();
    delay(500);
  }
  for( int i = 255; i > 0; i--){
    strip.setBrightness(i);     //min 0-255 max
    strip.show();
    delay(10);
  }

  strip.setBrightness(255);     //min 0-255 max
  strip.show();
  delay(500);

}





