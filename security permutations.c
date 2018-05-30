#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int f[20];
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<f[f[i]]<<endl;
    }
    return 0;
}
