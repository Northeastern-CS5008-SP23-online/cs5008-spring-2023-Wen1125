// Wenli Li
// li.wenli@northeastern.edu
#include<stdio.h>

// Function that does simple caculation.
int caculator(int* x, int* y, int* z)
{   int answer = 0;
    switch(*z){
        case 1: 
            answer = *x + *y;
            printf("Addition\n");
            printf("Sum=%d", answer);
            break;
        case 2:
            answer = *x - *y;
            printf("Subtraction\n");
            printf("Difference=%d", answer);
            break;
        case 3:
            answer = *x * *y;
            printf("Multiplication\n");
            printf("Product=%d", answer);
            break;
        case 4:
            if (*y == 0){
                printf("Divide by zero error.");
            }else{
                answer = *x / *y;
                printf("Division\n");
                printf("Quatient=%d\n", answer);
                answer = *x % *y;
                printf("Remainder=%d", answer);
            }
            break;
        default:
            printf("Invaild option.");
            break;
    }
    return 0;
}


int main()
{
    int num1,num2,answer,choice;

    printf("Enter your choice\n");
    printf(" 1.addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);
    
    printf("Enter num1 and num2 values");
    scanf("%d %d", &num1, &num2);
    
    // Call function and pass reference.
    caculator(&num1, &num2, &choice);
           
    return 0;
}


