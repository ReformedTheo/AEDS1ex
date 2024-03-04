#include <stdio.h>

int main(){
    int age = 0;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    if (age >= 18){
        printf("Maior de idade\n");
    }
    else{
        printf("Not maior de idade\n");
    }
    return 0;
}