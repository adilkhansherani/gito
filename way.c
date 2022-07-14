#include<stdio.h>
#include<conio.h>

int main(){
    enum pi{a,b,c,d,e,f}pica;
    pica = a;
    for(int i=0;i<6;i++){
        printf("%d\n",pica++);
    }
    getch();
    //comment for diff in git
    return 0;
}