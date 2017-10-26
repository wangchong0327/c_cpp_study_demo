#include<stdio.h>


int addFunc(int x,int y) {
    return x + y;
}

int main() {
    int a, b, result;
    a = 2;
    b = 3;
    result = addFunc(a,b);
    printf("%d+%d=%d\n",a,b,result);
    system("pause");
    return 0;
}