The followings completely work.
    1. gcc -c main.c
    2. gcc -o main main.o
    3. ./main
    4.     main
    5.     foo

Weaken and override Foo() with another function.
    1. objcopy main.o --globalize-symbol=Foo --weaken-symbol=Foo
    1. gcc -c wrap.c
    2. gcc -o main main.o wrap.o
    3. ./main
    4.     main
    5.     wrap_foo

FYI, before and after objcopy

HiICS@linux-v9dw:~/c/mock/objcopy> gcc -c main.c
HiICS@linux-v9dw:~/c/mock/objcopy> nm main.o
000000000000001a T Foo
0000000000000000 T main
                 U puts
HiICS@linux-v9dw:~/c/mock/objcopy> objcopy main.o --globalize-symbol=Foo --weaken-symbol=Foo
HiICS@linux-v9dw:~/c/mock/objcopy> nm main.o
000000000000001a W Foo
0000000000000000 T main
                 U puts
