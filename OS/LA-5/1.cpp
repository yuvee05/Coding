#include <iostream>
using namespace std;
class Process
{
public:
    int id;
    int arrival;
    int burst;
    int remaining;
    int waiting;
    int completion;

    Process()
    {
        arrival = 0;
        burst = 0;
        remaining = 0;
        waiting = 0;
        completion = 0;
    }
};

void printResult(Process processes[], int n, int sequence[], int seqSize)
{
    cout << "\nProcess Waiting Times: " << endl;
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Process " << processes[i].id + 1 << " -> Waiting Time: " << processes[i].waiting << endl;
        total += processes[i].waiting;
    }
    cout << "Average Waiting Time: " << total / n << endl;
    cout << "Execution Sequence: ";
    for (int i = 0; i < seqSize; i++)
    {
        cout << "P" << sequence[i]+1 << " ";
    }
    cout << endl;
}

void fcfs(Process processes[], int n)
{
    int time = 0;
    int sequence[1000], seqSize = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (processes[j].arrival > processes[j + 1].arrival)
            {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (time < processes[i].arrival)
            time = processes[i].arrival;
        processes[i].waiting = time - processes[i].arrival;
        time += processes[i].burst;
        processes[i].completion = time;
        for (int j = 0; j < processes[i].burst; j++)
        {
            sequence[seqSize] = processes[i].id;
            seqSize++;
        }
    }
    printResult(processes, n, sequence, seqSize);
}

void non_pre_sjf(Process processes[], int n)
{
    int time = 0;
    int sequence[1000], seqSize = 0;
    bool completed[100] = {false};
    int completedCount = 0;

    while (completedCount < n)
    {
        int idx = -1;
        int minBurst = 1000000;
        for (int i = 0; i < n; i++)
        {
            if (!completed[i] && processes[i].arrival <= time && processes[i].burst < minBurst)
            {
                minBurst = processes[i].burst;
                idx = i;
            }
        }
        if (idx == -1)
        {
            time++;
            continue;
        }
        processes[idx].waiting = time - processes[idx].arrival;
        time += processes[idx].burst;
        processes[idx].completion = time;
        completed[idx] = true;
        completedCount++;
        for (int j = 0; j < processes[idx].burst; j++)
        {
            sequence[seqSize++] = processes[idx].id;
        }
    }
    printResult(processes, n, sequence, seqSize);
}

void pre_sjf(Process processes[], int n)
{
    int time = 0;
    int sequence[1000], seqSize = 0;
    bool completed[100] = {false};
    int completedCount = 0;

    while (completedCount < n)
    {
        int idx = -1;
        int minRemaining = 1000000;
        for (int i = 0; i < n; i++)
        {
            if (!completed[i] && processes[i].arrival <= time && processes[i].remaining <= minRemaining)
            {
                minRemaining = processes[i].remaining;
                idx = i;
            }
        }
        if (idx == -1)
        {
            time++;
            continue;
        }
        sequence[seqSize++] = processes[idx].id;
        processes[idx].remaining--;
        time++;
        if (processes[idx].remaining == 0)
        {
            processes[idx].completion = time;
            processes[idx].waiting = processes[idx].completion - processes[idx].arrival - processes[idx].burst;
            completed[idx] = true;
            completedCount++;
        }
    }
    printResult(processes, n, sequence, seqSize);
}

int main()
{
    Process processes[100];
    int ch, n;
    cout << "Enter the no. of processes" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arrival time and burst time for Process " << i + 1 << ": ";
        cin >> processes[i].arrival >> processes[i].burst;
        processes[i].id = i;
        processes[i].remaining = processes[i].burst;
    }
    cout << "1. FCFS" << endl
         << "2. Non-Preemptive SJF" << endl
         << "3. Preemptive SJF" << endl;
    cout << "Enter your choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        fcfs(processes, n);
        break;
    case 2:
        non_pre_sjf(processes, n);
        break;
    case 3:
        pre_sjf(processes, n);
        break;
    default:
        cout << "Wrong Input!" << endl;
    }
    return 0;
}