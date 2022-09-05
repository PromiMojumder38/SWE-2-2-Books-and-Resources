#include<bits/stdc++.h>

using namespace std;

const int n = 2*10e6+1;
int i, j;
vector<int>ans;

struct node{
	int num, val;
};

bool sortt(node a, node b)
{
	if(a.val != b.val) return a.val < b.val;
 	else return a.num < b.num;
}

node ara[n];

void task()
{
	ara[0].num = 0, ara[0].val = 0;
	ara[1].num = 1, ara[1].val = 1;
	for(j = 2; j < n; j++)
	{
		int cnt = 0;
		while (j % 2 == 0) j /= 2, cnt++;
    	for (i = 3; i <= sqrt(j); i += 2) 
		{	
			while (j % i == 0) j /= i, cnt++;
		}
		if(j < 2) cnt++;
		ara[i].num = i, ara[i].val = cnt;
	}
	sort(ara, ara+n, sortt);
	for(i = 0; i < n; i++) cout << ara[i].num << endl;
}

int main()
{
    task();
    int t;
    cin >> t;
    while(t--)
    {
        long long N, sq;
		cin >> N;
        //cout << v[N-1] << endl;
    }
}
