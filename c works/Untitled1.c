#include <stdio.h>
#include<math.h> 
int main()
{//3. 把200以内的所有素数存放到一维数组中并输出.
   int a[100],i,m,n,t;
   int cnt=0;
   for(n=2;n<=200;n++)
   {for(i=2;i<=sqrt(n);i++)
   	{
	   if(n%i==0)
	   break;
}
	    if(i>sqrt(n))
        {
            a[cnt]=n;
            cnt++;
        }
	} 
	for(t=0;t<cnt;t++)
	{
		printf("%d\t",a[t]);
	}
    return 0;
}
