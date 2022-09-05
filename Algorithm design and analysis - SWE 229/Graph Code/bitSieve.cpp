#include <bits/stdc++.h>
using namespace std;

int N = 100 ;
int prime[100] ;
int status[100/32];

bool check(int N, int pos)
{
    return (bool)(N & (1<<pos)) ;
}

int setB(int N ,int pos)
{
    N = N | (1<<pos) ;
    return N;
}
void sieve()
{
    int i , j ,sqrtN;
    sqrtN = int(sqrt(N)) ;
    for( i = 3 ; i <= sqrtN ; i += 2)
    {
        if(check(status[i/32] , i%32) == 0)
        {
            for(j = i*i ; j <=N ; j+=2*i)
            {
                status[j/32] = setB(status[j/32] , j%32) ;
            }
        }
    }

    puts("2") ;
    for(i =3 ; i <= N ; i+=2)
    {
        if(check(status[i/32] , i%32) == 0) cout << i << endl;
    }
    
}
int main()
{
    sieve();
}