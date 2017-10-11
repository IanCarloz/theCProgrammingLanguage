#include <stdio.h>

int main()
{
  char letter;
  char inp;

  letter = 'i';

  printf("Enter a letter: ");

  scanf("%c", &inp);

  if (letter == inp) {
    printf("Yes, it's the same letter. \n");
  }
  else {
    printf("No, the letter is: %c\n", letter);
  }

  return 0;
}
