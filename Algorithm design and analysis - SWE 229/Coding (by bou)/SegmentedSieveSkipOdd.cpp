#include<bits\stdc++.h>

using namespace std;


void sieve(int n)
{
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
	    if (is_prime[i] && (i % 2 == 1 || i == 2)) { //checks odd only except 2
	        for (int j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
	for(int i = 0; i <= n; i++) if(is_prime[i]) printf("%d\n", i);
}

int main()
{
	sieve(1000);
}
