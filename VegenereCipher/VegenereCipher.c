#include<stdio.h>
#include<string.h>
 
int main(){
    char msg[100],key[20];
    printf("Plaintext(uppercase): ");
    scanf("%s",msg);
    printf("Key(uppercase): ");
    scanf("%s",key);
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];
    
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
        newKey[i] = key[j];
    }
    newKey[i] = '\0';
	printf("\nNew Generated Key: %s", newKey);
	
    for(i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
    encryptedMsg[i] = '\0';
 
    for(i = 0; i < msgLen; ++i)
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';
    decryptedMsg[i] = '\0';

    printf("\nEncrypted Text: %s", encryptedMsg);
    printf("\nDecrypted Text: %s", decryptedMsg);
	return 0;
}
