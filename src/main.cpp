#include <avr/io.h>
#include <util/delay.h>

void setup() {
  DDRD |= (1<<0);
  PORTD &= ~(1<<0);
}

void loop() {
  PORTD |= (1<<0);
  _delay_ms(500);
  PORTD &= ~(1<<0);
  _delay_ms(500);
}

int main(void) {
  setup();

  while (1) {
    loop();
  }

  return 0;
}