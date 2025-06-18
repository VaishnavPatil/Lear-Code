#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
    map<int, int>mp;
    for(auto num : arr)
    {
        mp[num]++;
    }
    vector<int>res;
    for(auto x : mp)
    {
        if(x.second==1)
        {
            res.push_back(x.first);
        }
    }
    
    for(auto p : res)
    {
        cout << p;
    }
	return 0;
}
