#include <stdio.h>
#include <stdlib.h>
int f1(int a){

return a*f2(a);
}
int f2(int a){
return a*10;
}
int f3(int a){
a = a+2;
return a;
}
int main()
{
    int a;
    a = 2;
    printf("%d %d %d %d",f1(a),f2(a),f3(a),a);
    return 0;
}
