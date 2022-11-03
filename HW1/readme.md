 # Homework 1- Channing Smith - CSCI 340

## Problem 1(a)
## uname -a output
```
Linux osboxes 5.4.0-96-generic #109-Ubuntu SMP Wed Jan 12 16:49:16 UTC 2022 x86_64 x86_64 x86_64 GNU/Linux
```

## ps -al output
```
F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
4 S  1000    1312    1310  0  80   0 - 95357 ep_pol tty2     00:00:23 Xorg
0 S  1000    1350    1310  0  80   0 - 47054 poll_s tty2     00:00:00 gnome-sess
4 R  1000   12755   12354  0  80   0 -  2853 -      pts/0    00:00:00 ps
```

## cat/proc/meminfo output
```
MemTotal:        4026360 kB
MemFree:          404284 kB
MemAvailable:    2545400 kB
Buffers:          219980 kB
Cached:          2020720 kB
SwapCached:            0 kB
Active:          1903836 kB
Inactive:        1378744 kB
Active(anon):    1007360 kB
Inactive(anon):     3768 kB
Active(file):     896476 kB
Inactive(file):  1374976 kB
Unevictable:          32 kB
Mlocked:              32 kB
SwapTotal:       8787964 kB
SwapFree:        8787964 kB
Dirty:                48 kB
Writeback:             0 kB
AnonPages:       1041928 kB
Mapped:           398924 kB
Shmem:              4708 kB
KReclaimable:     145356 kB
Slab:             220076 kB
SReclaimable:     145356 kB
SUnreclaim:        74720 kB
KernelStack:        8944 kB
PageTables:        16932 kB
NFS_Unstable:          0 kB
Bounce:                0 kB
WritebackTmp:          0 kB
CommitLimit:    10801144 kB
Committed_AS:    5167648 kB
VmallocTotal:   34359738367 kB
VmallocUsed:       36412 kB
VmallocChunk:          0 kB
Percpu:              848 kB
HardwareCorrupted:     0 kB
AnonHugePages:         0 kB
ShmemHugePages:        0 kB
ShmemPmdMapped:        0 kB
FileHugePages:         0 kB
FilePmdMapped:         0 kB
CmaTotal:              0 kB
CmaFree:               0 kB
HugePages_Total:       0
HugePages_Free:        0
HugePages_Rsvd:        0
HugePages_Surp:        0
Hugepagesize:       2048 kB
Hugetlb:               0 kB
DirectMap4k:      194496 kB
DirectMap2M:     3999744 kB

# cat /proc/cpuinfo output
processor	: 0
vendor_id	: GenuineIntel
cpu family	: 6
model		: 158
model name	: Intel(R) Core(TM) i7-8750H CPU @ 2.20GHz
stepping	: 10
cpu MHz		: 2207.998
cache size	: 9216 KB
physical id	: 0
siblings	: 1
core id		: 0
cpu cores	: 1
apicid		: 0
initial apicid	: 0
fpu		: yes
fpu_exception	: yes
cpuid level	: 22
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush mmx fxsr sse sse2 ht syscall nx rdtscp lm constant_tsc rep_good nopl xtopology nonstop_tsc cpuid tsc_known_freq pni pclmulqdq monitor ssse3 cx16 pcid sse4_1 sse4_2 x2apic movbe popcnt aes xsave avx rdrand hypervisor lahf_lm abm 3dnowprefetch invpcid_single pti fsgsbase avx2 invpcid rdseed clflushopt md_clear flush_l1d
bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf mds swapgs itlb_multihit srbds
bogomips	: 4415.99
clflush size	: 64
cache_alignment	: 64
address sizes	: 39 bits physical, 48 bits virtual
power management:
```

## Problem 1(b)

## uname command
```
this command-line prints basic information about the OS and its system hardware.
```

## ps command
```
this utility helps us view information related with processes on a system. it stands for "process status"
```

## Clone git Repository 2(b) output:
```
On branch master
Your branch is up to date with 'origin/master'.

nothing to commit, working tree clean
```
