#include<stdio.h>
#include<ctype.h>

int main() {
    char text[100], ch;
    int key,l=1,op;
    printf("[----------- Caeser Cipher ------------]\n");
    printf("\t1] Encrypt\n\t2] Decrypt\n\t0] Exit\n");
    while(l){
    	printf("[Option]=> ");
    	scanf("%d",&op);
    	if(op==1){
    		printf("\tPlainText : ");
		    scanf("%s", text);
		    printf("\tKey: ");
		    scanf("%d", & key);
		    
		    for (int i = 0; text[i] != '\0'; ++i) {
		        ch = text[i];
		        if (isalnum(ch)) {
		            if (islower(ch)) {
		                ch = (ch - 'a' + key) % 26 + 'a';
		            }
		            if (isupper(ch)) {
		                ch = (ch - 'A' + key) % 26 + 'A';
		            }
		            if (isdigit(ch)) {
		                ch = (ch - '0' + key) % 10 + '0';
		            }
		        }
		        else {
		            printf("\tInvalid Character!");
		        }
		        text[i] = ch;
		    }
		    printf("Encrypted Text: %s\n", text);
		}else if(op==2){
			printf("\tText to Decrypt: ");
		    scanf("%s", text);
			printf("\tKey: ");
		    scanf("%d", & key);
		
		    for (int i = 0; text[i] != '\0'; ++i) {
		        ch = text[i];
		        if (isalnum(ch)) {
		            if (islower(ch)) {
		                ch = (ch - 'a' - key + 26) % 26 + 'a';
		            }
		            if (isupper(ch)) {
		                ch = (ch - 'A' - key + 26) % 26 + 'A';
		            }
		            if (isdigit(ch)) {
		                ch = (ch - '0' - key + 10) % 10 + '0';
		            }
		        }
		        else {
		            printf("Invalid Character!");
		        }
		        text[i] = ch;
		    }
		    printf("Decrypted Text: %s\n", text);		
		}else if(op==0){
			l=0;
		}else{
			printf("\tInvalid Option !\n");
		}
	}
	return 0;
}