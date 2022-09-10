#include<bits/stdc++.h>

using namespace std;

const int n = 100001;
vector<bool> is_prime(n+2, true);

void sieve()
{
	is_prime[0] = is_prime[1] = false;
	is_prime[2] = true;
	for (int i = 2; i * i <= n; i ++) 
	{
	    if (is_prime[i]) 
		{ //checks odd only except 2
	        for (int j = i * i; j <= n; j += i) is_prime[j] = false;
	    }
	}
}

int main()
{
	sieve();
	int n;
	cin >> n;
	
	if(n < 3) cout << "1" << endl;
	else cout << "2" << endl;
	
	for(int i = 2; i <= n + 1; i++) 
	{
		if(is_prime[i]) cout << "2 ";
		else cout << "1 ";
	}
	cout << endl;
}
