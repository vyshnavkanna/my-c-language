vowel.c



#include<stdio.h>
main()
{
    char ch;
    printf("enter an alphabet");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("vowel");
        break;
        case 'e':
        printf("vowel");
        break;
        case 'i':
        printf("vowel");
        break;
        case 'o':
        printf("vowel");
        break;
        case 'u':
        printf("vowel");
        break;
        default:
        printf("consonant");
    }
}





left angled triangle.c


#include <stdio.h>
main()
{
    int i,j;
    for(i=1;i<=30;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
}





multiplication.c

#include<stdio.h>
main()
{
    int n,i;
    printf("\n enter a no.for n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d",n,i,n*i);
        printf("\n");
    }
}





which is big.c


Conversation opened. 1 read message.

Skip to content
Using Gmail with screen readers
2 of 1,639
(no subject)
Inbox

KRISHNA SREEVAN S <krishnasreevan2786@gmail.com>
7:44 PM (1 hour ago)
to me

#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("\n a is big");
        }
        else
        {
            printf("\n c is big");
        }
    }
    else
    if (b>c)
    {
        printf("\n b is big");
    }
    else
    {
        printf("c is big");
    }
}












#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
    {
        printf("*");
    }
    printf("\n");
}
}
    
    
BIO DATA


#include<stdio.h>
main()
{
    printf("  \t    RESUME  ");
    printf("\n Name:-vyshnav");
    printf("\n section:-CSM-B");
    printf("\n Roll no. :-23641A66H7");
    printf("\n qualifications:- inter in ALPHS,SSC in THS");
    printf("\n present qualification:-1 yr CSM IN vage");
    printf("\n year of admission:- 2023");
    printf("\n hobbies:- cricket,kho kho,kabbadi");
    printf("\n      THANK  YOU ");
}









#include<stdio.h
main()
{
    int a,b;
    printf("enter 2 digits for a,b\n");
    scanf("%d%d",&a,&b);
    printf("a+=b=%d\n",a+=b);
    printf("a-=b=%d\n",a-=b);
    printf("a*=b=%d\n",a*=b);
    printf("a/=b=%d\n",a/=b);
    printf("a%=b=%d\n",a%=b);
}


