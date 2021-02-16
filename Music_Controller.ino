
#include "Keyboard.h"

/*
 * References on keyboard shortcuts
 * https://www.arduino.cc/reference/en/language/functions/usb/keyboard/
 * https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
 * KEY_LEFT_GUI is used to press the Windows key
 */

/*
 * Select Board: Arduino/Genuino Micro
 */
 
int btnVolDw = 2;
int btnVolUp = 3;
int btnPrev = 4;
int btnPause = 5;
int btnSkip = 6;
// =============================================
void setup() {
  pinMode(btnVolUp, INPUT_PULLUP);
  pinMode(btnVolDw, INPUT_PULLUP);
  pinMode(btnPause, INPUT_PULLUP);
  pinMode(btnSkip, INPUT_PULLUP);
  pinMode(btnPrev, INPUT_PULLUP);
}
// =============================================
void loop() {
  ButtonPress();
  delay(10);
}
// =============================================
void ButtonPress()
{
  Keyboard.begin();
  
    if (digitalRead(btnVolUp) == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F9);
    delay(100);
    Keyboard.releaseAll();
  }
  
  if (digitalRead(btnVolDw) == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F8);
    delay(100);
    Keyboard.releaseAll();
  }
  if (digitalRead(btnPause) == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F11);
    delay(500);
    Keyboard.releaseAll();
  }
  if (digitalRead(btnSkip) == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F12);
    delay(500);
    Keyboard.releaseAll();
  }
  if (digitalRead(btnPrev) == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F10);
    delay(500);
    Keyboard.releaseAll();
  }
  Keyboard.end();
}
// =============================================
