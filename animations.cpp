//  kaimana.cpp
//
//  Copyright 2013 Paradise Arcade Shop, ParadiseArcadeShop.com
//  All rights reserved.  Use is subject to license terms.
//
//  Code is provided for entertainment purposes and use with the Kaimana controller.
//  Code may be copied, modified, resused with this Copyright notice.
//  No commercial use without written permission from Paradise Arcade Shop.
//
//  Paradise Arcade Shop Kaimana LED Driver Board
//  Initial Release October 15, 2013
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  Kaimana animations based on original source released by ParadiseArcadeShop.com October 15, 2013
//
//  Created:  October 24, 2013    zonbipanda // gmail.com  -- Arduino 1.0.5 Support
//  Revised:  October 29, 2013    zonbipanda // gmail.com
//  Revised:  April   11, 2015    zonbipanda // gmail.com  -- Arduino 1.6.3 Support
//

#define __PROG_TYPES_COMPAT__
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "Arduino.h"
#include "kaimana.h"
#include "kaimana_custom.h"
#include "animations.h"
#include "math.h"




// Color Fade Animation when Idle
//
int animation_idle(void)
{

 int i;
 // set initial color to BLACK
  kaimana.setALL(BLACK);

while (true){
 for (i = 0; i < 1; i++){       
  
 kaimana.setLED( LED_UP, WHITE,1 );
 kaimana.setLED( LED_UP_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_UP, BLACK,1 );
 kaimana.setLED( LED_UP_B, BLACK,1 );
   delay(59);
  kaimana.updateALL();

 kaimana.setLED( LED_LEFT, WHITE,1 );
 kaimana.setLED( LED_LEFT_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, BLACK,1 );
 kaimana.setLED( LED_LEFT_B, BLACK,1 );
 delay(59);
  kaimana.updateALL();
   
 kaimana.setLED( LED_DOWN, WHITE,1 );
 kaimana.setLED( LED_DOWN_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_DOWN, BLACK,1 );
 kaimana.setLED( LED_DOWN_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, WHITE,1 );
 kaimana.setLED( LED_RIGHT_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, BLACK,1 );
 kaimana.setLED( LED_RIGHT_B, BLACK,1 );
   delay(59);  
 kaimana.setLED( LED_K1, WHITE,1 );
 kaimana.setLED( LED_K1_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
  kaimana.setLED( LED_K1, BLACK,1 );
 kaimana.setLED( LED_K1_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, WHITE, 1 );
 kaimana.setLED( LED_K2_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K2, BLACK, 1 );
 kaimana.setLED( LED_K2_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K3,WHITE , 1 );
 kaimana.setLED( LED_K3_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K3, BLACK, 1 );
 kaimana.setLED( LED_K3_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, WHITE, 1 );
 kaimana.setLED( LED_K4_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K4, BLACK, 1 );
 kaimana.setLED( LED_K4_B, BLACK, 1 );
   delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, WHITE, 1 );
 kaimana.setLED( LED_P4_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, BLACK, 1 );
 kaimana.setLED( LED_P4_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, WHITE, 1 );
 kaimana.setLED( LED_P3_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P3, BLACK, 1 );
 kaimana.setLED( LED_P3_B, BLACK, 1 );
  delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, WHITE, 1 );
 kaimana.setLED( LED_P2_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
  kaimana.setLED( LED_P2, BLACK, 1 );
 kaimana.setLED( LED_P2_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, WHITE, 1 );
 kaimana.setLED( LED_P1_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P1, BLACK, 1 );
 kaimana.setLED( LED_P1_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();

 kaimana.setLED( LED_UP, WHITE,1 );
 kaimana.setLED( LED_UP_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_UP, BLACK,1 );
 kaimana.setLED( LED_UP_B, BLACK,1 );
   delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, WHITE,1 );
 kaimana.setLED( LED_LEFT_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, BLACK,1 );
 kaimana.setLED( LED_LEFT_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_DOWN, WHITE,1 );
 kaimana.setLED( LED_DOWN_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_DOWN, BLACK,1 );
 kaimana.setLED( LED_DOWN_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, WHITE,1 );
 kaimana.setLED( LED_RIGHT_B, WHITE,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, BLACK,1 );
 kaimana.setLED( LED_RIGHT_B, BLACK,1 );
   delay(59);   
   kaimana.updateALL();
 kaimana.setLED( LED_K1, WHITE, 1 );
 kaimana.setLED( LED_K1_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K1, BLACK,1 );
 kaimana.setLED( LED_K1_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, WHITE, 1 );
 kaimana.setLED( LED_K2_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K2, BLACK,1 );
 kaimana.setLED( LED_K2_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, WHITE, 1 );
 kaimana.setLED( LED_K3_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K3, BLACK,1 );
 kaimana.setLED( LED_K3_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, WHITE, 1 );
 kaimana.setLED( LED_K4_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K4, BLACK,1 );
 kaimana.setLED( LED_K4_B, BLACK,1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P4, WHITE, 1 );
 kaimana.setLED( LED_P4_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, BLACK, 1 );
 kaimana.setLED( LED_P4_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, WHITE, 1 );
 kaimana.setLED( LED_P3_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P3, BLACK, 1 );
 kaimana.setLED( LED_P3_B, BLACK, 1 );
   delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P2, WHITE, 1 );
 kaimana.setLED( LED_P2_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P2, BLACK, 1 );
 kaimana.setLED( LED_P2_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, WHITE, 1 );
 kaimana.setLED( LED_P1_B, WHITE, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P1, BLACK, 1 );
 kaimana.setLED( LED_P1_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();

/*
 kaimana.setLED( LED_UP, YELLOW,1 );
 kaimana.setLED( LED_UP_B, YELLOW,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_UP, BLACK, 1 );
 kaimana.setLED( LED_UP_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_LEFT, YELLOW,1 );
 kaimana.setLED( LED_LEFT_B, YELLOW,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, BLACK, 1 );
 kaimana.setLED( LED_LEFT_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_DOWN, YELLOW,1 );
 kaimana.setLED( LED_DOWN_B, YELLOW,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_DOWN, BLACK, 1 );
 kaimana.setLED( LED_DOWN_B, BLACK, 1 );
  delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_RIGHT,YELLOW,1 );
 kaimana.setLED( LED_RIGHT_B, YELLOW,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, BLACK, 1 );
 kaimana.setLED( LED_RIGHT_B, BLACK, 1 );
   delay(59);    
   kaimana.updateALL();
 kaimana.setLED( LED_K1,YELLOW, 1 );
 kaimana.setLED( LED_K1_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K1, BLACK, 1 );
 kaimana.setLED( LED_K1_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, YELLOW, 1 );
 kaimana.setLED( LED_K2_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K2, BLACK, 1 );
 kaimana.setLED( LED_K2_B, BLACK, 1 );
  delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, YELLOW, 1 );
 kaimana.setLED( LED_K3_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
  kaimana.setLED( LED_K3, BLACK, 1 );
 kaimana.setLED( LED_K3_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, YELLOW, 1 );
 kaimana.setLED( LED_K4_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_K4, BLACK, 1 );
 kaimana.setLED( LED_K4_B, BLACK, 1 );
   delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P4,YELLOW, 1 );
 kaimana.setLED( LED_P4_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, BLACK, 1 );
 kaimana.setLED( LED_P4_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, YELLOW, 1 );
 kaimana.setLED( LED_P3_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P3, BLACK, 1 );
 kaimana.setLED( LED_P3_B, BLACK, 1 );;
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, YELLOW, 1 );
 kaimana.setLED( LED_P2_B,YELLOW,1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P2, BLACK, 1 );
 kaimana.setLED( LED_P2_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
 kaimana.setLED( LED_P1,YELLOW, 1 );
 kaimana.setLED( LED_P1_B, YELLOW, 1 );
 delay(59);
  kaimana.updateALL();
 kaimana.setLED( LED_P1, BLACK, 1 );
 kaimana.setLED( LED_P1_B, BLACK, 1 );
   delay(59);
   kaimana.updateALL();
*/
  
 i=i-1;

          if(!digitalRead(PIN_P1)){
          kaimana.setALL(BLACK);
          return(false);
         }; 
         

};
         delay( IDLE_ANIMATION_DELAY );
 };
};

// Hadouken (Fireball)
//
void animation_combo_1(void)
{
  kaimana.setALL(BLACK);

  kaimana.setLED(LED_LEFT,YELLOW, 1);
  kaimana.setLED(LED_LEFT_B, YELLOW, 1);
  

  kaimana.setLED(LED_P3,YELLOW,1);
  kaimana.setLED(LED_P3_B,YELLOW,1);

  kaimana.setLED(LED_K3,YELLOW,1);
  kaimana.setLED(LED_K3_B,YELLOW,1);
  delay(100);
  kaimana.updateALL();

  kaimana.setLED(LED_DOWN, WHITE, 1);
  kaimana.setLED(LED_DOWN_B, WHITE, 1);

  kaimana.setLED(LED_P2, WHITE, 1);
  kaimana.setLED(LED_P2_B, WHITE, 1);

  kaimana.setLED(LED_K2, WHITE, 1);
  kaimana.setLED(LED_K2_B, WHITE, 1);
  delay(100);
  kaimana.updateALL();

  kaimana.setLED(LED_RIGHT, YELLOW, 1);
  kaimana.setLED(LED_RIGHT_B, YELLOW, 1);

  kaimana.setLED(LED_P1, YELLOW, 1);
  kaimana.setLED(LED_P1_B, YELLOW, 1);
  delay(100);
  kaimana.updateALL();

  kaimana.setLED(LED_K1, WHITE, 1);
  kaimana.setLED(LED_K1_B, WHITE, 1);
  delay(100);
  kaimana.updateALL();

  kaimana.setLED(LED_UP, YELLOW, 1);
  kaimana.setLED(LED_UP_B, YELLOW, 1);
  delay(100);
  kaimana.updateALL();
  
  
  kaimana.setALL( BLACK );
}


// Shoryuken (Dragon Punch)
//
void animation_combo_2(void)
{
  kaimana.setALL(BLACK);

  kaimana.setALL(RED);
  delay(500);

  kaimana.setALL(BLACK);
}


// Tatsumaki Senpukyaku (Hurricane Kick)
//
void animation_combo_3(void)
{

 kaimana.setALL(BLACK);

 kaimana.setLED( LED_K1, RED,1 );
 kaimana.setLED( LED_K1_B, RED,1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, RED, 1 );
 kaimana.setLED( LED_K2_B, RED,1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, RED, 1 );
 kaimana.setLED( LED_K3_B, RED, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, RED, 1 );
 kaimana.setLED( LED_K4_B, RED, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P4, RED, 1 );
 kaimana.setLED( LED_P4_B, RED, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, RED, 1 );
 kaimana.setLED( LED_P3_B, RED, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, RED, 1 );
 kaimana.setLED( LED_P2_B, RED, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, RED, 1 );
 kaimana.setLED( LED_P1_B, RED, 1 );
   delay(25);
   kaimana.updateALL();


 kaimana.setLED( LED_K1, GREEN, 1 );
 kaimana.setLED( LED_K1_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, GREEN, 1 );
 kaimana.setLED( LED_K2_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, GREEN, 1 );
 kaimana.setLED( LED_K3_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, GREEN, 1 );
 kaimana.setLED( LED_K4_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P4, GREEN, 1 );
 kaimana.setLED( LED_P4_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, GREEN, 1 );
 kaimana.setLED( LED_P3_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, GREEN, 1 );
 kaimana.setLED( LED_P2_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, GREEN, 1 );
 kaimana.setLED( LED_P1_B, GREEN, 1 );
   delay(25);
   kaimana.updateALL();


 kaimana.setLED( LED_K1, BLUE, 1 );
 kaimana.setLED( LED_K1_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, BLUE, 1 );
 kaimana.setLED( LED_K2_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, BLUE, 1 );
 kaimana.setLED( LED_K3_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, BLUE, 1 );
 kaimana.setLED( LED_K4_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P4, BLUE, 1 );
 kaimana.setLED( LED_P4_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, BLUE, 1 );
 kaimana.setLED( LED_P3_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, BLUE, 1 );
 kaimana.setLED( LED_P2_B, BLUE,1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, BLUE, 1 );
 kaimana.setLED( LED_P1_B, BLUE, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K1, BLACK, 1 );
 kaimana.setLED( LED_K1_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, BLACK, 1 );
 kaimana.setLED( LED_K2_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, BLACK, 1 );
 kaimana.setLED( LED_K3_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, BLACK, 1 );
 kaimana.setLED( LED_K4_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P4, BLACK, 1 );
 kaimana.setLED( LED_P4_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, BLACK,1  );
 kaimana.setLED( LED_P3_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, BLACK,1 );
 kaimana.setLED( LED_P2_B, BLACK,1 );
   delay(25);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, BLACK, 1 );
 kaimana.setLED( LED_P1_B, BLACK, 1 );
   delay(25);
   kaimana.updateALL();

}


// Super (Shinkuu Hadouken)
//
void animation_combo_4(void)
{
  kaimana.setALL(BLACK);

  kaimana.setALL(BLUE);
  delay(500);

  kaimana.setALL(BLACK);
}


// Ultra 1 (Metsu Hadouken)
//
void animation_combo_5(void)
{
  kaimana.setLED( LED_UP, WHITE,1 );
 kaimana.setLED( LED_UP_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_UP, BLACK,1 );
 kaimana.setLED( LED_UP_B, BLACK,1 );
   delay(20);
  kaimana.updateALL();

 kaimana.setLED( LED_LEFT, WHITE,1 );
 kaimana.setLED( LED_LEFT_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, BLACK,1 );
 kaimana.setLED( LED_LEFT_B, BLACK,1 );
 delay(20);
  kaimana.updateALL();
   
 kaimana.setLED( LED_DOWN, WHITE,1 );
 kaimana.setLED( LED_DOWN_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_DOWN, BLACK,1 );
 kaimana.setLED( LED_DOWN_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, WHITE,1 );
 kaimana.setLED( LED_RIGHT_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, BLACK,1 );
 kaimana.setLED( LED_RIGHT_B, BLACK,1 );
   delay(20);  
 kaimana.setLED( LED_K1, WHITE,1 );
 kaimana.setLED( LED_K1_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
  kaimana.setLED( LED_K1, BLACK,1 );
 kaimana.setLED( LED_K1_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, WHITE, 1 );
 kaimana.setLED( LED_K2_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K2, BLACK, 1 );
 kaimana.setLED( LED_K2_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_K3,WHITE , 1 );
 kaimana.setLED( LED_K3_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K3, BLACK, 1 );
 kaimana.setLED( LED_K3_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, WHITE, 1 );
 kaimana.setLED( LED_K4_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K4, BLACK, 1 );
 kaimana.setLED( LED_K4_B, BLACK, 1 );
   delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, WHITE, 1 );
 kaimana.setLED( LED_P4_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, BLACK, 1 );
 kaimana.setLED( LED_P4_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, WHITE, 1 );
 kaimana.setLED( LED_P3_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P3, BLACK, 1 );
 kaimana.setLED( LED_P3_B, BLACK, 1 );
  delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_P2, WHITE, 1 );
 kaimana.setLED( LED_P2_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
  kaimana.setLED( LED_P2, BLACK, 1 );
 kaimana.setLED( LED_P2_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, WHITE, 1 );
 kaimana.setLED( LED_P1_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P1, BLACK, 1 );
 kaimana.setLED( LED_P1_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();

 kaimana.setLED( LED_UP, WHITE,1 );
 kaimana.setLED( LED_UP_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_UP, BLACK,1 );
 kaimana.setLED( LED_UP_B, BLACK,1 );
   delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, WHITE,1 );
 kaimana.setLED( LED_LEFT_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_LEFT, BLACK,1 );
 kaimana.setLED( LED_LEFT_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_DOWN, WHITE,1 );
 kaimana.setLED( LED_DOWN_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_DOWN, BLACK,1 );
 kaimana.setLED( LED_DOWN_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, WHITE,1 );
 kaimana.setLED( LED_RIGHT_B, WHITE,1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_RIGHT, BLACK,1 );
 kaimana.setLED( LED_RIGHT_B, BLACK,1 );
   delay(20);   
   kaimana.updateALL();
 kaimana.setLED( LED_K1, WHITE, 1 );
 kaimana.setLED( LED_K1_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K1, BLACK,1 );
 kaimana.setLED( LED_K1_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_K2, WHITE, 1 );
 kaimana.setLED( LED_K2_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K2, BLACK,1 );
 kaimana.setLED( LED_K2_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_K3, WHITE, 1 );
 kaimana.setLED( LED_K3_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K3, BLACK,1 );
 kaimana.setLED( LED_K3_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_K4, WHITE, 1 );
 kaimana.setLED( LED_K4_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_K4, BLACK,1 );
 kaimana.setLED( LED_K4_B, BLACK,1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_P4, WHITE, 1 );
 kaimana.setLED( LED_P4_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P4, BLACK, 1 );
 kaimana.setLED( LED_P4_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_P3, WHITE, 1 );
 kaimana.setLED( LED_P3_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P3, BLACK, 1 );
 kaimana.setLED( LED_P3_B, BLACK, 1 );
   delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P2, WHITE, 1 );
 kaimana.setLED( LED_P2_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P2, BLACK, 1 );
 kaimana.setLED( LED_P2_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();
 kaimana.setLED( LED_P1, WHITE, 1 );
 kaimana.setLED( LED_P1_B, WHITE, 1 );
 delay(20);
  kaimana.updateALL();
 kaimana.setLED( LED_P1, BLACK, 1 );
 kaimana.setLED( LED_P1_B, BLACK, 1 );
   delay(20);
   kaimana.updateALL();

kaimana.setALL(BLACK);

  kaimana.setALL(RED);
  delay(120);

  kaimana.setALL(BLACK);
  delay(120);

  kaimana.setALL(RED);
  delay(110);

  kaimana.setALL(BLACK);
  delay(110);

  kaimana.setALL(WHITE);
  delay(100);

  kaimana.setALL(BLACK);
  delay(100);


  kaimana.setALL(WHITE);
  delay(80);

  kaimana.setALL(BLACK);
  delay(80);

  kaimana.setALL(RED);
  delay(70);

  kaimana.setALL(BLACK);
  delay(70);

  kaimana.setALL(WHITE);
  delay(60);

  kaimana.setALL(BLACK);
  delay(60);

  kaimana.setALL(WHITE);
  delay(40);

  kaimana.setALL(BLACK);
  delay(40);

  kaimana.setALL(WHITE);
  delay(20);

  kaimana.setALL(BLACK);
  delay(20);

  kaimana.setALL(WHITE);
  delay(10);

  kaimana.setALL(BLACK);
  delay(10);

  kaimana.setALL(WHITE);
  delay(5);

  kaimana.setALL(BLACK);
  delay(5);

  kaimana.setALL(BLACK);
   
}


// Ultra 2 (Metsu Shoryuken)
//
void animation_combo_6(void)
{
  kaimana.setALL(BLACK);

  kaimana.setALL(RED);
  delay(120);

  kaimana.setALL(BLACK);
  delay(120);

  kaimana.setALL(RED);
  delay(110);

  kaimana.setALL(BLACK);
  delay(110);

  kaimana.setALL(WHITE);
  delay(100);

  kaimana.setALL(BLACK);
  delay(100);


  kaimana.setALL(WHITE);
  delay(80);

  kaimana.setALL(BLACK);
  delay(80);

  kaimana.setALL(RED);
  delay(70);

  kaimana.setALL(BLACK);
  delay(70);

  kaimana.setALL(WHITE);
  delay(60);

  kaimana.setALL(BLACK);
  delay(60);

  kaimana.setALL(WHITE);
  delay(40);

  kaimana.setALL(BLACK);
  delay(40);

  kaimana.setALL(WHITE);
  delay(20);

  kaimana.setALL(BLACK);
  delay(20);

  kaimana.setALL(WHITE);
  delay(10);

  kaimana.setALL(BLACK);
  delay(10);

  kaimana.setALL(WHITE);
  delay(5);

  kaimana.setALL(BLACK);
  delay(5);

  kaimana.setALL(BLACK);
};
