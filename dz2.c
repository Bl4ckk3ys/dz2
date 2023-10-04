#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//2.  Даны два числа. Найти среднее арифметическое их квадратов и среднее арифметическое их модулей. 
int main()
{   
    int n1, n2, null;
    double ans;
    scanf("%d %d", &n1, &n2);
    ans = (abs(n1)+abs(n2))/2;
    printf("\n%lf", ans);
    ans = (pow(n1,2)+pow(n2,2))/2;
    printf("\n%lf", ans);

    
    scanf("\n%d",&null);
    return 0;
}
