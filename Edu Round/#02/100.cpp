#include <iostream>

using namespace std;

int main()
{
	// For file handling
	freopen("100.in", "r", stdin);
	freopen("100.out", "w", stdout);
	int t;
	cin >> t;
	for(int qq = 1; qq <= t; qq++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(b-a == c-b)printf("Case #%d: YES\n", qq);
		else printf("Case #%d: NO\n", qq);
	}
	return 0;
}