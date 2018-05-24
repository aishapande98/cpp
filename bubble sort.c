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


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
    	cin >> a[a_i];
    }
    int totalSwaps=0;
for (int i = n-1; i >0; i--) {
    int numberOfSwaps = 0;
    for (int j = 0; j <i; j++) {           
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            numberOfSwaps++;
            totalSwaps++;
        }
    }
    if (numberOfSwaps == 0) {
        break;
    }
}   
 
 cout<<"Array is sorted in "<<totalSwaps<<" swaps."<<endl;

 cout<<"First Element: "<<a[0]<<endl;
     cout<<"Last Element: "<<a[n-1]<<endl;
  return 0;
}
