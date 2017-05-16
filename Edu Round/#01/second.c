#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("200.in","r",stdin);
	freopen("abc2.out","w",stdout);
	int n,num,sum=0;
	int t,r,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		num = n;
		while(n>0)
		{
			r = n%10;
			n/=10;
			sum+=r;
		}
		printf("Case #%d: %d\n",i,sum);
		sum=0;
	}
	return 0;
}