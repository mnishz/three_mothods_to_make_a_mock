The followings completely work.
    1. gcc -c main.c
    3. gcc -o main main.o
    4. ./main
    6.     main
    7.     foo

Overwride Foo() with another function.
    1. gcc -c wrap.c
    2. gcc -o main main.o wrap.o
    3. ./main
    4.     main
    5.     wrap_foo
