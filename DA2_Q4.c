#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee {
    char name[50];
    int age;
    char position[20];
    char date_of_joining[11];
};
int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee employees[n], temp;

    for(int i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Position: ");
        scanf("%s", employees[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", employees[i].date_of_joining);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(employees[i].name, employees[j].name) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("\nEmployee List sorted by name:\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Position: %s\n", employees[i].position);
        printf("Date of Joining: %s\n\n", employees[i].date_of_joining);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(employees[i].date_of_joining, employees[j].date_of_joining) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("\nEmployee List sorted by date of joining:\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Position: %s\n", employees[i].position);
        printf("Date of Joining: %s\n\n", employees[i].date_of_joining);
    }
    
    return 0;
}
