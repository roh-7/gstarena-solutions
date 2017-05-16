#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("500.in","r",stdin);
	freopen("abcthird.out","w",stdout);
	int t;
	int i,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
		{
			ll sum=0;
			int n;
			scanf("%d",&n);
			int a[n];
			int b[n];
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(i=0;i<n;i++)
				scanf("%d",&b[i]);
			sort(a,a+n,greater<int>());
			sort(b,b+n);
			for(i=0;i<n;i++)
			{
				sum = sum+(a[i]*b[i]);
			}
			printf("Case #%d: %lld\n",j,sum);
		}
	return 0;
}