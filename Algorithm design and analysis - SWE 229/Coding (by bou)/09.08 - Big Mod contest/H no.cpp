#include <bits/stdc++.h>

using namespace std;

const int sz = 10e6;
#define ll long long

ll ans[10][10]; 

ll comb(ll n, ll r)
{
	if(n == r || r == 0) return 1;
	else return comb(n-1, r-1) + comb(n-1, r);
}
int main() 
{
    for(int i = 0; i < 10; i++)
     {
          for(int j = 0; j < 10; j++) cout << ans[i][j] << " ";
          cout << endl;
     }
    /*int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
    	int n, r;
		cin >> n >> r;
		printf("Case %d: ", i);
		cout << comb(n, r) % 1000003 << endl;
	}*/
}
