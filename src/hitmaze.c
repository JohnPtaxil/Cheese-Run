//SOME NOTES FROM CLASS REGARDING MAZE SETUP AND PROCESSING

int touchingVLine(int lx, int ly, int lh, int px, int py, int pw, int ph)
{
    int returnvalue = 0;
    if ((lx >= px) && (lx <= (px + pw)))
    {
        if ((py >= ly) && (py <= (ly + lh)))
            returnvalue = 1;
        if (((py + ph) >= ly) && ((py + ph) <= (ly + lh)))
            returnvalue = 1;
    }
    return returnvalue;
}
int touchingHLine(int lx, int ly, int lw, int px, int py, int pw, int ph)
{
    int returnvalue = 0;
    if ((ly >= py) && (ly <= (py + ph)))
    {
        if ((px >= lx) && (px <= (lx + lw)))
            returnvalue = 1;
        if (((px + pw) >= lx) && ((px + pw) <= (lx + lw)))
            returnvalue = 1;
    }
    return returnvalue;
}