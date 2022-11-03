# Homework 2 - Channing Smith - CSCI 340

# 1. Lists and Structures
```
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

This is also located on my .c file.
```

# 2. C Pointers and References
```
int main(int argc, char *argv[]) {
  int mem_size = atoi(argv[1]);
  printf("\n");
  int *pointer = malloc(mem_size);

  memset(pointer, 0, mem_size);
  printf("The address of memory block is: %p\n", pointer);

  for (int *i = pointer; i < pointer + mem_size; i += 4) {
    printf("%p: %x\n", i, *i);
  }

  free(pointer);

  return 0;
};
```
```
This is also located in my .c file. Below is sample output.
```
```
osboxes@channingvm:~/Documents/CSCI 340/HW2$ ./hw2 100

The address of memory block is: 0x55bd083206b0
Address 0x55bd083206b0 is 0 in hexadecimal.
Address 0x55bd083206c0 is 0 in hexadecimal.
Address 0x55bd083206d0 is 0 in hexadecimal.
Address 0x55bd083206e0 is 0 in hexadecimal.
Address 0x55bd083206f0 is 0 in hexadecimal.
Address 0x55bd08320700 is 0 in hexadecimal.
Address 0x55bd08320710 is 0 in hexadecimal.
Address 0x55bd08320720 is 0 in hexadecimal.
Address 0x55bd08320730 is 0 in hexadecimal.
Address 0x55bd08320740 is 0 in hexadecimal.
Address 0x55bd08320750 is 0 in hexadecimal.

```
# 3. Process Transitions
```
- Ready: Ready means that the process is ready for execution. Ready can transition into running because since it is ready to execute, this means that it is ready to run and not assigned to a CPU.
- Suspended: Suspended can transition into ready once the requirement of the user has been satisfied. It then leaves this idle stage to become ready.
- Running - Running can transition into either ready, suspended, or terminated. It goes to ready when it is interrupted when the user wants another process to run, but one is already running. Running goes to the suspend state when it is not scheduled for execution, but it does still exist. It is due to the lack of memory that forced it to be suspended. Finally, running goes to terminated when it exits the program or the user quits. This happens when the exit function is called.
```
# 4. Scheduling Policies
```
- CFS algorithm - This stands for "Completely Fair Scheduler" and just like its name, it is completely fair when it comes to dividing the CPU time with all the processes. It looks at each processes run time and prioritizes it accordingly, which got rid of the old notion of fixed time slices, and gave a fair share of CPU time to scheduled tasks. It did not use time slices. Within the process control block, under CFS, each process has a virtual time. At each scheduling point, the current process is increased, and the run time for the process is constantly increasing.

- BFS algorithm - This stands for "Brain Fuck Scheduler" and it uses O(n) time and as a doubly linked list data structure. It was created with a simpler algorithm so that it no longer required tuning parameters. This algorithm is no longer used in Linux due to its O(n) time and also its context switch overhead. Higher priority tasks got executed first, and then the tasks were distributed and executed by the virtual deadline formula, meaning that if a task has the closest deadline, it would run first. All tasks got the same time slice except for FIFO.
