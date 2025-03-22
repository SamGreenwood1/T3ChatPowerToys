#include <stdio.h>

int main(void) {
  int month, day, year;
  char monthOut[3];

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) {
    case 1:
      monthOut = "Jan";
      break;
    case 2:
      monthOut = "Feb";
      break;
    case 3:
      monthOut = "Mar";
      break;
    case 4:
      monthOut = "Apr";
      break;
    case 5:
      monthOut = "May";
      break;
    case 6:
      monthOut = "Jun";
      break;
    case 7:
      monthOut = "Jul";
      break;
    case 8:
      monthOut = "Aug";
      break;
    case 9:
      monthOut = "Sep";
      break;
    case 10:
      monthOut = "Oct";
      break;
    case 11:
      monthOut = "Nov";
      break;
    case 12:
      monthOut = "Dec";
      break;
    done;
  }

  // Print the day
  printf("%s %d, %d\n", monthOut, day, year);

  
  return 0;
}