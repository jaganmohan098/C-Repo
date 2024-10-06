#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=b*6*6;
    if(c>=a){
        printf("YES");
    }
    else{
        printf("NO");
    }
}