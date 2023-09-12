#include <stdio.h>
char monoalphabetic(char a, int direction) {
    char alpha[27][3] = {
        { 'a', 'f' }, { 'b', 'a' }, { 'c', 'g' }, { 'd', 'u' }, {'e', 'n' },
        { 'f', 'i' }, { 'g', 'j' }, { 'h', 'k' }, { 'i', 'l' }, {'j', 'm' },
        { 'k', 'o' }, { 'l', 'p' }, { 'm', 'q' }, { 'n', 'r' }, {'o', 's' },
        { 'p', 't' }, { 'q', 'v' }, { 'r', 'w' }, { 's', 'x' }, {'t', 'y' },
        { 'u', 'z' }, { 'v', 'b' }, { 'w', 'c' }, { 'x', 'd' }, {'y', 'e' }, { 'z', 'h' }
    };
    int i;
    for (i = 0; i < 27; i++) {
        if ((direction == 1 && a == alpha[i][0]) || (direction == -1 && a == alpha[i][1]))
            break;
    }
    return (direction == 1) ? alpha[i][1] : alpha[i][0];
}
int main() {
    char str[20];
    int i, l = 1, op;
    printf("[------- MonoAlphabetic Cipher -------]\n");
    printf("\t1] Encrypt\n\t2] Decrypt\n\t0] Exit\n");
    while(l){
        printf("[Option]=> ");
        scanf("%d", &op);
        if (op == 1 || op == 2) {
            printf("\tText: ");
            scanf("%s", str);
            for (i = 0; str[i]; i++) {
                str[i] = monoalphabetic(str[i], (op == 1) ? 1 : -1);
            }
            str[i] = '\0';
            printf("%s Text: %s\n", (op == 1) ? "Encrypted" : "Decrypted", str);
        }else if(op == 0) {
            l = 0;
        }else{
            printf("\tInvalid Option!\n");
        }
    } 
    return 0;
}
