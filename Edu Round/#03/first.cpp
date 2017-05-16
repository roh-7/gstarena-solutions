#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll reverse(ll n)
{
	ll sum=0;
	int rem;
	while(n>0)
	{
		rem = n%10;
		sum=(sum*10)+rem;
		n/=10;
	}
	return sum;
}
int main()
{
	freopen("100.in","r",stdin);
	freopen("abcfirst.out","w",stdout);
	int t;
	ll n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%lld",&n);
		printf("Case #%d: %lld\n",i,(n<reverse(n)?reverse(n):n));
	}
}