//register is registered instead of being stored in a ram
//it makes it more efficient
//register storage is only used for quick access
//if we use it a lot we can use it
//cant get address of a register used for pointer
#include <stdio.h>

int main(){
    //for registers you can store an address in a pointer
    //but you cant get the address of a registered variable itself
    //register and static cant be used together bc we can only use
    //one register

    register int x = 10; //register variable
    for (x = 1; x <= 15; x++)
    {
        printf("\n%d", x);
    }
        return 1;
}