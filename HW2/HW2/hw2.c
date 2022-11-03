# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

// stucture definiton
struct ProcessInstruction {
  int process_id;
  int instruction_pointer;
  int stack_pointer;
  int register1;
  int register2;
  int AX;
  int BX;
  char status[];
};

// allocates memory
int main(int argc, char *argv[]) {
  int mem_size = atoi(argv[1]);
  printf("\n");
  int *pointer = malloc(mem_size);

// memeset function
  memset(pointer, 0, mem_size);
  printf("The address of memory block is: %p\n", pointer);
// for loop for contents of memory block in hexadecimal
  for (int *i = pointer; i < pointer + mem_size; i += 4) {
    printf("Address %p is %x in hexadecimal.\n", i, *i);
  }
// frees the memory
  free(pointer);

  return 0;
};
