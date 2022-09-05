#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define n 1000000000

vector<bool> is_prime(n+1, true);
void sieve()
{
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (ll i = 3; i * i <= n; i += 2) 
	{
	    if (is_prime[i]) 
		{ 
	        for (ll j = i * i; j <= n; j += 2*i) is_prime[j] = false;
	    }
	}
}

int main()
{
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		ll a, b;
		cin >> a >> b;
		for(ll i = a; i <= b; i++) if(is_prime[i] && (i % 2 != 0 || i == 2)) cout << i << " ";
		cout << endl;
	}
}
