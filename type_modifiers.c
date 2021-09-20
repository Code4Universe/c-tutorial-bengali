#include<stdio.h>
int main(){
    short int a;
    unsigned long int b;
    long long int c;
    signed int d = -11;
    unsigned int e = -11;
    int f;
    printf("Size of a:%lu \n",sizeof(a));
    printf("Size of b:%lu \n",sizeof(b));
    printf("Size of c:%lu \n",sizeof(c));
    printf("Size of d:%lu \n",sizeof(d));
    printf("Size of e:%lu \n",sizeof(e));
    printf("Size of f:%lu \n",sizeof(f));
    printf("d = %d\n",d);
    printf("e = %u\n",e);
    return 0;
}
