#include<bits\stdc++.h>

using namespace std;


void sieve(int N)
{
	vector<int> lp(N+1);
	vector<int> pr;
	
	for (int i=2; i <= N; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back(i);
	    }
	    for (int j=0; j < (int)pr.size() && pr[j] <= lp[i] && i*pr[j] <= N; ++j) {
	        lp[i * pr[j]] = pr[j];
	    }
	}
	for(int i = 0; i < pr.size(); i++) printf("%d\n", pr[i]);
}

int main()
{
	sieve(1000);
}
