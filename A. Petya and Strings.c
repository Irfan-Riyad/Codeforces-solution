#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],n[100];
    int q;
    for(int i = 0; i<1; i++)
    {
        scanf("%s",&s[i]);
        scanf("%s",&n[i]);

        q = strlen(s);
        for(int i =0; i<q; i++){
             s[i] = tolower(s[i]);
             n[i] = tolower(n[i]);
        }
    }
    int result = strcmp(s, n);

    if(result == 0)
    {
        printf("0");
    }
    else if(result < 0)
    {
        printf("-1");
    }
    else if(result > 0)
    {
        printf("1");
    }

    return 0;
}
