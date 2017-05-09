#include <iostream>

using namespace std;

// To check if you got all +s
bool check(char s[])
{
	int l = strlen(s);
	for(int i = 0; i < l; i++)
		if(s[i] != '+')
			return false;

	return true;
}

int main()
{
	freopen("500.in", "r", stdin);
	freopen("500.out", "w", stdout);
	int tt,j;
	scanf("%d", &tt);
	for(int qq = 1; qq <= tt; qq++){
		
		char s[101];
		scanf("%s", s);
		// Check if it is already all +s
		int l = strlen(s);
		if(check(s))printf("Case #%d: 0\n", qq);
		else
		{
			int count = 0;
			// Start from right, everytime you get a -, invert all from that index position to left, and increment your count
			//Do the magic!
			for(int i = l-1; i >= 0; i--)
			{
				if(s[i] != '+')
				{
					for(int j = 0; j <= i; j++)
					{
						if(s[j] == '+')s[j]='-';
						else s[j]='+';
					}
					count++;
				}
				if(check(s))break;
			}
			printf("Case #%d: %d\n", qq, count);
		}
	}
	return 0;
}