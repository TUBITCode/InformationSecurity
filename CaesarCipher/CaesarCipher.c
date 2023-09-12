#include <stdio.h>
#include <ctype.h>
void caesar_encrypt(char text[], int key){
    char ch;
    for(int i = 0; text[i] != '\0'; ++i){
        ch = text[i];
        if (isalnum(ch)){
            if (islower(ch))
                ch = (ch - 'a' + key+26) % 26 + 'a';
            if (isupper(ch))
                ch = (ch - 'A' + key+26) % 26 + 'A';
            if (isdigit(ch))
                ch = (ch - '0' + key+50) % 10 + '0';
        }
        text[i] = ch;
    }
}
int main() {
    char text[100];
    int key, l = 1, op;   
    printf("[----------- Caesar Cipher ------------]\n");
    printf("\t1] Encrypt\n\t2] Decrypt\n\t0] Exit\n");
    while (l){
        printf("[Option]=> ");
        scanf("%d", &op);
        if(op == 1 || op == 2){
            printf("\tEnter Text: ");
            scanf("%s", text);
            printf("\tKey: ");
            scanf("%d", &key);
            if (op == 2) {
                key = -key;
            }
            caesar_encrypt(text, key);
            printf("%s Text: %s\n", (op == 1) ? "Encrypted" : "Decrypted", text);
        }else if (op == 0){
            l = 0;
        }else{
            printf("\tInvalid Option !\n");
        }
    }
    return 0;
}
