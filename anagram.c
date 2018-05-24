#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int dif(int a,int b)
{
    if(a>b)
        return a-b;
    return b-a;
}
int number_needed(string a, string b) 
{
   int i,count1[26]={0},count2[26]={0},l1,l2,ans=0;
   l1=a.length();
   l2=b.length();
   for(i=0;i<l1;i++)
       count1[a[i]-'a']++;
   for(i=0;i<l2;i++)
       count2[b[i]-'a']++;
   for(i=0;i<26;i++)
   {
       ans+=dif(count1[i],count2[i]);
   }
    return ans;
}
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    cout<<number_needed(a, b)<<endl;
    return 0;
}
