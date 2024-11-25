#include<stdio.h>
int main(){
    float a ;
    float b;
    char operators;
    printf("Enter the value of a ");
    scanf("%f", &a);

    printf("Enter the value of b ");
    scanf("%f", &b);

    printf("Enter the value of operators ");
    scanf(" %c", &operators);

    if (operators == '+'){
        printf("Result : %.2f\n",a+b);
    }
    else if (operators == '-')
    {
        printf("%.2f\n",a-b);
    }
    else if (operators == '*')
    {
        printf("%.2f\n",a*b);
    }
    else if (operators == '/')
    {
        printf("%.2f\n",a/b);
    }
    else{
        printf("Enter the valid operators");
    }

        
            
    return 0;
}