#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

int main()
{
	freopen("200.in", "r", stdin);
	freopen("200.out", "w", stdout);
	int t;
	cin >> t;
	for(int qq = 1; qq <= t; qq++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a > 0 && b > 0 && c > 0){
			if(a+b+c == 180)printf("Case #%d: YES\n", qq);
			else printf("Case #%d: NO\n", qq);
		}
		else printf("Case #%d: NO\n", qq);
	}
	return 0;
}