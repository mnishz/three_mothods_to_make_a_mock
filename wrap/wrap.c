#include <stdio.h>

void __real_Foo(void);

void __wrap_Foo(void)
{
    printf("wrap_foo\n");
    __real_Foo();
}
