#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("200.in","r",stdin);
	freopen("abcsecond.out","w",stdout);
	int t;
	int j,i;
	ll m;
	ll n;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		ll satis=0;
		ll unsatis=0;
		scanf("%lld",&m);
		scanf("%lld",&n);
		long long a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if((abs(m-a[i])<=5))
				satis=satis+1;
			else
				unsatis=unsatis+1;
		}
		printf("Case #%d: %lld %lld\n",j,satis,unsatis);
	}
}