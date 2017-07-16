#include "stdafx.h"

extern "C" int CalcSum_(int a, int b, int c);

int _tmain(int argc, _TCHAR* argv[])
{
    int a = 40000, b = 10000, c = 20000;
    int sum = CalcSum_(a, b, c);
    printf("  x1:   %d\n", a);
    printf("  x2:   %d\n", b);
    printf("  x3:   %d\n", c);
    printf("  sum: %d\n", sum);
    return 0;
}
