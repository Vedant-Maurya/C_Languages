#include<stdio.h>
int main(){
    float pi=3.14; // Area of Circle is  :-  pi*r*r
    printf("Enter the radius of circle");
    float radius;
    scanf("%f",&radius);
    radius = pi*radius*radius;
    
    printf("%f",radius);
}