#ifndef ZERO_H
#define ZERO_H

#include <math.h>
#include <stdlib.h>

int drawZero(int mat[][20], int centerX, int centerY, int radius) {
    for (int y = centerY - radius; y <= centerY + radius; y++) {
        for (int x = centerX - radius; x <= centerX + radius; x++) {
            int dx = x - centerX;
            int dy = y - centerY;
            double distance = sqrt(dx * dx + dy * dy);

            if (fabs(distance - radius) < 0.5) {
                mat[y][x] = 1;
            }
        }
    }
    return 0;
}

#endif 
