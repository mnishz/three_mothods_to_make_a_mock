#include <stdio.h>

void Foo(void);

int main(void)
{
    printf("main\n");
    Foo();
    return 0;
}

__attribute__((weak))
void Foo(void)
{
    printf("foo\n");
}
