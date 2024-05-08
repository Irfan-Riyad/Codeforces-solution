#include<stdio.h>
#include<string.h>

int main() {
   int a,b,counter = 0;
    scanf("%d %d",&a,&b);

    while(a > b){
        a = a *3;
        b = b * 2;
        counter++;
    }

    printf("%d",counter);

    return 0;
}
