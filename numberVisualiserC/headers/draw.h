void draw(int mat[][20]);

void draw(int mat[][20])
{

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (mat[i][j] != 0)
            {
                printf("1 ");
            }
            else
            {
                printf(". ");
            }
            // clearing screen;
            mat[i][j] = 0;
        }
        printf("\n");
    }
}