#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
#define CLK_TCK CLOCKS_PER_SEC
int main()
{
   clock_t start,end;
    int key,flag=0;
    long long m;
    cout<<"enter key and m";
    cin>>key>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        a[i]=rand()%100;

    }
        for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    start=clock();
    for(int i=0;i<m;i++)
    {
        if(a[i]==key)
        {
            cout<<"element foud at position "<<i;

        }
        if(i==m-1)
        {
            cout<<"element not found\n";
        }
    }
    end=clock();
    cout<<"time taken is "<<(float)(end-start)/CLOCKS_PER_SEC;
int main();
    return 0;
    }
