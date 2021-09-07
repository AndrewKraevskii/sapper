#include <dos.h>
#include <stdio.h>
int main(void) {
  printf("beep beep ");
  sound(500);
  delay(600);
  nosound();
  delay(300);
  sound(500);
  delay(600);
  nosound();
  return 0;
}