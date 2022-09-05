#include<bits/stdc++.h>

using namespace std;

int main()
{
    bool a[1001];
    memset(a, true, 1001);
    int i, j;
    a[0] = a[1] = false;
    for(i = 2; i <= 1000; i++)
    {
        if(a[i] && (i % 2 == 1 || i == 2))
        {
           for(j = i*i; j <= 1000; j+=i)
           {
               a[j] = false;
           }
        }
    }
    vector<int>p;
    for(i = 0; i < 1000; i++) if(a[i]) p.push_back(i);
	//for(i = 0; i < p.size(); i++) cout << p[i] << " ";
	vector<int>pp;
    for(i = 0; i < p.size()-1; i++) pp.push_back(p[i] + p[i+1] + 1);
    //for(i = 0; i < pp.size(); i++) cout << pp[i] << " ";
    
    int n, k, cnt = 0;
    cin >> n >> k;
    for(int j = n; j >= 2; j--)
    {
    	if(a[j])
    	{
    		for(i = 0; i < pp.size(); i++) 
	    	{
		    	if(pp[i] == j) 
		    	{
		    		cnt++;
		    		//printf("%d\n", pp[i]);
		    		if(cnt == k) break;
				}
		    	if(cnt == k) break;
		    }
		}
	    if(cnt == k) break;
	}
	if(cnt >= k) printf("YES\n");
	else printf("NO\n");
}
