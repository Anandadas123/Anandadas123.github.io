#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main()
{
	int i,j,n,a[50],p;
	for(i=1234;i<=4321;i++)
	{
		n=i;
		{
		p=n%10;
		a[0]=p;
		n=n/10;
		
		p=n%10;
		a[1]=p;
		n=n/10;
		
		p=n%10;
		a[2]=p;
		n=n/10;
		
		a[3]=n;	
		}
	//	if((a[0]==1||a[0]==2||a[2]==3||a[0]==4)&&(a[1]==1||a[1]==2||a[1]==3||a[1]==4)&&(a[2]==1||a[2]==2||a[2]==3||a[2]==4)&&(a[3]==1||a[3]==2||a[3]==3||a[3]==4))
        if((a[0]!=0&&a[0]!=5&&a[0]!=6&&a[0]!=7&&a[0]!=8&&a[0]!=9)&&(a[1]!=0&&a[1]!=5&&a[1]!=6&&a[1]!=7&&a[1]!=8&&a[1]!=9)&&(a[2]!=0&&a[2]!=5&&a[2]!=6&&a[2]!=7&&a[2]!=8&&a[2]!=9)&&(a[3]!=0&&a[3]!=5&&a[3]!=6&&a[3]!=7&&a[3]!=8&&a[3]!=9)&&(a[0]!=a[1]&&a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3]))
        
		   printf("%d%d%d%d ",a[0],a[1],a[2],a[3]);  
	}
}
