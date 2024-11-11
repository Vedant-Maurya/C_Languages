#include<stdio.h>
int main(){
    int length ; // Area of Rectangle is => length*width
    printf("Enter the lenght of rectangle is =>");
    scanf("%d",&length);
    printf("\n");
    int width;
    printf("Enter the width of rectangle is  =>");
    scanf("%d",&width);
    int area= length * width;
    printf("the area of rectangle is %d => ",area);
    return 0;
    
}