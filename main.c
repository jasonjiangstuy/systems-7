#include "stdio.h"
#include "time.h"

void printArray(int ray[], int size);
int averageValue(int ray[], int size);
void copyOver(int ray[], int oray[], int size);

int main() {
  int intray[5];
  int i;
  srand(time(NULL));
  for (i = 0; i < sizeof(intray) / sizeof(intray[0]); i ++){
    intray[i] = rand();
  }
  printArray(intray, sizeof(intray) / sizeof(intray[0]));
  printf("averageValue: %d\n", averageValue(intray, sizeof(intray) / sizeof(intray[0])));
  int copyOverRay[5];
  copyOver(intray, copyOverRay, sizeof(intray) / sizeof(intray[0]));
  printf("Copyied Array: ");
  printArray(copyOverRay, sizeof(copyOverRay) / sizeof(copyOverRay[0]));
  printf("averageCopied: %d\n", averageValue(copyOverRay, sizeof(copyOverRay) / sizeof(copyOverRay[0])));

  return 0;
}

void printArray(int ray[], int size){
  int counter;
  printf("[");
  for (counter = 0 ; counter < size ; counter++){
    printf(" %d ", ray[counter]);
  }
  printf("]\n");

}

int averageValue(int ray[], int size){
  int counter;
  int sum = 0;
  for (counter = 0 ; counter < size ; counter++){
    sum += ray[counter];
  }
  return sum;
}

void copyOver(int ray[], int oray[], int size){
  int counter;
  for (counter = 0 ; counter < size ; counter++){
    oray[counter] = ray[counter];
  }
}
