#ifndef SIX_H
#define SIX_H
int drawSix(int mat[][20],int startX,int startY, int width,int height) {

        for (int y = 0; y < height; y++) {
            mat[startY + y][startX] = 1;
        }

        for (int x = 0; x < width; x++) {
            mat[startY][startX + x] = 1;
        }

        for (int x = 0; x < width; x++) {
            mat[startY + (height / 2)][startX + x] = 1;
        }

        for (int x = 0; x < width; x++) {
            mat[startY + height - 1][startX + x] = 1;
        }

        for (int y = (height / 2); y < height; y++) {
            mat[startY + y][startX + width - 1] = 1;
        }
    }
#endif