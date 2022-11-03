# Homework 4 - Channing Smith

## 1. Complex Scheduling
## A. MLFQ scheduling
```
1. Job 0: response time: 0, turnaround time: 84
   Job 1: response time: 7, turnaround time: 153
   Job 2: response time: 15, turnaround time: 81
   Job 3: response time: 18, turnaround time: 70
   Average response time: 10
   Average turnaround time: 97
  ```
  ```
2. As I increased the boost time, the average response time decreased, and the average turnaround time increased. I tested this with a boost of 5, 100, and 1000.
```

## B. Lottery scheduling

1.

| Jobname | Response Time (Start Time) | Turnaround Time (End Time) |
| --------|----------------------------|----------------------------|
| Job 0   |3                           |13                          |
| Job 1   |1                           |23                          |
| Job 2   |2                           |18                          |
| Job 3   |5                           |27                          |

```
- Average Response Time: 2.75
- Average Turnaround Time: 20.25
```
```
2. When you vary the time slice it just changes the increments of time it goes up by. So, when I used -q 5, the time would drop by 5 when the job was used.

 Below is an example:
 ```

| Jobname | 5  | 10  | 15  | 20  | 25  | 30  | 35  |
| --------|----|-----|-----|-----|-----|-----|-----|
| Job 0   |5   |5    |X(5) |0    |0    |0    |0    |
| Job 1   |X(9)|4    |4    |4    |X(4) |0    |0    |
| Job 2   |7   |X(7) |2    |X(2) |0    |0    |0    |
| Job 3   |6   |6    |6    |6    |6    |X(6) |X(1) |

```
- Using this, you can see that Job 1, when chosen at time 5, then drops to 4 at time 10, etc.

- The average turnaround time for varying the time slice went up, and the response time also went extremely up.

- Average Response Time: 15
- Average Turnaround Time: 23.75
```
## 2. Free Space
```
- For this problem, I attached a pdf in my zipped folder of my diagrams for part A and part B.
```


## 3. Segmentation

| Virtual Address | Physical Address | Segmentation Violation? |
|-----------------|------------------|-------------------------|
|0x00000042       |0x00003d82        |                         |
|0x0000034c       |0x00000d90        |                         |
|0x00000155       |0x00003e95        |                         |
|0x0000017d       |0x00003ebd        |                         |
|0x00000342       |0x00000d86        |                         |
|0x000000bb       |0x00003dfb        |                         |
|0x000003a3       |0x00000de7        |                         |
|0x000001f6       |                  | Segmentation Violation  |
|0x00000049       |0x00003d89        |                         |
|0x000003ab       |0x00000def        |                         |
|0x0000024a       |                  | Segmentation Violation  |
|0x00000050       |0x00003d90        |                         |
|0x0000035a       |0x00000d9e        |                         |
|0x00000319       |0x00000d59        |                         |
|0x000002f5       |0x00000d39        |                         |
|0x000002a1       |0x00000ce5        |                         |
|0x000003f8       |0x00000e3c        |                         |
|0x0000000c       |0x00003d4c        |                         |
|0x000003e5       |0x00000e29        |                         |
|0x00000292       |0x00000cd6        |                         |
