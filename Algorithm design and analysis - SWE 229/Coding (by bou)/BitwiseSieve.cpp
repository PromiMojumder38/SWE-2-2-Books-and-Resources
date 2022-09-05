#include<bits\stdc++.h>

using namespace std;

#define ll long long
ll N = 100000000;
vector<ll> prime;

bool check(ll N, ll pos)
{
	return (bool)(N & (1<<pos));
}

ll Set(ll N, ll pos)
{	
	return N = N | (1<<pos);
}

void sieve()
{
	ll status[N/32];
	ll i, j;
    for(i = 3; i * i <= N; i += 2) 
    {
		if(check(status[i/32],i%32)==0) //what is status
		{
	 		for(j = i*i; j <= N; j += 2*i)
			{
				status[j/32]=Set(status[j/32],j % 32);
	 		}
		}
	}
	puts("2");
	for(i = 3; i <= N; i += 2) if(check(status[i/32], i%32) == 0) cout << i << " ";
	//for(i = 0; i < N; i++) printf("%d\n",status[i]);
	 	
}

int main()
{
	sieve();
}
