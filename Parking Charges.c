#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    if(c==1){
       d=1;
    }
    else{
        d=0;
    }
    if(d){
        printf("%d",a);
    }
    else{
        printf("%d",a+(c-1)*b);
    }
    
}