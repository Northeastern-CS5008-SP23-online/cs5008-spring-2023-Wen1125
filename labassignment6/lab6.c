//Wenli Li
//li.wenli@northeastern.edu

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* function to encrypt the data*/
#define MODFACTOR 26

void encrypt(char text[], int key)
{   char encoded;
    for (int i=0;i<strlen(text);i++) {
        if (isupper(text[i])) {
            encoded = ((text[i] - 'A' + key) % MODFACTOR)+ 'A';
        } else {encoded = ((text[i] - 'a' + key) % MODFACTOR) + 'a';}
        text[i] = encoded;
    }
    //insert your code here
}

/*function to decrypt the data*/
void decrypt(char text[],int key)
{   char decoded;
    for (int i=0;i<strlen(text);i++) {
        if (isupper(text[i])) {
            decoded = ((text[i] - 'A' - key + MODFACTOR) % MODFACTOR) + 'A';
        } else {decoded = ((text[i] - 'a' - key + MODFACTOR) % MODFACTOR) + 'a';}
        text[i] = decoded;
    }
    //insert your code here
    
}


/*----------- Main program---------------*/
int main()
{
    char text[20] ;
    int keyvalue=3;
    /*Input string */
    printf("Enter the message:  ");
    scanf("%s",text);
    printf("text input   = %s\n",text);
    
    /*call function to encrypt the data*/
    encrypt(text,keyvalue);
    printf("Encrypted value = %s\n",text);
    
    /*call function to decrypt the data*/
    decrypt(text,keyvalue);
    printf("Decrypted value = %s\n",text);
    
    return 0;
}
