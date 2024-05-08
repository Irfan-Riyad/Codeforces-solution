#include<stdio.h>
#include<string.h>
int main()
{
    int n,counter = 0;
    char a[100];
    scanf("%d",&n);

    for(int i =0; i<n; i++)
    {
        scanf("%s",&a);
        int len = strlen(a);
        if(len < 11)
        {
            printf("%s\n",a);
        }
        else
        {
            counter = len - 2;
            printf("%c%d%c\n", a[0], counter, a[len - 1]);

        }
    }

}
