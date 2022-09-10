#include<bits/stdc++.h>

using namespace std;

#define ll long long
const int n = 10e4;
ll i, j;
vector<bool> is_prime(n+1, true);
vector<ll> sq_prime;

void sieve()
{
	is_prime[0] = is_prime[1] = false;
	is_prime[2] = true;
	for (i = 3; i * i <= n; i+=2) 
	{
	    if (is_prime[i]) 
		{ //checks odd only except 2
	        for (j = i * i; j <= n; j += 2*i) is_prime[j] = false;
	    }
	}
	for(i = 2; i <= n; i++) if(is_prime[i] && (i == 2 || i % 2 == 1)) sq_prime.push_back(i*i);
	//for(i = 0; i < 100; i++) cout << sq_prime[i] << " ";
	//cout << sq_prime.size();
}

int main()
{
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		ll N, k;
		cin >> N >> k;
		int choice = 0, like = 0;
		for(i = 0; i < sq_prime.size(); i++) 
		{
			if(sq_prime[i] <= N)
			{
				choice++;
				if(sq_prime[i] > k) like++;
			}
			else break;
		}
		cout << choice << " " << like << "\n";
	}
}
