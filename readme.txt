**************************************************************
 Operating Systems project.
 First Come First Serve (FCFS) process scheduling algorithm.
 Submitted to: Instructor Abdi.
 By : Abreham Gezahegn       0062/10
    : Adenawit Muluken       1356/10
    : Azaria Gebremichael    0185/10
    : Betelhem Murad         0253/10
    : Bethel Yohannes        0257/10
    : Bethelhem Demissie     0258/10
**************************************************************

the first-come, first-served ( FCFS ), is the simplest CPU 
-scheduling algorithm. With this scheme, the process that requests the
CPU first is allocated the CPU first.

##Requirements

gcc - GNU project C and C++ compiler

##Documentation

*cd in to directory where fcfs.c is located, compile with gcc command
(gcc fcfs.c -o fcfs)
*execute program with ./fcfs

##About this program

First Come First Serve (FCFS) process scheduling algorithm simulating
program written in C.

##Interactive environment

*Program prompts for the number of processes
*for each process that exists the user is then prompted to enter the
 CPU service and the arrival time
*After completion of all prompted data the program outputs to the user
 a tabulated format of the processes starting from the first process(process 0) 
 with respect to the entered arrival time. The table contains Service Time, 
 Arrival Time, Turn Around Time and Waiting Time. 
 *Program also calculates and outputs Average Turn Around Time and Average 
 Waiting Time.
 
 ##Outputs expected

 If user enters the same arrival time for different processes the arrival of 
 processes will be arranged in order of program prompt. Thus later entered 
 processes will have a larger waiting time.

