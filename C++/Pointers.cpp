#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fun(int a, int b)
{
    int ans1 = a+b;
    int ans2 = abs(a-b);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;
    cin>>a>>b;
    fun(a,b);
    return 0;
}
