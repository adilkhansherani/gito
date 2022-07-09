#include<stdio.h>
#include<conio.h>

int main(){
    enum pi{a,b,c,d,e,f};
    enum pi pica;
    pica = a;
    for(int i=0;i<6;i++){
        printf("%d\n",pica++);
    }
    getch();
    return 0;
}