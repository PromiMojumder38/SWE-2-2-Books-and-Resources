#include<bits/stdc++.h>

using namespace std;

vector<int>tot;
const int n = 1000000;
vector<int> div[n+1];
int i, j;
 
void findDivisor()
{
    for(i = 1; i <= n; i++) for(j = i; j <= n; j += i) div[j].push_back(i);
}

void func()
{
    tot[0] = 0;
    tot[1] = 1;
    for (i = 2; i <= n; i++) tot[i] = i - 1;
    for (i = 2; i <= n; i++) for(j = 2 * i; j <= n; j += i) tot[j] -= tot[i];
}

int main()
{
	func();
	int t;
	cin >> t;
	while(t--)
	{
		int N;
		cin >> N;
		ans = 
		cout << tot[N] << endl;
	}
}
