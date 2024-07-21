#ifndef FOUR_H
#define FOUR_H
int drawFour(int mat[][20],int startX, int startY, int width, int height){
    for (int y = 0; y < height; y++)
    {
        mat[startY + y][startX + width - 1] = 1;
        if (y < (height / 2))
        {
            mat[startY + y][startX] = 1;
        }
    }
    for (int x = 0; x < width; x++)
    {
        mat[startY + (height / 2)][startX + x] = 1;
    }
}
#endif