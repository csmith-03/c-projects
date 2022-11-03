#include <stdio.h>
#include <dirent.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>

int main(void){
  // create a structure with directory entries and open the proc file, making sure it isn't null
  struct dirent *directoryEntry;
  DIR *directory = opendir("/proc");
  assert(directory != NULL);
  char path[256 + 5 + 5];

  // make a 2D array to store information about the processes
  int processes[500][3];
  // keeps track of position in directory of processes
  int pos = 0;

  // loop to get numerical info about each process
  while ((directoryEntry = readdir(directory)) != NULL){
    char* dirName = directoryEntry->d_name;
    char first = dirName[0];
    // makes sure directory name is a number
    if(isdigit(first)){

      // creates variables
      FILE *fp;
      int pid, ppid;
      char comm[100];
      long unsigned vsize;

      // opens up /proc/PID/stat file for each PID
      snprintf(path, sizeof(path), "/proc/%s/stat", dirName);
      fp = fopen(path, "r");

      if(fp == NULL){
      }

      else{
        // get numerical info about the process
       fscanf(fp, "%d %s %*c %d %*d %*d %*d %*d %*u %*lu %*lu %*lu %*lu %*lu %*lu %*ld %*ld %*ld %*ld %*ld %*ld %*llu %lu %*ld", &pid, comm, &ppid, &vsize);
       // store numerical info in array
       processes[pos][0] = pid;
       processes[pos][1] = ppid;
       processes[pos][2] = vsize;

       pos += 1;
       fclose(fp);
      }
    }
  }

  // loops through array of processes
  for(int i = 0; i < 250; i++) {
    // creates variables
    FILE *fp;
    char comm[100];
    char str[20];

    // opens up /proc/PID/stat file for each PID
    sprintf(str, "%d", processes[i][0]);
    snprintf(path, sizeof(path), "/proc/%s/stat", str);
    fp = fopen(path, "r");

    if(fp == NULL){
    }

    else{
      // gets name of process and formats it
      fscanf(fp, "%*d %s",  comm);
      int length = (int)strlen(comm) - 1;
      char name[length];
      name[length] = '\0';
      memcpy(name, &comm[1], strlen(comm) - 2 );
      // prints information about process
      printf("(%d) %s, %d kb\n", processes[i][0], name, processes[i][2]);
      fclose(fp);
    }
    // inner loop of processes
    for (int j=0; j<250; j++) {
      // checks to see if process in outer loop's PID is equal to process in inner loop's PPID
      if (processes[i][0] == processes[j][1]) {
       FILE *fp;
       char comm[100];
       char str[20];
       // opens up /proc/PID/stat file for each PID
       sprintf(str, "%d", processes[j][0]);
       snprintf(path, sizeof(path), "/proc/%s/stat", str);
       fp = fopen(path, "r");

       if(fp == NULL){
       }

       else{
         // gets name of process and formats it
        fscanf(fp, "%*d %s",  comm);
        int length = (int)strlen(comm) - 1;
        char name[length];
        name[length] = '\0';
        memcpy(name, &comm[1], strlen(comm) - 2 );
        // prints information about process
        printf("  (%d) %s, %d kb\n", processes[j][0], name, processes[j][2]);
        fclose(fp);
      }
     }
  }
  }
}
