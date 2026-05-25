#include<stdio.h>
int main()
{

    char s1[20],s2[20];
    int i=0,diff=0;
    gets(s1);
    gets(s2);
    while(s1[i]!='\0'|| s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            diff=s1[i]-s2[i];
            break;
        }
        i++;
    }

    if(diff==0)
    {
        printf("Equal");
    }
    else if(diff>0)
    {
        printf("First string bigger");
    }
    else
        printf("Second string is bigger");
}
