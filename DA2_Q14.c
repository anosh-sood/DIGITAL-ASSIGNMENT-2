
#include<stdio.h>
#include<string.h>
void modify_string(char text[100])
{
    char answer[100];
    int i = 0;
    while(i < strlen(text)-1)
    {
        if(i == 0)
        {
            answer[0] = text[0]-32;
        }
        if(text[i] == 32)
        {
            answer[i] = text[i];
            i++;
            break;
        }
        if(i !=0)
        {
            answer[i] = text[i];
        }
        i++;
    }
    while(i < strlen(text)-1)
    {
        answer[i] = text[i] - 32;
        i++;
    }
    for(int i = 0; i < strlen(text)-1;i++)
    {
        printf("%c",answer[i]);
    }
    printf("\n");
    unsigned int len = strlen(text)-1;
    unsigned int size = sizeof(text);
    if(len < 20)
    {
        return len;
    } 
    else
    {
        return size;
    }
}
int main()
{

    char text[100];
    printf("Enter the string : ");
    fgets(text,100,stdin);
    printf("%u",modify_string(text));
}
