#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree [10000000][40];
int compare(const void*p1,const void*p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=1;t<=T;t++)
	{
		int N=0;
		while(gets(tree[N]))
		{
			if(tree[N][0]==0) break;
			N++;
		}
		if(t>1) printf("\n");
		//printf("Test Case %d: %d lines\n",t,N);
		qsort(tree, N,   40   , compare);//字串排序
		//要排陣列 N個 單位大小 比大小的函式
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);
		}
	}
	return 0;
}
