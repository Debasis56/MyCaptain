#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <map>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <vector>

#include <string>
#include <limits.h>
#include <set>
#define ll long
#define MAX 1e9
using namespace std;
typedef long long lli;
int main(){
    ios_base::sync_with_stdio(false);
    
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n = 5;
    int arr[5];
    int i;
    cout<<"Enter elements: ";
    i = 0;
    while(n--){
    	cin>>arr[i];
    	i++;
    }
    int *ary = arr;
    
    for(i=0; i<5; i++)
    {
    	cout<<*ary<<"\n";
    	ary++;
    }
    return 0;
}

