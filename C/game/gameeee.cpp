#include<stdio.h>
int main()
{
	int a[10][10]={ };
	int i,j,p[10]={1,20,32,40,43,60,67,80,99,45};
	for(i=0;i<10;i++)
	{
		a[p[i]/10][p[i]%10]=18;
	}
//	printf("%d",(a[(p[20]/10)][(p[20]%10)+1]));
	for(i=0;i<10;i++)
	{
		
		/*if((a[(p[i]/10)][(p[i]%10)+1])!='B'||(a[(p[i]/10+1)][(p[i]%10)])!='B'||(a[(p[i]/10)][(p[i]%10)-1])!='B'||(a[(p[i]/10)-1][(p[i]%10)])!='B')
		{
			(a[(p[i]/10)][(p[i]%10)+1])=(a[(p[i]/10+1)][(p[i]%10)])=(a[(p[i]/10)][(p[i]%10)-1])=(a[(p[i]/10)-1][(p[i]%10)])=++d;	
		}*/
		if((a[(p[i]/10)][(p[i]%10)+1])!=18&&((p[i]/10)>=0)&&((p[i]%10)+1)>=0)
			(a[(p[i]/10)][(p[i]%10)+1])=(((((a[(p[i]/10)][(p[i]%10)+1]))))+1);
			printf("%c",a[(p[i]/10)][(p[i]%10)+1]);
		if((a[(p[i]/10)+1][(p[i]%10)])!=18&&(((p[i]/10)+1)>=0)&&(((p[i]%10))>=0))
			(a[(p[i]/10)+1][(p[i]%10)])=(((a[(p[i]/10)+1][(p[i]%10)]))+1);
			printf("%c",a[(p[i]/10)+1][(p[i]%10)]);
		if((a[(p[i]/10)][(p[i]%10)-1])!=18&&(((p[i]/10))>=0)&&(((p[i]%10)-1)>=0))
			(a[(p[i]/10)][(p[i]%10)-1])=(((a[(p[i]/10)][(p[i]%10)-1]))+1);
			printf("%c",a[(p[i]/10)][(p[i]%10)-1]);
		if((a[(p[i]/10)-1][(p[i]%10)])!=18&&(((p[i]/10)-1)>=0)&&(((p[i]%10))>=0))
			(a[(p[i]/10)-1][(p[i]%10)])=(((a[(p[i]/10)-1][(p[i]%10)]))+1);
			printf("%c",a[(p[i]/10)-1][(p[i]%10)]);
		if((a[(p[i]/10)-1][(p[i]%10)+1])!=18&&(((p[i]/10)-1)>=0)&&(((p[i]%10)+1)>=0))
			(a[(p[i]/10)-1][(p[i]%10)+1])=(((a[(p[i]/10)-1][(p[i]%10)+1]))+1);
			printf("%c",a[(p[i]/10)-1][(p[i]%10)+1]);
		if((a[(p[i]/10)+1][(p[i]%10)-1])!=18&&(((p[i]/10)+1)>=0)&&(((p[i]%10)-1)>=0))
			(a[(p[i]/10)+1][(p[i]%10)-1])=(((a[(p[i]/10)+1][(p[i]%10)-1]))+1);
			printf("%c",a[(p[i]/10+1)][(p[i]%10)-1]);
		if((a[(p[i]/10)+1][(p[i]%10)+1])!=18&&(((p[i]/10)+1)>=0)&&(((p[i]%10)+1)>=0))
			(a[(p[i]/10)+1][(p[i]%10)+1])=(((a[(p[i]/10)+1][(p[i]%10)+1]))+1);
			printf("%c",a[(p[i]/10)+1][(p[i]%10)+1]);
		if((a[(p[i]/10)-1][(p[i]%10)-1])!=18&&(((p[i]/10)-1)>=0)&&(((p[i]%10)-1)>=0))
			(a[(p[i]/10)-1][(p[i]%10)-1])=(((a[(p[i]/10)-1][(p[i]%10)-1]))+1);
			printf("%c",a[(p[i]/10)-1][(p[i]%10)-1]);
			
			
	}
	printf("\n_____________________\n");
	for(i=0;i<10;i++)
	{
		printf("|");
		for(j=0;j<10;j++)
		{
			if(a[i][j]+48=='0')
			{
				a[i][j]==' ';
				printf("%c",a[i][j]);
			}
			else
			printf("%c",a[i][j]+48);
			printf("|");
		}
		printf("\n");
	}
	printf("----------------------");
}
