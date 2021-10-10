#include <stdio.h>
#include <maths.h>

int main()
{
  printf("Please enter your grades: \n");
  scanf("i%", grades);

  switch(grades)
  {
    case grades > 89 && grades =< 100:
    printf("You aced it. Excellent!!\n");
    break;

    case grades > 79 && grades < 90:
    printf("Amazing!!\n");
    break;

    case grades > 69 && grades < 80:
    printf("Well Done!!\n");
    break;

    case grades > 59 && grades < 70:
    printf("Niceee.\n");
    break;

    case grades > 49 && grades < 60:
    printf("You passed!!\n");
    break;

    case grades < 50:
    printf("Poggers, you're a disappointment.\n");
    break;
  }
  return 0;
}
