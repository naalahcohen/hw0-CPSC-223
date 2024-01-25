#include <stdio.h>
int main()
{
  char name[126];
  printf("Enter your name: ");
  scanf("%[^\n]", name);
  // issue was that i was only reading until the first space 
  printf("Hello, %s!\n", name);
  return 0;
}


