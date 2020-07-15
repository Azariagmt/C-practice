/*
 Operating Systems project.
 First Come First Serve (FCFS) process scheduling algorithm.
 Submitted to: Instructor Abdi.
 By : Abreham Gezahegn       0062/10
    : Adenawit Muluken       1356/10
    : Azaria Gebremichael    0185/10
    : Betelhem Murad         0253/10
    : Bethel Yohannes        0257/10
    : Bethelhem Demissie     0258/10
*/

#include <stdio.h>

typedef struct fcfs
{
    int process_number;     //Process Number
    int service_time;       //Service Time
    int arrival_time;       //Arrival Time
    int turn_around_time;   //Turn Around Time
    int waiting_time;       //Waiting Time
}fcfs;

int sort_processes(fcfs [], int);

int main()
{
    int n, i, temp = 0, av_turn_around_time = 0, av_waiting_time = 0;

    printf ("Please enter the number of processes: ");
    scanf ("%d", &n);  // store number of processes from user input.
    fcfs arr[n];       //Array of type fcfs
    int tct[n];

    for (i = 0; i < n; i++)
    {
        arr[i].process_number = i;
        printf ("Enter the process %d data\n", arr[i].process_number);
        printf ("Enter CPU Service: ");
        scanf ("%d", &(arr[i].service_time));
        printf ("Enter the arrival time: ");
        scanf ("%d", &(arr[i].arrival_time));
    }
    
    //sort_processesing the processes according to their arrival time
    sort_processes(arr, n);

    printf("*******************************************************************************************\n");
    printf ("Process\t\tService Time\tArrival Time\tTurn Around Time\tWaiting Time\n");
    for (i = 0; i < n; i++)
    {
        tct[i] = temp + arr[i].service_time;
        temp = tct[i];
        arr[i].turn_around_time = tct[i] - arr[i].arrival_time;
        arr[i].waiting_time = arr[i].turn_around_time - arr[i].service_time;
        av_turn_around_time = av_turn_around_time + arr[i].turn_around_time;
        av_waiting_time = av_waiting_time + arr[i].waiting_time;
        printf ("%5d\t%15d\t\t%9d\t%12d\t%12d\n", arr[i].process_number, arr[i].service_time, arr[i].arrival_time, arr[i].turn_around_time, arr[i].waiting_time);
    }

    printf ("Average Turn Around Time: %d\nAverage Waiting Time: %d\n", av_turn_around_time / n, av_waiting_time / n);
    printf("*******************************************************************************************\n");
    
    return 0;
}

int sort_processes(fcfs arr[], int n)
{
    int i, j;
    fcfs k;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            //Sorting the processes according to their arrival time
            if (arr[i].arrival_time > arr[j].arrival_time)
            {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
    return 0;
}