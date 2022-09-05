#include<bits/stdc++.h>

using namespace std;

int ans[1000][1000] = {-1};

int ks(int mw, int w[], int v[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= mw; j++)
		{
			if(ans[i][j] == -1)
			{
				if(i == 0 || j == 0) ans[i][j] = 0;
				else if(w[i] <= j) 
				{
					int r1 = ans[i-1][mw - w[i-1]] + v[i-1];
					int r2 = ans[i-1][mw];
					ans[i][j] = max(r1, r2);
					cout << "ans " << ans[i][j] << endl;
				}
				else ans[i][j] = ans[i-1][mw];
			}
		}
	}
	return ans[n][mw];
}

int main()
{
	int mw, n;
	cout << "enter weight: ";
	cin >> mw;
	cout << "n: ";
	cin >> n;
	int w[n], v[n];
	for(int i = 0; i < n; i++) 
	{
	    cout << "enter wi: ";
	    cin >> w[i]; 
	    cout << "enter vi: ";
	    cin >> v[i];
	}
	cout << ks(mw, w, v, n);
}
