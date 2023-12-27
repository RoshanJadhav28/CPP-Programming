#include<stdlib.h>
#include<iostream>
using namespace std;

int mai()
{
    int Arr[5];   //static memory allocation 

    int *ptr1 = (int *)malloc(5 * sizeof(int));     //Dynamic in c

    int *ptr2 = new int[5];     //Dynamic in C++

    free(ptr1);

    delete ptr2[];

    return 0;
}
