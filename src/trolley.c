/*
Programmed by Vardalas Panagiotis - sdi2400013
*/

// Libraries
#include <stdio.h>

// Main function
int main() {
  // Initiallizing a char variable that will be used to check if the input of
  // the second question is empty
  char check;

  // Initiallizing long long integer variables to store the data of the first
  // and second question
  long long int left, right;

  // Beginning the loop
  while (1) {
    printf("\nPlease enter the cost of going left: ");

    // Getting user input and checking that the input is an integer or EOF
    scanf("%lld", &left);

    // Using getchar to empty input buffer
    getchar();

    // Checking if input was EOF
    if (feof(stdin)) {
      // EOF for the first question should return 0
      printf("\nTerminating.\n");
      return 0;
      break;
    } else {
      printf("\nPlease enter the cost of going right: ");

      // Checking if input was provided
      if (scanf("%[^\n]*c", &check) > 0) {
        // Converting char variable to int and storing it to right variable
        sscanf(&check, "%lld", &right);

        // Making a choice
        if (right < left) {
          printf("\nGo right");
        } else {
          printf("\nGo left");
        }
        // Loop is completed successfully
      } else {
        // No right cost provided, returns 1
        printf("\nNo right cost provided.\n");
        return 1;
        break;
      }
    }
  }
}
