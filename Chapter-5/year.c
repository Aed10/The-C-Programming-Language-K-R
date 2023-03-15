#include <stdio.h>
static int day_tab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int year, int month, int day); /* Change the day of a month to a day of year */
void month_day(int year, int yearday, int *pmonth, int *pday); /* set month, day */



int main() {
  int choice, year, month, day, yearday, result;
  
  printf("Choose an option:\n");
  printf("1. Convert day of year to month and day\n");
  printf("2. Convert month and day to day of year\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  
  if (choice == 1) {
    printf("Enter the year and day of year: ");
    scanf("%d %d", &year, &yearday);
    
    int month_result, day_result;
    month_day(year, yearday, &month_result, &day_result);
    
    printf("%d/%d/%d is day %d of the year.\n", month_result, day_result, year, yearday);
    
  } else if (choice == 2) {
    printf("Enter the year, month, and day: ");
    scanf("%d %d %d", &year, &month, &day);
    
    result = day_of_year(year, month, day);
    
    printf("%d/%d/%d is day %d of the year.\n", month, day, year, result);
    
  } else {
    printf("Invalid choice.\n");
  }
  
  return 0;
}

int day_of_year(year, month,day)   /*  set day of year */
int year, month, day;          /* from month & day */
{
  int i, leap;

  leap = (year%4 == 0 && year%100 != 0) || year%400 == 0;
  for (i = 1; i < month; i++)
    day += day_tab[leap][i];
  return (day);
}

void month_day(year, yearday, pmonth, pday) /* set month, day */
int year, yearday, *pmonth, *pday; /* from day of year */
{
  int i, leap;

  leap = (year%4 == 0 && year%100 != 0) || year%400 == 0;
  for (i = 1; yearday > day_tab[leap][i]; i++)
    yearday -= day_tab[leap][i];
  *pmonth = i;
  *pday = yearday;
}
