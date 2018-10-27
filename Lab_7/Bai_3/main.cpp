#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 100;
    int *ptr1, *ptr2, *ptr3;
    ptr1 = &n;
    ptr2 = &n;
    ptr3 = ptr1;
    printf("%d\n", n);
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    printf("%d\n", *ptr3);
    printf("%p\n", &n);
    printf("%p\n", &ptr1);
    printf("%p\n", &ptr2);
    printf("%p\n", &ptr3);
    return 0;
}
