#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

unsigned long factiterative(unsigned long n)
{
    unsigned long f=1;
    for(unsigned long i=1;i<=n;i++)
    f=f*i;

    return f;
}
unsigned long factrecursive(unsigned long n)
{
    if(n==1)

        return 1;

    return n*factrecursive(n-1);
}
int main()
{


    unsigned long n;
    cin>>n;

    auto start = high_resolution_clock::now();
cout<<factiterative(n)<<endl;
    auto end = high_resolution_clock::now();

    double Iterative = (duration_cast<nanoseconds>(end-start)).count();
    cout<< Iterative <<endl;

    start = high_resolution_clock::now();
    cout<<factrecursive(n)<<endl;
    end = high_resolution_clock::now();

    double Recursive = (duration_cast<nanoseconds>(end-start)).count();
    cout<< Recursive <<endl;
}
