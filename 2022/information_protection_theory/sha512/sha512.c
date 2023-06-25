#include <stdio.h>
#include <string.h>
#define _1bit 1

int mod(int origin, int moduler);
void printAll(char* encrypted_msg);



int main(void) {
    char* initial_hash_value[8] = {"6A09E667F3BCC908",
    "BB67AE8584CAA73B"," 3C6EF372FE94F82B",
    "A54FF53A5F1D36F1","510E527FADE682D1",
    "9B05688C2B3E6C1F","1F83D9ABFB41BD6B", "5BE0CD19137E2179"};

    char total_message[128] = {0,};  // actually, n * 1024
    char message[16] = {0,}; //message 16글자당 128비트 -> 16글자 x N => 1024 x N개 total messge 생성
    int64_t words[80]={0,};
    scanf("%s", message);
    printf("%s\n", message);
    for(int idx=0; idx < strlen(message); idx++) {
        total_message[idx] = message[idx];
        printf("idx: %d\n", idx);
    }

    char message_bits_length = strlen(message)*8;
    int padding_bits_length = 0;
    total_message[message_bits_length/8] = total_message[message_bits_length/8] | 0x10 ;
    total_message[127]= message_bits_length;



    //padding_bits_length = mod(896  - message_bits_length, 1024);
    //printf("message bytes: %d\npadding pytes: %d\nL: %d\n", message_bits_length/8,  padding_bits_length/8, 128/8);

    printAll(total_message);
    
    
    return 0;
}

int mod(int origin, int moduler)  {
    int result = origin % moduler;
    return result>0 ? result : result+moduler;
}

void printAll(char* total_message) {
    for(int i=1; i<=128; i++) {
        if(i%32 == 0) {
            if(total_message[i-1]==0) {
                printf("00\n\n");
            }
            else {
                printf("%x\n\n", total_message[i-1]);
            }
        }
        else if(i%8 == 0) {
            if(total_message[i-1]==0) {
                printf("00  ");
            }
            else {
                printf("%x  ", total_message[i-1]);
            }
        }
        else {
            if(total_message[i-1]==0) {
                printf("00");
            }else {
                printf("%x", total_message[i-1]);
            }
        }
    }
}