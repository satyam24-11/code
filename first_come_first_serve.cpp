#include <bits/stdc++.h>
using namespace std;

struct process
{
    int id;
    int burst;
};

typedef struct process proc;

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    proc p[n], temp;
    int i, j;

    // take input for the burst time //
    
    for (i = 0; i < n; i++)
    {
        p[i].id = i;
        cout << "Enter the burst time of process P " << i << ": ";
        cin >> p[i].burst;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[j].burst < p[i].burst)
            {
                temp.id = p[j].id;
                temp.burst = p[j].burst;
                p[j].id = p[i].id;
                p[j].burst = p[i].burst;
                p[i].id = temp.id;
                p[i].burst = temp.burst;
            }
        }
    }

    int wt = 0;
    int twt = 0;
    cout << "\nScheduling information:\n";
    for (i = 0; i < n; i++)
    {
        twt += wt;
        cout << "Process ID: " << p[i].id << "\t Waiting time: " << wt << endl;
        wt += p[i].burst;
    }

    cout << "\nAverage waiting time: " << ((float)twt / n) << endl;
    return 0;
}
