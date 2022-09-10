#include <bits/stdc++.h>

using namespace std;
 
int x, y, gcdd;

void ext_gcd(int a, int b)
{
    if(b == 0)
    {
        x = 1;
        y = 0, 
        gcdd = a;
        return;
    }
    else
    {
        ext_gcd(b, a%b);
        int temp = y;
        int temp2 = x - (a / b) * y;
        x = temp;
        y = temp2;
    }

    //cout << x << " " << y << " " << gcdd << endl;
}

int main() 
{
    //ext_gcd(4, 6);
    
	int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        ext_gcd(a, b);
        cout << x << " " << y << " " << gcdd << endl;
    }
}
