#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if (n<2)
    {
        return false;
    }
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int* prime = new int[n];
    int count = 0, num = 2;
    while(count<n)
    {
        if(isPrime(num))
        {
            prime[count]=num;
            count++;
        }
        num++;
    }
    cout<<"\n\n";
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            {
                cout<<prime[i]<<" ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
    return 0;
}