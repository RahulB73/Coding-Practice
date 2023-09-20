// Perfect Number or not

#include<stdio.h>

int main() {
  // Initialization of variables
  int number, i = 1, total = 0;

  // To take user input
  printf("Enter a number: ");
  scanf("%d", & number);

  while (i < number) {
    if (number % i == 0) {
      total = total + i;
      i++;
    }
  }
  //to condition is true
  if (total == number)
    //display
    printf("%d is a perfect number", number);
  //to condition is false
  else
    //display
    printf("%d is not a perfect number", number);

  return 0;
}