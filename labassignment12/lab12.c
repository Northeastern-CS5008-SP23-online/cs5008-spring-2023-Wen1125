//li.wenli@northeastern.edu
//Wenli.Li

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int compression(char arr[], int n, char res[]){
    int counter = 0;
    char curr = arr[0];
    char buffer[5]; 
    int index = 0;
    int out_len = 0;
    
    //insert your code here 
    for (int i=0;i<n+1;i++) {
        if (arr[i] == curr) {
            counter++;
        } else {
            sprintf(buffer, "%d", counter);
            res[index] = curr;
            index++;
            //add count to result array	
            if (counter>1) {    	
			    for(int l=0;l<strlen(buffer);l++){
				    res[index]=buffer[l];
                    index++;
			    }
            } 
            curr = arr[i];
            counter = 1;
        }
    } 
        
    //print output
    printf("Output: ");
    for(int k=0;k<index;k++){
        printf("%c",res[k]);
    }
    printf("\n");
    //return the length of the output string
    return index;
}
 
int main()
{
    char a[]="aaabcaaaacca";
    char res[50];
    int r,n=strlen(a);//n is the size of input array
    r=compression(a,n,res);
    printf("length of the compressed string:%d\n",r);
    return 0;
}
