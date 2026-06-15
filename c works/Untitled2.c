include<stdio.h>
int main()
{//先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。 注意：题目保证最大和最小值都是唯一的
int a#[100],i,n,t;
int max=0,min=0;
printf("请输入数字个数：\n");
scanf("%d",&n);
printf("请输入数字：\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
if(a[i]>a[max]) max=i;
if(a[i]<a[min]) min=i;
}
t=a[0];
a[0]=a[min];
a[min]=t;
t=a[n-1];
a[n-1]=a[max];
a[max]=t;
for(i=0;i<n;i++)
{printf("%d ",a[i]);
}
return 0;
}
