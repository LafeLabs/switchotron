# [SWITCHOTRON](https://github.com/lafelabs/switchotron/)

### [localhost](http://localhost/)

The switch as sign, using GEOMETRON.

![qr code pointing to github repository](https://raw.githubusercontent.com/LafeLabs/switchotron/main/qrcode.png)

![a whole page of qr codes to print out](https://raw.githubusercontent.com/LafeLabs/switchotron/main/qrcode-page.png)


This is a modular system of Arduino-based switch controllers for metrology.  The relay board is laid out on a 10 inch by 10 inch square, cut from acrylic or wood on a laser cutter or with a saw and drill.  

![photo of cardboard model of system](https://raw.githubusercontent.com/LafeLabs/switchotron/main/panels/cardboard-photo.png)

![pattern laid out in geometron of main square](https://raw.githubusercontent.com/LafeLabs/switchotron/main/panels/square-front-1.svg)



# UNO SHIELD BOARD

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-arduino-uno-shield/eagle-screenshot.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-arduino-uno-shield/eagle-screenshot-schematic.png)


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


# 3 BUTTONS 3 LIGHTS BOARD

This board turned out to have the WS2811 pad on the first version, which is wrong!  The neopixel boards are all now the WS2812B.  

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/eagle-board-screenshot-v2.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/eagle-schematic-v2.png)

here is the version 1 board showing how the neopixel doesn't fit:

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/photo-old-new-boards.png)

WS2812 layout and pins:

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/WS2812B-datasheet-screenshot.png)

#### EAGLE FILES

 - [switchotron-3buttons-3lights-v2.brd](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/switchotron-3buttons-3lights-v2.brd)
 - [switchotron-3buttons-3lights-v2.sch](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-3buttons-3lights/switchotron-3buttons-3lights-v2.sch)

### GERBER FILES

 - [switchotron-3buttons-3lights-v2-gerbers.zip](https://github.com/LafeLabs/switchotron/raw/main/switchotron-3buttons-3lights/switchotron-3buttons-3lights-v2-gerbers.zip)

###  PARTS LINKS

 - [WS2812B LED NEOPIXELS](https://www.digikey.com/en/products/detail/sparkfun-electronics/COM-16347/11630204)
 - [10 uF Capacitors](https://www.digikey.com/en/products/detail/samsung-electro-mechanics/CL10A106MP8NNNC/3887529)
 - [10 k resistors](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/RMCF0603FT10K0/1761235)
 - [buttons](https://www.digikey.com/en/products/detail/e-switch/TL59AF100Q/1144803)
 - [headers](https://www.digikey.com/en/products/detail/adafruit-industries-llc/4154/10123805)

# RELAY BOARD

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-relayboard/eagle-screenshot.png) 

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-relayboard/eagle-screenshot-schematic.png)

### EAGLE FILES

 - [switchotron-relayboard-v1.brd](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-relayboard/switchotron-relayboard-v1.brd)
 - [switchotron-relayboard-v1.sch](https://raw.githubusercontent.com/LafeLabs/switchotron/main/switchotron-relayboard/switchotron-relayboard-v1.sch)

### GERBER FILES

 - [switchotron-relayboard-v1-gerbers.zip](https://github.com/LafeLabs/switchotron/raw/main/switchotron-3buttons-3lights/switchotron-relayboard-v1-gerbers.zip)

### PARTS LINKS

 - [Audio Jack part link on Digikey](https://www.digikey.com/en/products/detail/cui-devices/MJ-3536N/281264)
 - [headers](https://www.digikey.com/en/products/detail/adafruit-industries-llc/4154/10123805)
 - [relays](https://www.digikey.com/en/products/detail/comus-international/3570-1331-051/7497098)


#### LASER CUTOUTS AND DIMENSIONS

CUT ALL SQUARES OUT 10 INCHES ON A SIDE:

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/laser-cutout-pattern.svg)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/laser-cutout-pattern-circleholes.svg)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/laser-cutout-pattern-roundcorners.svg)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/menorah.svg)

CUT THIS OUT 19X7 INCHES:

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/laser-cut-mems-driver.svg)

ADD OR MODIFY HOLE POSITIONS AS NEEDED FOR BOARD WHICH ADAPTS TO FRIDGE CABLE.  

### ARDUINO BOARD DIMENSIONS AND HOLE LAYOUTS

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/arduino-board-mechanical-drawing.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/uno-hole-dimensions.svg)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/arduino-uno-photo-holes.png)




### FASTENERS FROM MCMASTER CARR

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/hexnuts.png)

![](https://raw.githubusercontent.com/LafeLabs/switchotron/main/mechanicals/screw.png)


 - [4-40 brass hex nuts](https://www.mcmaster.com/92671A005/)
 - [4-40 3/8" long brass pan head Phillips screws](https://www.mcmaster.com/94070A108/)




# ARDUINO CODE TO SWITCH BETWEEN THREE RELAY STATES

BUTTONS ARE 1,2,3 FROM LEFT TO RIGHT, AND ARE RED, GREEN, THEN BLUE LIGHTS.  

```

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        12 // On Trinket or Gemma, suggest changing this to 1

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

    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);

  
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
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(3,HIGH);

  }
  if(mode == 2){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 200, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
 
  }
  if(mode == 3){
    pixels.setPixelColor(0, pixels.Color(0, 0, 200));    
     pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(5,HIGH);

   
  }
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1); // Pause before next pass through loop

    Serial.println(analog);

}
```

## 8 LED array, using 6 pixels and 6 buttons code

```

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        12 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 8 // Popular NeoPixel ring size
//there are 8 neopixels but this code is for 6 used along with 6 buttons

// When setting up the NeoPixel library, we tell it how many pixels,  
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


int analog = 0;
int delta = 100;
int mode = 1;//modes are 1,2,3,4,5, and 6 which are pixel 5,4,3,2,1, and 0 respectively

void setup() {
      Serial.begin(115200);

  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);

    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);

  
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
    if(analog > 1023 - delta){
       mode = 1;      
    }
  }
  if(analog > 781 - delta && analog < 781 + delta){
    delay(5);
    analog = analogRead(A0);
    if(analog > 781 - delta && analog < 781 + delta){
         mode = 2; 
    }
  }
  if(analog > 593 - delta && analog < 593 + delta){
     delay(5);
     analog = analogRead(A0);

    if(analog > 593 - delta && analog < 593 + delta){
      mode = 3;    
    }
  }

  if(analog > 436 - delta && analog < 436 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 436 - delta && analog < 436 + delta){
      mode = 4;    
    }
  }

  if(analog > 296 - delta && analog < 296 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 296 - delta && analog < 296 + delta){
      mode = 5;    
    }
  }

  if(analog > 154 - delta && analog < 154 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 154 - delta && analog < 154 + delta){
      mode = 6;    
    }
  }

  if(mode == 1){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(255, 0, 0));    

    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(3,HIGH);
    
  }
  if(mode == 2){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(255, 165, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(4,HIGH);
 
  }
  if(mode == 3){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(255, 215, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(5,HIGH);   
  }
  if(mode == 4){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 255, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(6,HIGH);   
  }
  if(mode == 5){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 255));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);   
  }
  if(mode == 6){
    pixels.setPixelColor(0, pixels.Color(200, 0, 200));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(8,HIGH);   
  }
  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1); // Pause before next pass through loop

    Serial.println(analog);

}

```

# Synth code with potentiometer

```

/*  Example playing a sinewave at a set frequency,
    using Mozzi sonification library.

DIRT SYNTH IS JUST SINE WAVE WITH FREQUENCY BASED ON AN ANALOG VOLTAGE ON THE CIRCUIT BOARD

    Demonstrates the use of Oscil to play a wavetable.

    Circuit: Audio output on digital pin 9 on a Uno or similar, or
    DAC/A14 on Teensy 3.1, or
    check the README or http://sensorium.github.io/Mozzi/

    Mozzi documentation/API
    https://sensorium.github.io/Mozzi/doc/html/index.html

    Mozzi help/discussion/announcements:
    https://groups.google.com/forum/#!forum/mozzi-users

    Tim Barrass 2012, CC by-nc-sa.
*/

int voltage = 0;
#include <Adafruit_NeoPixel.h>

#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <tables/sin2048_int8.h> // sine table for oscillator

// use: Oscil <table_size, update_rate> oscilName (wavetable), look in .h file of table #included above
Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> aSin(SIN2048_DATA);

// use #define for CONTROL_RATE, not a constant
#define CONTROL_RATE 64 // Hz, powers of 2 are most reliable


void setup(){
  startMozzi(CONTROL_RATE); // :)
  aSin.setFreq(2600); // set the frequency 2600 HZ! HACK THE PLANET!
    pinMode(9,OUTPUT); 

}


void updateControl(){
  // put changing controls in here
}


AudioOutput_t updateAudio(){
  return MonoOutput::from8Bit(aSin.next()); // return an int signal centred around 0
}


void loop(){
  
  voltage = analogRead(A0);
  aSin.setFreq(440 + 3*voltage);  
  audioHook(); // required here
  
}
```

# CODE FOR 9 LINE CONTROLLER: 9 PIXELS, 9 BUTTONS

```


#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        12 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 9 // 
//there are 9

// When setting up the NeoPixel library, we tell it how many pixels,  
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


int analog = 0;
int delta = 20;
int mode = 1;//modes are 1,2,3,4,5,6,7,8,9 which are pixel 8,7,6,5,4,3,2,1, and 0 respectively

void setup() {
      Serial.begin(115200);

  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);

    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);

  
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
    if(analog > 1023 - delta){
       mode = 1;      
    }
  }
  if(analog > 836 - delta && analog < 836 + delta){
    delay(5);
    analog = analogRead(A0);
    if(analog > 836 - delta && analog < 836 + delta){
         mode = 2; 
    }
  }
  if(analog > 690 - delta && analog < 690 + delta){
     delay(5);
     analog = analogRead(A0);

    if(analog > 690 - delta && analog < 690 + delta){
      mode = 3;    
    }
  }

  if(analog > 569 - delta && analog < 569 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 569 - delta && analog < 569 + delta){
      mode = 4;    
    }
  }

  if(analog > 464 - delta && analog < 464 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 464 - delta && analog < 464 + delta){
      mode = 5;    
    }
  }

  if(analog > 372 - delta && analog < 372 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 372 - delta && analog < 372 + delta){
      mode = 6;    
    }
  }

  if(analog > 283 - delta && analog < 283 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 283 - delta && analog < 283 + delta){
      mode = 7;    
    }
  }

  if(analog > 195 - delta && analog < 195 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 195 - delta && analog < 195 + delta){
      mode = 8;    
    }
  }

  if(analog > 103 - delta && analog < 103 + delta){
     delay(1);
     analog = analogRead(A0);

    if(analog > 103 - delta && analog < 103 + delta){
      mode = 9;    
    }
  }


  if(mode == 1){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(255, 0, 0));    
 
    
  }
  if(mode == 2){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

 
  }
  if(mode == 3){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

  }
  if(mode == 4){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

  }
  if(mode == 5){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

  }
  if(mode == 6){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

  }

  if(mode == 7){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

 
 }
  if(mode == 8){
    pixels.setPixelColor(0, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

  }
  if(mode == 9){
    pixels.setPixelColor(0, pixels.Color(255, 0, 0));    
    pixels.setPixelColor(1, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(2, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(3, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(4, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(5, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(6, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(7, pixels.Color(0, 0, 0));    
    pixels.setPixelColor(8, pixels.Color(0, 0, 0));    

  
  }

  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1); // Pause before next pass through loop

    Serial.println(analog);

}
```
