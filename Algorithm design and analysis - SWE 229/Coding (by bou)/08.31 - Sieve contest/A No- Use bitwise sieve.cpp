#include<bits/stdc++.h>

using namespace std;

const int N = 10e7;
vector<int> primee;
int status[N/32];

bool check(int N,int pos)
{
	return (bool)(N & (1<<pos));
}

int Set(int N,int pos)
{	
	return N = N | (1<<pos);
}

void sieve()
{
	int i, j;
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
	primee.push_back(2);
	for(i = 3; i <= N; i += 2) if(check(status[i/32], i%32) == 0) primee.push_back(i);
	for(i = 0; i < primee.size(); i+=100) printf("%d\n",primee[i]);
	 	
}

int main()
{
	sieve();
}
