#include <iostream>

using namespace std;

int main()
{
	// For file handling
	freopen("200.in", "r", stdin);
	freopen("200.out", "w", stdout);
	int t;
	cin >> t;
	for(int qq = 1; qq <= t; qq++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a > 0 && b > 0 && c > 0){ // well any angle cannot be 0 or less than it
			if(a+b+c == 180)printf("Case #%d: YES\n", qq);
			else printf("Case #%d: NO\n", qq);
		}
		else printf("Case #%d: NO\n", qq);
	}
	return 0;
}