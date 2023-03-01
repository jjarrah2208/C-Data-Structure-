#include<bits/stdc++.h>
#define MAX 3
using namespace std;

int Q[MAX];
int f = -1,r = -1;

void printQueue()
{
    int i=f;
    for(;i!=r;i=(i+1)%MAX)
        cout<<Q[i]<<" ";

    cout<<Q[i];
    cout<<endl;
}

void Enqueue(int val)
{
    if((r+1)%MAX==f)
    {
        cout<<"Queue is full!"<<endl;
        exit(0);
    }
    else if(f == -1 && r == -1)
    {
        f++;
        r++;
    }
    else
    {
       r=(r+1)%MAX;
    }
    Q[r] = val;
    printQueue();

}
void Dequeue()
{
    int val;
    if(f == -1 && r == -1)
    {
        cout<<"Queue is empty!"<<endl;
        exit(0);
    }
    else if(f == r)
    {
        f = r = -1;
    }
    else
    {
        val = Q[f];
       f=(f+1)%MAX;
    }
    cout<<"Deleted element: "<<val<<endl;
    printQueue();
}


int main()
{
    Enqueue(5);
    Enqueue(10);
    Enqueue(15);

    Dequeue();
    Enqueue(75);

}
