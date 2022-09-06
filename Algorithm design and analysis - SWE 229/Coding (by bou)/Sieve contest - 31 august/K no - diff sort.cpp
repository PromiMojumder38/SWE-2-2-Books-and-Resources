#include<bits/stdc++.h>

using namespace std;

const int n = 2000001;
int i, j;
int spf[n];


struct node{
	int num, val;
};

node ara[n];

bool sortt(node a, node b)
{
	if(a.val == b.val) return a.num < b.num;
	return a.val < b.val;
}

void sieve()
{
	for (i = 1; i < n; i++) 
	{
	    if(i % 2 == 0) spf[i] = 2;
	    else spf[i] = i;
	}
	for (i = 3; i * i < n; i += 2)
	{
		for (j = i * i; j < n; j += i) if (spf[j] == j) spf[j] = i;
	}
	//for (i = 157; i < n; i++) cout << i << " " << spf[i] << endl;
	for (i = 1; i < n; i++) 
	{
	    int cnt = 0;
	    int x = i;
    	while (x > 1)
    	{
    		cnt++;
    		x /= spf[x];
    	}
    	ara[i].num = i;
        ara[i].val = cnt;
        //cout << ara[i].num << " " << ara[i].val << endl;
	}
	sort(ara, ara + n, sortt);
	//for (i = 1; i < n; i++) cout << ara[i].num << " " << ara[i].val << endl;
}

int main()
{
    sieve();
    i = 1;
    while(1)
    {
        int N;
		cin >> N;
		if(N == 0) return 0; 
        cout << "Case " << i << ": " << ara[N].num << endl;
        i++;
    }
}
