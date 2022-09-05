#include<iostream>
 
using namespace std;
 
int main()
{
	int n, c = 0, ara[3001] = {0};
	cin >> n;
	
	for(int i = 2; i <= n; i++)
	{
		if(ara[i] == 0)
		{
			for(int j = i; j <= n; j += i) ara[j]++;
		}
		if(ara[i] == 2) c++;
	}
	cout << c << endl;
}
