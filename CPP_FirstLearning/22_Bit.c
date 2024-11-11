#include<stdio.h>

int main() {
    int num1 = 5; // 二进制表示为 0101
    int num2 = 3; // 二进制表示为 0011
    int result;

    // 按位与运算
    result = num1 & num2; // 0101 & 0011 = 0001
    printf("5 & 3 的结果: %d\n", result);

    // 按位或运算
    result = num1 | num2; // 0101 | 0011 = 0111
    printf("5 | 3 的结果: %d\n", result);

    // 按位异或运算
    result = num1 ^ num2; // 0101 ^ 0011 = 0110
    printf("5 ^ 3 的结果: %d\n", result);

    // 按位取反运算
    int num3 = 5; // 二进制表示为 00000101
    result = ~num3; // 取反后为 11111010（在有符号整数表示中，这是 -6 的补码形式）
    printf("~5 的结果: %d\n", result);

    // 左移运算
    int num4 = 5; // 二进制表示为 00000101
    result = num4 << 2; // 左移 2 位后为 00010100，即 20
    printf("5 << 2 的结果: %d\n", result);

    // 右移运算
    int num5 = 12; // 二进制表示为 00001100
    result = num5 >> 2; // 右移 2 位后为 00000011，即 3
    printf("12 >> 2 的结果: %d\n", result);

    return 0;
}