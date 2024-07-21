// CREATED BY SAMIP REGMI TIME101
#include <stdio.h>

#include "./headers/draw.h"
#include "./numbers/zero.h"
#include "./numbers/one.h"
#include "./numbers/two.h"
#include"./numbers/three.h"
#include"./numbers/four.h"
#include"./numbers/five.h"
#include"./numbers/six.h"
#include"./numbers/seven.h"
#include"./numbers/eight.h"
#include"./numbers/nine.h"

void main()
{
    int mat[20][20];
    int userInput;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            mat[i][j] = 0;
        }
    }
    // program loop
    do
    {
        printf("Enter Number 0-9, quit type-101 :");
        scanf("%d", &userInput);

        switch (userInput)
        {
        case 0:
            drawZero(mat, 10, 10, 5);
            draw(mat);
            break;
        case 1:
            drawOne(mat, 8, 5, 10);
            draw(mat);
            break;
        case 2:
            drawTwo(mat, 5, 5, 10, 10);
            draw(mat);
            break;        
        case 3:
            drawThree(mat, 5, 5, 10, 10);
            draw(mat);
            break;
        case 4:
            drawFour(mat, 5, 5, 10, 10);
            draw(mat);
            break;
        case 5:
           drawFive(mat, 5, 5, 10, 10);;
            draw(mat);
            break;
        case 6:
            drawSix(mat, 5, 5, 10, 10);
            draw(mat);
            break;
        case 7:
            drawSeven(mat, 5, 5, 10, 10);
            draw(mat);
            break;
        case 8:
            drawEight(mat, 5, 5, 10, 10);
            draw(mat);
            break;
        case 9:
            drawNine(mat, 5, 5, 10, 10);
            draw(mat);
            break;

        }

    } while (userInput != 101);
}