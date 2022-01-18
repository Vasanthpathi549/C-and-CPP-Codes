#include<stdio.h>
typedef struct card {
    int face;
    int shape;
    int color;
};
int main()
{
    struct card c[52]={{1,20,0},{2,1,0}};
    printf("%d\n",sizeof(c));
    printf("%d",c[0].shape);
}