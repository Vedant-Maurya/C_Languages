#include<stdio.h>
int main(){
    float pi=3.14;  // circumference of circle is => 2*pi*r
    printf("Enter the radius of circle =>");
    float radius;
    scanf("%f",&radius);
    radius = 2*pi*radius;
    printf("the circumference of circle is  => %f",radius);
    return 0;
    
}
