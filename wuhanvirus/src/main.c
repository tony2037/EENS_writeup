#include <stdlib.h>
#include <stdio.h>
#include "sendkey.h"

int main(){
    char *key = "test\n";
    size_t key_len = sizeof(key);
    char *IP = "merry.ee.ncku.edu.tw";
    int PORT = 9487;
    unsigned int count = 0;
    while(1) {
        ++count;
        smuggle(IP, PORT, key, key_len);
        printf("Send packets: %d\n", count);
    }
    return 0;
}
