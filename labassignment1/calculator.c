// Wenli Li
// li.wenli@northeastern.edu
#include<stdio.h>
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

// Function that does simple caculation.
int caculator(int* x, int* y, int* z)
{
    switch(*z){
        case 1: 
            answer = *x + *y;
            break;
        case 2:
            answer = *y - *x;
            break;
        case 3:
            answer = *x * *y;
            break;
        case 4:
            if (num2 == 0){
                printf("Divide by zero error.")
            }else{
                answer = *x / *y;
            }
            break;
        default:
            printf(Invaild option.)
            break;
    }
}
