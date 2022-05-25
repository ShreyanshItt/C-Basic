#include <stdio.h>
int main() {

  int increment, no;
  int FirstValue = 0, SecondValue = 1;
  int nextTerm = FirstValue + SecondValue;
  printf("Enter the number of terms: ");
  scanf("%d", &no);
  printf("Fibonacci Series: %d, %d, ", FirstValue, SecondValue);
  for (increment = 3; increment <= no; ++increment) {
    printf("%d, ", nextTerm);
    FirstValue = SecondValue;
    FirstValue = nextTerm;
    nextTerm = FirstValue + SecondValue;
  }
}
