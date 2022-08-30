#include<bits\stdc++.h>

using namespace std;

void kmp(string text, string pat)
{
	int lps[pat.length()];
	int i = 0, j = 1;
	while(j < pat.length())
	{
		if(pat[i] == pat[j]) lps[j] = i + 1, i++, j++;
		else if(i != 0) i = lps[i-1];
		else lps[j] = i, j++;
	}
	
	for(i = 0; i < pat.length(); i++) cout << lps[i] << " ";
	/*i = 0, j = 0;
	bool found = false;
	while(i < text.length())
	{
		if(text[i] == pat[j]) i++, j++;
		else if(j != 0) j = lps[j-1];
		else i++; 
		if (j == pat.length()) 
		{
	        cout << "found match at : " << (i - pat.length()) << endl;
	        j = lps[j-1];
	        found = true;
	    }
	}
    if (!found) cout << "not found" << endl;*/
}

int main()
{
	string t, p;
	cin >> t >> p;
	kmp(t, p);
}
