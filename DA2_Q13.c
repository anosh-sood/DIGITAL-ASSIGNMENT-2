#include <stdio.h>
int main() {
    char type_of_the_car[10];
    float price_of_the_car, extra_fitting_price, total, discount, gst, net;
    printf("Enter the type of car (Hatchback, Sedan, SUV, MUV): ");
    scanf("%s", type_of_the_car);
    printf("Enter the price of the car: ");
    scanf("%f", &price_of_the_car);
    printf("Enter the extra fitting price of the car: ");
    scanf("%f", &extra_fitting_price);

    if (strcmp(type_of_the_car, "Hatchback") == 0) {
        total = price_of_the_car + extra_fitting_price;
        discount = total * 0.03;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;
        printf("Net amount to be paid: %.2f", net);
    } else if (strcmp(type_of_the_car, "Sedan") == 0) {
        total = price_of_the_car + extra_fitting_price;
        discount = total * 0.05;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;
        printf("Net amount to be paid: %.2f", net);
    } else if (strcmp(type_of_the_car, "SUV") == 0) {
        total = price_of_the_car + extra_fitting_price;
        discount = total * 0.1;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;
        printf("Net amount to be paid: %.2f", net);
    } else if (strcmp(type_of_the_car, "MUV") == 0) {
        total = price_of_the_car + extra_fitting_price;
        discount = total * 0.15;
        gst = (total - discount) * 0.12;
        net = total - discount + gst;
        printf("Net amount to be paid: %.2f", net);
    } else {
        printf("Invalid type");
    }
    return 0;
}
