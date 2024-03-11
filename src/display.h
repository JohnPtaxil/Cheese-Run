void display_begin(void);
void delay(uint32_t dly);
void fillRectangle(uint16_t x,uint16_t y,uint16_t width, uint16_t height, uint16_t colour);
void putPixel(uint16_t x, uint16_t y, uint16_t colour);
void putImage(uint16_t x, uint16_t y, uint16_t width, uint16_t height, const uint16_t *Image, int hOrientation,int vOrientation);
void drawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t Colour);
void drawRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t Colour);
void drawCircle(uint16_t x0, uint16_t y0, uint16_t radius, uint16_t Colour);
void fillCircle(uint16_t x0, uint16_t y0, uint16_t radius, uint16_t Colour);
void printText(const char *Text,uint16_t x, uint16_t y, uint16_t ForeColour, uint16_t BackColour);
void printTextX2(const char *Text, uint16_t x, uint16_t y, uint16_t ForeColour, uint16_t BackColour);
void printNumber(uint16_t Number, uint16_t x, uint16_t y, uint16_t ForeColour, uint16_t BackColour);
void printNumberX2(uint16_t Number, uint16_t x, uint16_t y, uint16_t ForeColour, uint16_t BackColour);
uint16_t RGBToWord(uint16_t R, uint16_t G, uint16_t B);

// Functions to set display for each level
void maze_level1(int);
void maze_level2(void); 
void maze_level3(void);

// These functions pass oldx, oldy, and the level number and return the new level number
void level1_pass(uint16_t,uint16_t,int); // Function for when the player passes level 1
void level2_pass(uint16_t,uint16_t,int); // Function for when the player passes level 2
void level3_pass(uint16_t,uint16_t); // Function for when the player passes final level

// Functions for border collisions for maze walls
int touchingVline(int,int,int,int,int,int,int);
int touchingHline(int,int,int,int,int,int,int);

// Function for handling movement for level 1
void movement1(int,int,int,int,int,uint16_t,uint16_t,uint16_t,uint16_t);
