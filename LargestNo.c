  
#include <stdio.h> 
#include<conio.h> 
 void main()  
{  
    int a, b, c;   
     printf("Enter three numbers");  
    scanf("%d %d %d",&a,&b,&c);  
    if(a>b && a>c)  
    {  
        printf("%d is largest",a);  
    }  
    if(b>a  && b > c)  
    {  
        printf("%d is largest",b);  
    }  
    if(c>a && c>b)  
    {  
        printf("%d is largest",c);  
    }  
    getch();
    }