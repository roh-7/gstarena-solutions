#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("100.in","r",stdin);
	freopen("100.out","w",stdout);
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			ll n;
			scanf("%lld",&n);
			n=n+(n/2);
			printf("Case #%d: %lld\n",i,n);
		}
	return 0;
}