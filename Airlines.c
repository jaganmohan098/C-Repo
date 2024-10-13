#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b<=a*10){
        printf("%d",b*c);
    }
    else{
        printf("%d",a*10*c);
    }
}