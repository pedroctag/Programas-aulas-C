#include <stdio.h>

int main(){

 float v, i, r, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,i1 ,i2, i3, i4, i5, i6, i7, i8, i9, i10;

 printf("coloque a voltagem inicial");
 scanf("%f", &v);

 r = 470;
 v1 = v;
 v2 = v1 + 0.5;
 v3 = v2 + 0.5;
 v4 = v3 + 0.5;
 v5 = v4 + 0.5;
 v6 = v5 + 0.5;
 v7 = v6 + 0.5;
 v8 = v7 + 0.5;
 v9 = v8 + 0.5;
 v10 = v9 + 0.5;


 i1 = 0 / r, &i1;
 printf("\ni1: %f\n"), i1;

 i2 = 0.5 / r, &i2;
 printf("\ni2: %f\n"), i2;

 i3 = 1 / r;
 printf("\ni3: %f\n"), i3;

 i4 = 1.5 / r;
 printf("\ni4: %f\n"), i4;

 i5 = 2 / r;
 printf("\ni5: %f\n"), i5;

 i6 = 2.5 / r;
 printf("\ni6: %f\n"), i6;

 i7 = 3 / r;
 printf("\ni7: %f\n"), i7;

 i8 = 3.5 / r;
 printf("\ni8: %f\n"), i8;

 i9 = 4 / r;
 printf("\ni9: %f\n"), i9;

 i10 = 4.5 / r;
 printf("\ni10: %f\n"), i10;


return 0;
}
