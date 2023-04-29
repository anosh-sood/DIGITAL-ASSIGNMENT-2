#include<stdio.h>
int main()
{
    int marks = 0;
    int birth_month = 0;
    int revised_marks = 0;
    int org_class_sum = 0;
    int revise_class_sum = 0;
    int n = 25; // total number of students
    for(int i = 0; i < n; i++){
        printf("Enter the original scores : ");
        scanf("%d",&marks);
        org_class_sum += marks;
        printf("Enter the month of birth : ");
        scanf("%d",&birth_month);
        revised_marks = marks + birth_month;
        revise_class_sum += revised_marks;
     }
    float org_class_avg = (float)org_class_sum/n;
    float revise_class_avg = (float)revise_class_sum/n;
    if(revise_class_avg - org_class_avg >= 5)
    {
        printf("\nCan implement – Significant increase in class average");
    }
    else
    {
        printf("\nNeed not implement – No significant increase in class average");
    }
}
