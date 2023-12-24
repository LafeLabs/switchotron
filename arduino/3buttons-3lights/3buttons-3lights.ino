// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        6 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 3 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

int analog = 0;
int delta = 100;
int mode = 1;//modes are 1,2, and 3, which are pixel 2,1, and 0 respectively

void setup() {
      Serial.begin(115200);

  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
  pixels.clear(); // Set all pixel colors to 'off'
  analog = analogRead(A0);
  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  
  if(analog > 1024 - delta){
    delay(1);
    analog = analogRead(A0);
    if(analog > 1024 - delta){
       mode = 1;      
    }
  }
  if(analog > (2*1024/3) - delta && analog < (2*1024/3) + delta){
    delay(1);
    analog = analogRead(A0);
    if(analog > (2*1024/3) - delta && analog < (2*1024/3) + delta){
         mode = 2; 
    }
  }
  if(analog > (1*1024/3) - delta && analog < (1*1024/3) + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > (1*1024/3) - delta && analog < (1*1024/3) + delta){
      mode = 3;
    
  }

  }
  if(mode == 1){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(200, 0, 0));    
  }
  if(mode == 2){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 200, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
  }
  if(mode == 3){
    pixels.setPixelColor(0, pixels.Color(0, 0, 200));    
     pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
   
  }
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1); // Pause before next pass through loop

    Serial.println(analog);

}
