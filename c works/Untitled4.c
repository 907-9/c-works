#include <stdio.h>
int main()
{
    int y, m, d;
    int *p = &y;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int *pm = month, cnt = 0;
    scanf("%d%d%d", &y, &m, &d);
    if((*p%4==0&&*p%100!=0)||*p%400==0)
        *(pm+1) = 29;
    while(--m)
        cnt += *pm++;
    cnt += d;
    printf("%d", cnt);
    return 0;
}
