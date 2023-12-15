#include <stdio.h>
#include <stdlib.h>


int main() {
  char operator;
  int num1, num2, result;

  while (1) {
    printf("Enter operator (+, -, *, /, A, F) or 'Q' to quit: ");
    scanf(" %c", &operator);

    if (operator == 'Q' || operator == 'q') {
      printf("Exiting the calculator program.\n");
      break;
    }

    if (operator == 'A' || operator == 'a') {
      printf("Enter a number: ");
      scanf("%d", &num1);
      printf("Absolute value: %d\n", absolute_value(num1));
    } else if (operator == 'F' || operator == 'f') {
      printf("Enter a number: ");
      scanf("%d", &num1);
      printf("Factorial: %d\n", factorial(num1));
    } else {
      printf("Enter two numbers: ");
      scanf("%d %d", &num1, &num2);

     
          printf("Invalid operator. Try again.\n");
      }
    }
  }

  return 0;
}