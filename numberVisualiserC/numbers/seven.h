#ifndef SEVEN_H
#define SEVEN_H
    int drawSeven(int mat[][20], int startX, int startY,int width, int height) {
        for (int x = 0; x < width; x++) {
            mat[startY][startX + x] = 1;
        }
        for (int y = 0; y < height; y++) {
            mat[startY + y][startX + width - 1 - (y / 2)] = 1;
        }
    }
#endif