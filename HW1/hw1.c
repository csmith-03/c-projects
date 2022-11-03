#include<stdio.h>
int main(int argc, char **argv)
{
  int i;
  if (argc == 1) {
    printf("there are no arguments to be passed.");
  }
  for (i = 1; i < argc; ++i) {
    printf("the argument passed was %s, and the address is: %p\n", argv[i], &argv[i]);
  }

}
