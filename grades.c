#include <stdio.h>
#include <math.h>

int main()
{
  char grade;
  int marks;
  printf("Please enter your marks: \n");
  scanf("%i", &marks);

  if (marks > 89 && marks < 101);
    grade = 'A';
  else if (marks > 79 && marks < 90);
    grade = 'B';
  else if (marks > 69 && marks < 80);
    grade = 'C';
  else if (grades > 59 && grades < 70);
    grade = 'D';
  else if (marks > 49 && marks < 60);
    grade = 'E';
  else if (marks < 50);
    grade = 'F';


    switch(grade)
    {
      case 'A':
      printf("You aced it. Excellent!!\n");
      break;

      case 'B':
      printf("Amazing!!\n");
      break;

      case 'C':
      printf("Well Done!!\n");
      break;

      case 'D':
      printf("Niceee.\n");
      break;

      case 'E':
      printf("You passed!!\n");
      break;

      case 'F':
      printf("Poggers, you're a disappointment.\n");
      break;
  }
  return 0;
}
