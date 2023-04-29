#include<stdio.h>
int main()
{
    int n = 9;
    char array[3][3];
    char buffer;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3;j++)
        {
            scanf("%c%c",&array[i][j],&buffer);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3;j++)
        {
            if(i == j)  // condition for first diagnol
            {
            printf("%c ",array[i][j]);
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i+j == 2 && i != j){
                 printf("%c ",array[i][j]);
            }
        }
    }
}
