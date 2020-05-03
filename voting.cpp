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
    cout<<"Enter number of candidates : ";
    int n;
    cin>>n;
    string name[n];
    int age[n];
    int i;
    for(i=0; i<n; i++)
    {
    	cout<<" Enter name for candiate no."<<(i+1)<<" : ";
    	cin>>name[i];
    	cout<<" Enter age for candidate no."<<(i+1)<<" : ";
    	cin>>age[i];
    }
    cout<<"\n---------------------------------------------------\n";
    for(i=0; i<n; i++)
    {
        if(age[i]>=18)
        	cout<<"Hey, "<<name[i]<<" you are elligible for voting\n";
        else
        	cout<<"Sorry, "<<name[i]<<" you are not elligible for voting\n";
    }
    return 0;
}

