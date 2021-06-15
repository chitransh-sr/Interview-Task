
#include <bits/stdc++.h>
using namespace std;


void printUncommon(string str1, string str2)
{
	int a1 = 0, a2 = 0;
	for (int i = 0; i < str1.length(); i++) {

		
		int ch = int(str1[i]) - 'a';

		
		a1 = a1 | (1 << ch);
	}
	for (int i = 0; i < str2.length(); i++) {

		
		int ch = int(str2[i]) - 'a';

		a2 = a2 | (1 << ch);
	}


	int ans = a1 ^ a2;

	int i = 0;
	while (i < 26) {
		if (ans % 2 == 1) {
			cout << char('a' + i)<<",";
		}
		ans = ans / 2;
		i++;
	}
}


int main()
{
	string str1 = "LOS ANGELES";
	string str2 = "LAS VEGAS";

	printUncommon(str1, str2);
	

	return 0;
}
