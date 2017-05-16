#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("500.in","r",stdin);
	freopen("500.out","w",stdout);
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int sum =0;
			int n;
			int e;
			scanf("%d%d",&n,&e);
			int size = e*2;
			int a[size];
			for(int j=0;j<size;j++)
				scanf("%d",&a[j]);
			n=n-1;
			sum = e-n;
			printf("Case #%d: %d\n",i,sum);
		}
	return 0;
}
