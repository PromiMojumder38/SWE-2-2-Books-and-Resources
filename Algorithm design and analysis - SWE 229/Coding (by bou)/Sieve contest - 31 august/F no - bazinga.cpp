#include<bits/stdc++.h>

using namespace std;

#define ll long long 
const int n = 10e6;
ll i, j;
vector<ll>v, ans;
vector<bool> is_prime(n+1, true);

int main()
{
    is_prime[0] = is_prime[1] = false;
	
	for (i = 3; i * i <= n; i++) 
	{
	    if (is_prime[i]) 
		{ //checks odd only except 2
	        for (j = i * i; j <= n; j += 2*i)
	            is_prime[j] = false;
	    }
	}
	
	v.push_back(2);
	for(i = 3; i <= n; i+=2) if(is_prime[i]) v.push_back(i);
	//for(i = 0; i < 11; i++) cout << v[i] << " ";
	//cout << v[v.size()-1];
	for(i = 0; i < v.size(); i++) 
	{
		for(j = i+1; j < v.size(); j++) 
		{
		    if(v[i]*v[j] > 1.053*10e7) break;
		    ans.push_back(v[i]*v[j]);
		}
	}
	
	sort(ans.begin(), ans.end());
	//cout << v.size() << " " << ans.size() << endl;
	//for(i = 0; i < 11; i++) cout << ans[i] << " ";
	int t;
    cin >> t;
    
    while(t--)
    {
        long long N;
		cin >> N;
        cout << ans[N-1] << endl;
    }
}
