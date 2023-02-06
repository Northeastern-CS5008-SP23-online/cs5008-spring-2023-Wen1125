// name: <Wenli Li>
// email: <li.wenli@northeastern.edu>

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define LIMIT 50
#define RAND_RANGE 100

int main(){

  int source[LIMIT]; // array to hold input data values
  int dest[LIMIT];   // array to hold sorted data values
                     // use dest only if you are using two arrays
  bool valid[LIMIT]; // array that indicates which input values are valid

  int i;             // loop variable
  int j;             // loop variable
  int smallest;      // current smallest element
  int k=0;

  //seed random numbers
  srand((unsigned)time(NULL));

  //initialize valid array - at begining the full array is valid
  for (i=0; i<LIMIT; i++) {
    valid[i] = true;
  }

  //initialize source array with random numbers from 0..RAND_RANGE
  for (i=0; i<LIMIT; i++) {
    source[i] = rand() % RAND_RANGE;
  }

  //print out source array in rows of 20 elements
  printf("Source array:\n");
  for (i=0; i < ((LIMIT/20)+1); i++) {
    for (j=0; j<20; j++) {
      if (i*20+j < LIMIT) {
	printf("%.2d ",source[i*20+j]);
      }
    }
    printf("\n");
  }
  printf("\n");

  //selection sort
  smallest = 0;
  int a = 0;

  for (i=0; i<LIMIT; i++) {
    //reset smallest to a valid value.
    while(a<LIMIT && !valid[a]) {
      a++;
    }
    smallest = a;
    // Find the smallest number in the valid array.
    for (j=0; j<LIMIT; j++) {
      if (valid[j] == true && source[j] <= source[smallest]) {
        smallest = j;
        }
      }

    valid[smallest] = false;
    dest[i] = source[smallest];
    }
    // INSERT YOUR CODE HERE 
  
  
  //print out sorted array in rows of 10
  printf("Destination array:\n");
  for (i=0; i < ((LIMIT/10)+1); i++) {
    for (j=0; j<10; j++) {
      if (i*10+j < LIMIT) {
	printf("%.2d ", dest[i*10+j]);
      }
    }
    printf("\n");
  }

  // INSERT YOUR CODE HERE

  return 0;
}
