# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>

int main( int argc, char *argv[] )  {
  fork();
  // int execvp (const char *file, char *const argv[]);
  // char *programName = argv[0];
  execvp(argv[1], &argv[1]);
  return 0;
