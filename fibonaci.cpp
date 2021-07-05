#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
#define CLK_TCK CLOCKS_PER_SEC
void fibonacci(int n);
int main(){
    clock_t start,end;
    int n;
    n=rand()%10;
    cout<<n;
    cout<<"fibonacci series\n";
    cout<<"0 ";
     start=clock();
    fibonacci(n);
     end=clock();
    cout<<"time taken is "<<(float)(end-start)/CLOCKS_PER_SEC;
    return 0;
}
void fibonacci(int n)
{
   static int first=0,second=1,sum;

    if(n>0)
    {
        sum=first+second;
        first=second;
        second=sum;
        cout<<first<<" ";
        fibonacci(n-1);
    }
    
}