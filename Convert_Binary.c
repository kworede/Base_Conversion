//Kirubel Worede
//HW #0
//EE 474
// 01/14/2016

// This code takes arguments from the user and make base number converion accordingly.
// If user provoides only one inpuut, it makes automatic bianry conversion (Base 2)
// If user provides two inputs, it makes conversion of the first input to the base of the second input
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char num_key[16] = "0123456789abcdef";
void ConvertBinary(int num);
void Convert(int num, int num_base);

int main(int argc, char *argv[]) {
  if (argc == 2){
     int num = atoi(argv[1]);
      ConvertBinary(num);
     }
  else if (argc >2) {
      int num = atoi(argv[1]);
      int num_base = atoi(argv[2]);
      Convert(num, num_base);
      }
 return 0;
 }
void ConvertBinary(int num) {
  char number [256];
  number[0] = 0;
  do {
    strcpy (number+1, number);
    number[0]= num_key[num % 2];
    num = num/2;
  }while (num !=0);
 printf("your number in Binary is: %s\n", number);
}

  void Convert(int num, int num_base) {
    char number [256];
  number[0] = 0;
  do {
    strcpy (number+1, number);
    number[0]= num_key[num % num_base];
    num = num/num_base;
  } while (num !=0);
  printf("your number in base %i is: %s\n", num_base, number);
  }

