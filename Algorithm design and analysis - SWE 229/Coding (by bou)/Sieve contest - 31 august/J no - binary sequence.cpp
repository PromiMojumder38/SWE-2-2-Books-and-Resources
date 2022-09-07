#include<bits/stdc++.h>

using namespace std;

const int n = 101865020;
vector<char>ans;
int i, j;
vector<bool> is_prime(n+1, true);
vector<int>prime;

void sieve()
{
	is_prime[0] = is_prime[1] = false;
	is_prime[2] = true;
	for (i = 3; i * i <= n; i += 2) 
	{
	    if (is_prime[i]) 
		{ 
	        for (j = i * i; j <= n; j += 2*i) is_prime[j] = false;
	    }
	}
	for(i = 2; i <= n; i++) if(is_prime[i] && (i == 2 || i % 2 == 1)) prime.push_back(i);
	//cout << prime.size();
	for(i = 0; i < prime.size(); i++) 
	{
		while(prime[i] > 0)   
		{    
			ans.push_back((prime[i] % 2) + '0' - 0);    
			prime[i] /= 2;    
		}    
	}
	//cout << ans.size();
}

int main()
{
	sieve();
	int t;
	while(t--)
	{
	    int sz;
	    cin >> sz;
	    int cnt = 0;
	    for(i = 0; i < sz; i++) if(ans[i] == '1') cnt++;
	    cout << cnt << endl;
	}
}
