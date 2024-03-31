#include <stdint.h>

// This makes it so the system is not always waiting for the button to be pressed
int dataAvailable(void);

void initSerial(void);
void eputchar(char c);
char egetchar(void);
void eputs(char *String);
void printDecimal(int32_t Value);
