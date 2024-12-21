#include<stdio.h>
int main()
{
    char ch[100];
    int s=0;
    scanf("%[^\n]s",ch);
    int i;
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]>='0' && ch[i]<='9'){
            s=s+ch[i]-'0';
        }
    }
    printf("%d",s);
}