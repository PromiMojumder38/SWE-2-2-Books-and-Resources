#include<bits\stdc++.h>

using namespace std;

int N = 1000;

bool check(int N,int pos)
{
	return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{	
	return N = N | (1<<pos);
	//return N;
}

void sieve()
{
    int prime[N]; 
	int status[N/32];
	int i, j, sqrtN; 
    sqrtN = int( sqrt( N ) );
    for( i = 3; i <= sqrtN; i += 2 ) 
    {
		if( check(status[i/32],i%32)==0) //what is status
		{
	 		for( j = i*i; j <= N; j += 2*i )
			{
				status[j/32]=Set(status[j/32],j % 32);
	 		}
		}
	}
	puts("2");
	for(i=3;i<=N;i+=2)
		if( check(status[i/32],i%32)==0)
	 	printf("%d\n",i);
	for(i = 0; i < N/32; i++) printf("%d\n",status[i]);
	 	
}

int main()
{
	sieve();
}
