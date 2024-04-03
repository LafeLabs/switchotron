

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

  if (Serial.available()) {

    //for more info on this code see http://adam-meyer.com/arduino/arduino-serial
    //read serial as ascii integer
     int ser = Serial.read();
    //    Serial.println(ser);
     if(ser == 49){    //ASCII for 1
      mode = 1;
     }
     if(ser == 50){    //ASCII for 2
      mode = 2;
     }
     if(ser == 51){    //ASCII for 3
      mode = 3;
     }
     if(ser == 52){    //ASCII for 4
      mode = 4;
     }
     if(ser == 53){    //ASCII for 5
      mode = 5;
     }
     if(ser == 54){    //ASCII for 6
      mode = 6;
     }
     if(ser == 55){    //ASCII for 4
      mode = 7;
     }
     if(ser == 56){    //ASCII for 5
      mode = 8;
     }
     if(ser == 57){    //ASCII for 6
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
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);

    
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
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);

 
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
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);

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
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);

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
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);

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
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);

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
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);

 
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
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);

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
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);

  
  }

  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(1); // Pause before next pass through loop

//    Serial.println(analog);

}
