The followings completely work.
    1. gcc -c main.c
    2. gcc -c foo.c
    3. gcc -o main main.o foo.o
    4. ./main
    6.     main
    7.     foo

Wrap Foo() with another function.
    1. gcc -c wrap.c
    2. gcc -o main main.o foo.o wrap.o -Wl,-wrap,Foo
    3. ./main
    4.     main
    5.     wrap_foo
    6.     foo
