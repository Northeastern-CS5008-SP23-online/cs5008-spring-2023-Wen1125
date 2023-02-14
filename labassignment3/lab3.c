//Wenli Li
//li.wenli@northeastern.edu
//To perform insertion sort of integers stored in a file and display the output and store it in another file.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    FILE* fp2;
    int arr[10],temp;
    int count=0,i,j,k,r;/*count will have the total number of elements in the array*/
    /*read the file*/
    fp=fopen("Input.txt","r");
    if(fp==NULL){
        //if file returns NULL then can't open the file
    printf("\n Cannot open the file \n");
    exit(0);
    }
    
    //insert your code here
    
    //count the number of elements in the array
    char line[100];
    while(!feof(fp)){
        fgets(line, 100, fp);
        count++;
    }
    rewind(fp);
    
    //initialize the array
    for (j=0; j<count; j++) {
        int num;
        fscanf(fp, "%d", &num);
        arr[j] = num;
    }
    
    //insertion sort
    for (i=0; i<count-1; i++) {
        if (arr[i+1] < arr[i]) {
            for (k=i;k>=0;k--) {
                if (arr[k+1]<arr[k]) {
                   temp = arr[k+1]; 
                   arr[k+1] = arr[k];
                   arr[k] = temp;
                }
            }
        }
    }

    //print the contents of the number array into a new file  
    fp2 = fopen("Sorted_file.txt", "w");
    for (r=0;r<10;r++) {
        fprintf(fp2, "%d\n", arr[r]);
        printf("%d\n", arr[r]);
    }

    return 0;
}
