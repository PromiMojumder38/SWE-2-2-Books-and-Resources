#include<bits/stdc++.h>

using namespace std;

#define ll long long
const int n = 10e6;
ll i, j, k;
vector<bool> is_prime(n+1, true);
vector<ll>prime;
vector<ll>ans(n+1, 0);

void sieve()
{
	is_prime[0] = is_prime[1] = false;
	is_prime[2] = true;
	for (i = 3; i * i <= n; i+=2) 
	{
	    if (is_prime[i] && (i == 2|| i % 2 == 1)) 
		{ //checks odd only except 2
	        for (j = i * i; j <= n; j += 2*i) is_prime[j] = false;
	    }
	}
	for(i = 0; i <= n; i++)  if(is_prime[i]) prime.push_back(i);
	cout << "sz " << prime.size();
	ans[2] = 1;
	for(i = 0; i < prime.size(); i++)
	{
		int cnt = 0;
		for(j = 1; j*j <= prime[i]; j++)
		{
			for(k = 1; k*k*k*k <= prime[i]; k++)
			{
				if(j*j + k*k*k*k > prime[i]) break;
				else cnt++;
			}
		}
		ans[prime[i]] = cnt;
	}
	//for(i = 0; i <= 10; i++) cout << ans[i] << endl;
}

int main()
{
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << ans[n] << endl;
	}
}
