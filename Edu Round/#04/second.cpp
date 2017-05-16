#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("200.in","r",stdin);
	freopen("200.out","w",stdout);
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			ll n;
			ll n1;
			ll n2;
			ll sum=0;
			scanf("%lld%lld%lld",&n,&n1,&n2);
			sum=n1+n2;
			sum=sum-n;
			printf("Case #%d: %lld\n",i,sum);
		}
	return 0;
}
			// printf("Case #%d: YES\n",i);
			// printf("Case #%d: NO\n",i);