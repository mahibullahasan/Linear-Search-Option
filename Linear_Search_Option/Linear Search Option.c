#include<stdio.h>
void show(int a);
int main(){
    int a=10;
    show(a);
    printf("%d",a);
}
void show(int a){

a++;
printf("a=%d",a);
return;

}

