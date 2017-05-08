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
	freopen("2_1493873240.in", "r", stdin);
	freopen("2_1493873240.out", "w", stdout);
	int tt,j;
	scanf("%d", &tt);
	for(int qq = 1; qq <= tt; qq++){
		
		char s[101];
		scanf("%s", s);

		int l = strlen(s);
		if(check(s))printf("Case #%d: 0\n", qq);
		else
		{
			int count = 0;
				
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