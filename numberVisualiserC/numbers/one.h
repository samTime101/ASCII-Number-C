#ifndef ONE_H
#define ONE_H
int  drawOne(int mat [][20], int startX, int startY, int height)
{
    for (int y = 0; y < height; y++)
    {
        mat[startY + y][startX + 1] = 1;
    }
}
#endif