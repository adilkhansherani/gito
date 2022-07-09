#include<stdio.h>
#include<conio.h>

int main(){
    enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    enum pi{a,b,c,d,e,f};
    enum pi pica;
    pica = a;
    for(int i=0;i<6;i++){
        printf("%d\n",pica++);
    }
    enum week day;
    day = Mon;
    for(day;day<6;day){printf("%d",day++);}
    getch();
    return 0;
}