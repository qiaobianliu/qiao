#include<stdio.h>
int main()
{
    int i, f = 1, sum = 0;
    for (i = 1; i <= 20; i++) {
        f = f * i; // 计算i的阶乘
        sum += f; // 将当前阶乘加到sum中
    }
    printf("%d", sum); // 输出阶乘之和
    return 0;
}
