#include<bits/stdc++.h>

using namespace std;

#define ll long long
const int n = 9999999;
ll i, j, k;
vector<bool> is_prime(n+1, true);
set<ll>ans;

void sieve()
{
	is_prime[0] = is_prime[1] = false;
	is_prime[2] = true;
	for (i = 3; i * i <= n; i+=2) 
	{
	    if (is_prime[i]) 
		{ 
	        for (j = i * i; j <= n; j += 2*i) is_prime[j] = false;
	    }
	}
	//for (i = 0; i <= n; i ++) if(is_prime[i]) cout << i << endl;
    for(j = 1; j*j <= n; j++)
    {
        for(k = 1; k*k*k*k <= n; k++)
        {
            ll temp = j*j + k*k*k*k ;
            if(temp > n) break;
            if(is_prime[temp] && (temp == 2 || temp % 2 == 1)) ans.insert(temp);
        }
    }
	//for(auto i : ans) cout << i << endl;
}

int main()
{
	sieve();
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int cnt = 0;
		for(auto i : ans) 
		{
		    if(i > n) break;
		    cnt++;
		}
		printf("%d\n", cnt);
	}
}





