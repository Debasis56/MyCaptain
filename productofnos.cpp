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
    cout<<"Enter two numbers: ";
    float a, b;
    cin>>a>>b;
    cout<<fixed<<setprecision(1);
    cout<<(a*b);
    return 0;
}