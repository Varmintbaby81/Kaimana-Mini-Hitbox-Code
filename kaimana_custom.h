//  kaimana_custom.h Generated from jasensCustoms.com Kaimana Khameleon Code Generator
//  KK Code Generator: http://brightstick.freecade.org
//  Code is provided for entertainment purposes and use with the Kaimana Khameleon and Panzer Fight Stick 2.
//  Code may be copied, modified, resused with this Copyright notice.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  Based on code originally released by ParadiseArcadeShop.com
//  Generator Created:  November 4, 2015    jasenhicks // jasenscustoms.com -- Cavalier Mannitude Encouragement
//
// THIS FILE GENERATED ON: Sunday 19th of August 2018 02:32:12 AM



#define __kaimana_local_h__
#define __PROG_TYPES_COMPAT__
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "Arduino.h"
#include "kaimana.h"


//ON BUTTON STATE          // Change the colors of the button when pressed. You can use RGB code. Look it up on Google.com and use like 255,123,205 or whatever the code is for the color you want.
#define LED_LEFT_COLOR_ON GREEN
#define LED_DOWN_COLOR_ON GREEN
#define LED_RIGHT_COLOR_ON GREEN
#define LED_UP_COLOR_ON GREEN
#define LED_P1_COLOR_ON WHITE
#define LED_P2_COLOR_ON WHITE
#define LED_P3_COLOR_ON WHITE
#define LED_P4_COLOR_ON WHITE
#define LED_K1_COLOR_ON WHITE
#define LED_K2_COLOR_ON WHITE
#define LED_K3_COLOR_ON WHITE
#define LED_K4_COLOR_ON WHITE
#define LED_SELECT_COLOR_ON 0,0,0
#define LED_HOME_COLOR_ON 0,0,0
#define LED_START_COLOR_ON 0,0,0



//OFF BUTTON STATE 
#define LED_LEFT_COLOR_OFF 0,0,0
#define LED_DOWN_COLOR_OFF 0,0,0
#define LED_RIGHT_COLOR_OFF 0,0,0
#define LED_UP_COLOR_OFF 0,0,0
#define LED_P1_COLOR_OFF 0,0,0
#define LED_P2_COLOR_OFF 0,0,0
#define LED_P3_COLOR_OFF 0,0,0
#define LED_P4_COLOR_OFF 0,0,0
#define LED_K1_COLOR_OFF 0,0,0
#define LED_K2_COLOR_OFF 0,0,0
#define LED_K3_COLOR_OFF 0,0,0
#define LED_K4_COLOR_OFF 0,0,0
#define LED_SELECT_COLOR_OFF 0,0,0
#define LED_HOME_COLOR_OFF 0,0,0
#define LED_START_COLOR_OFF 0,0,0


//RANDOM COLORS SET
#define COLOR_RANDOM_1 255,0,0
#define COLOR_RANDOM_2 255,255,0
#define COLOR_RANDOM_3 255,255,255
#define COLOR_RANDOM_4 0,0,255
#define COLOR_RANDOM_5 0,255,255
#define COLOR_RANDOM_6 255,0,255
#define COLOR_RANDOM_7 127,255,0
#define COLOR_RANDOM_8 255,0,127
  
//BOOT AND IDLE SEQUENCE TIMING
#define  BOOT_COLOR_DELAY         250
#define  BOOT_COMPLETE_DELAY      500
#define  MAIN_LOOP_DELAY           50
#define IDLE_TIMEOUT_SECONDS       30
#define IDLE_ANIMATION_DELAY      500


//LED INDEX             // Change the order of this depending on the order your lights are setup in. So if you started with the firsts J2 at right button, you'd set LED_RIGHT to 0 and LED_RIGHT_B to 1 and on and on. There's two LEDS for each J2 so make sure to use the right order.
#define  LED_UP         16
#define  LED_UP_B       17
#define  LED_K1         14
#define  LED_K1_B       15
#define  LED_K2         10
#define  LED_K2_B       11
#define  LED_K3         6
#define  LED_K3_B       7
#define  LED_K4         2
#define  LED_K4_B       3
#define  LED_P4         0
#define  LED_P4_B       1
#define  LED_P3         4
#define  LED_P3_B       5
#define  LED_P2         8    
#define  LED_P2_B       9
#define  LED_P1         12
#define  LED_P1_B       13
#define  LED_RIGHT      18
#define  LED_RIGHT_B    19   
#define  LED_DOWN       20
#define  LED_DOWN_B     21
#define  LED_LEFT       22
#define  LED_LEFT_B     23
#define  LED_SELECT     0xFF
#define  LED_SELECT_B   0xFF
#define  LED_HOME       0xFF
#define  LED_HOME_B     0xFF
#define  LED_START      0xFF
#define  LED_START_B    0xFF

#define  LED_COUNT      23

