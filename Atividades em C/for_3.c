#include <stdio.h>
int main(int argc, char const *argv[])
{
    int parar_em = 30;
    for(int i = 0; i < 100; i++){
        if(i==parar_em){
            break;
        }
        printf("\n%d", i);
    }
    return 0;
}
