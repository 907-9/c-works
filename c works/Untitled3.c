#include <stdio.h>
#include<math.h>
int main()
{//求100以内的全部素数，每行输出10个。素数就是只能被1和自身整除的正整数，1不是素数，2是素数。
//要求定义和调用函数prime(m)判断m是否为素数，当m为素数时返回1，否则返回0。
int prime(int m);
int i,cnt=0;
for(i=2;i<100;i++)
{if(prime(i)==2) 
{printf("%6d",i);
cnt++;
if(cnt%10==0) printf("\n");
}
}
return 0;
}
int prime(int m)
{int t;
if(m==2) return 2;
else for(t=2;t<=sqrt(m);t++)
{if(m%t==0)
return 1;
}
return 2;
}
