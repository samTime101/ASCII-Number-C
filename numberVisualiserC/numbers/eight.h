#ifndef EIGHT_H
#define EIGHT_H

#include "zero.h"

int drawEight(int mat[][20], int startX, int startY, int width, int height) {
    drawZero(mat, startX + (width / 2), startY + (height / 4), (height / 4));
    drawZero(mat, startX + (width / 2), startY + (3 * height / 4), (height / 4));
    return 0;
}

#endif 
