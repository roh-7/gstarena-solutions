#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char c;
	int i=1;
	freopen("100.in","r",stdin);
	freopen("100.out","w",stdout);
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%c",&c);
		if(c=='b')
		{
			printf("Case #%d: BattleShip\n",i);
		}
		else if(c=='B')
		{
			printf("Case #%d: BattleShip\n",i);
		}
		else if(c=='c')
		{
			printf("Case #%d: Cruiser\n",i);
		}
		else if(c=='C')
		{
			printf("Case #%d: Cruiser\n",i);	
		}
		else if(c=='d')
		{
			printf("Case #%d: Destroyer\n",i);
		}
		else if(c=='D')
		{
			printf("Case #%d: Destroyer\n",i);	
		}
		else if(c=='f')
		{
			printf("Case #%d: Frigate\n",i);
		}
		else if(c=='F')
		{
			printf("Case #%d: Frigate\n",i);	
		}
		else
		{}
	}
	return 0;
}