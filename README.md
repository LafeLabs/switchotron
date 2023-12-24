# switchotron

This is a modular system of Arduino-based switch controllers for metrology.

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/panels/cardboard-photo.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/panels/square-front-1.svg)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-arduino-uno-shield/eagle-screenshot.png)


### EAGLE FILES

 - [switchotron-arduino-uno-shield-v1.brd](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-arduino-uno-shield/switchotron-arduino-uno-shield-v1.brd)
 - [switchotron-arduino-uno-shield-v1.sch](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-arduino-uno-shield/switchotron-arduino-uno-shield-v1.sch)

### GERBER FILES

 - [switchotron-arduino-uno-shield-v1-gerbers.zip](https://github.com/LafeLabs/switchotron/raw/main/switchotron-arduino-uno-shield/switchotron-arduino-uno-shield-v1-gerbers.zip)

### PART LINKS

 - [Audio Jack part link on Digikey](https://www.digikey.com/en/products/detail/cui-devices/MJ-3536N/281264)
 - [10 uF SMT capacitor in 0603 package link on Digikey](https://www.digikey.com/en/products/detail/samsung-electro-mechanics/CL10A106MP8NNNC/3887529)
 - [1000 uF electrolytic capacitor link on Digikey](https://www.digikey.com/en/products/detail/rubycon/35PX1000MEFC10X20/3563769)
 - [300 Ohm SMT resistor in 0603 package link on Digikey](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/RMCF0603FT300R/1760765)
 - [1 megaohm SMT resistor in 0603 package link on digikey](https://www.digikey.com/en/products/detail/panasonic-electronic-components/ERJ-3EKF1004V/196033)
 - [10 kiloohm potentiometer Digikey link](https://www.digikey.com/en/products/detail/bourns-inc/PTV09A-4225F-B103/3781155)
 - [Switch link on digikey](https://www.digikey.com/en/products/detail/nkk-switches/B13AP/379100)
 - [rainbow colored Male 0.1" header pin kit from Digikey/Adafruit](https://www.digikey.com/en/products/detail/adafruit-industries-llc/4154/10123805)
 - [SAMTEC IDSS-05-D-03.00 5 pin cable](https://www.samtec.com/products/idss-05-d-03.00)
 - [SAMTEC IDSS-10-D-03.00 10 pin cable](https://www.samtec.com/products/idss-10-d-03.00)
 - [SAMTEC datasheet](https://www.mouser.com/datasheet/2/527/idmd-2508302.pdf)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/eagle-screenshot.png)

### EAGLE FILES

 - []()


![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-relayboard/eagle-screenshot.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/arduino-board-mechanical-drawing.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/arduino-uno-photo-holes.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/uno-hole-dimensions.svg)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/hexnuts.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/screw.png)


 - [4-40 brass hex nuts](https://www.mcmaster.com/92671A005/)
 - [4-40 3/8" long brass pan head Phillips screws](https://www.mcmaster.com/94070A108/)


```


#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
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
```
