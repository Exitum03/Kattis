#include <cstdio>
#include <cmath>

void update(int *a, int *b)
{
    int temp = *a;
    *a = std::abs(*a + *b);
    *b = std::abs(temp - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    std::scanf("%d %d", &a, &b);
    update(pa, pb);
    std::printf("%d\n%d", a, b);

    return 0;
}