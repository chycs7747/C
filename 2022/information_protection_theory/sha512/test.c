#include <stdio.h>
int main(void) {
    int64_t a = 1;
    for(int i=0; i<63; i++) {
        a = a<<1;
        printf("%llu\n", a);
    }

}
