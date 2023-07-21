#include <stdio.h>
#include<math.h>
int main()
{
    int num,s,c=0,i,d,flag;
    printf("Enter a number: ");
    scanf("%d",&num);
    s=num*num;
    int temp=s;
    while(s>0){
        s=s/10;
        ++c;
    }
    s=temp;
    for(i=1;i<=c-1;++i){
     d=pow(10,i);
     if(d==num){
         continue;
     }
     else{
         int sum=s/d + s%d;
         if(sum==num){
             flag=1;
             break;
         }
     }
    }
    if(flag==1){
        printf("THE GIVEN NUMBER IS A KAPREKAR NUMBER");
    }
    else{
        printf("THE GIVEN NUMBER IS NOT A KAPREKAR NUMBER");
    }
    

    return 0;
}
