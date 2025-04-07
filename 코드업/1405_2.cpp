#include <stdio.h>

int main()
{
    int a[1001];
    int n, i, j, g;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d ", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i, g = 1; g <= n; j++, g++) // i 번째로 시작해서 
        {

            if (j == n) j = 0; // i 가 n 에 도착한다면 0번으로 초기화

            printf("%d ", a[j]); // 결국 왼쪽으로 로테이션이 됨 
        }
        printf("\n");
    }
}
