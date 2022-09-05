#include<bits/stdc++.h>

using namespace std;


void sieve(int n)
{
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 3; i * i <= n; i += 2) {
	    if (is_prime[i]) { //checks odd only except 2
	        for (int j = i * i; j <= n; j += 2*i)
	            is_prime[j] = false;
	    }
	}
	for(int i = 0; i <= n; i++) if(is_prime[i] && (i % 2 != 0 || i == 2)) printf("%d\n", i);
}

int main()
{
	sieve(1000);
}
