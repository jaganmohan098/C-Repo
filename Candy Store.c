#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(b<=100 && a<b){
        printf("%d",a+(b-a)*2);
    }
    else{
        printf("%d",b*1);
    }
}