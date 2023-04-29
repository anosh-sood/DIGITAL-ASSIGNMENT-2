 #include<stdio.h>
int recur(int *arr,int size,int count)
{
    if(size == 0)
    {
         return count;
    }
    else
    {
        int new_arr[size/2];
        for(int i = 0; i < size/2; i++)
        {
            new_arr[i] = arr[i];
        }
        recur(new_arr,size/2,count+1);
    }
}
int main()
{
    int num;
    printf("Enter the size of the array : ");
    scanf("%d",&num);
    int ele[100];
    for(int i = 0; i < num; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&ele[i]);
    }
    int count = recur(ele,num,0);
    printf("The array can be divided into 2 equal times %d times.",count);
}
