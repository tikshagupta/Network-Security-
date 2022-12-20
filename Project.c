#include<stdio.h>


int ex(){
    printf("Project concluded !!!");
    printf("\n Thank you. ");
}


 int encrypt()
{
    char message1[100], ch;
    
    int i, key;
    
    printf("\nEnter a message to encrypt: ");
    scanf("%s", &message1);
    printf("\nEnter key: ");
    scanf("%d", &key);
    for(i = 0; message1[i] != '\0'; ++i){
    ch = message1[i];
    if(ch >= 'a' && ch <= 'z'){
    ch = ch + key;
    if(ch > 'z'){
    ch = ch - 'z' + 'a' - 1;
    }
    message1[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
    ch = ch + key;
    if(ch > 'Z'){
    ch = ch - 'Z' + 'A' - 1;
    }
    message1[i] = ch;
    }
    }
    printf("\nEncrypted message: %s", message1, "\n");
    printf("\n\n\n\n\n To Encrypt another string enter 1,  \n To go to main menu type 2 :");
    scanf("%d", &key);
    switch(key){
        case 1:
        encrypt();
        break;
        
        case 2:
        main();
        break;
        
        dafault:
        printf("Enter valid choice");
        break;
    }
   
}

 int decrypt()
{
   
    char message2[100],ch;
    char response[5];
    int i, key;
    printf("\nEnter a message to decrypt: ");
    scanf("%s", &message2);
    printf("\nEnter key: ");
    scanf("%d", &key);
    
    for(i = 0; message2[i] != '\0'; ++i){
    ch = message2[i];
    if(ch >= 'a' && ch <= 'z'){
    ch = ch - key;
    if(ch < 'a'){
    ch = ch + 'z' - 'a' + 1;
    }
    message2[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
    ch = ch - key;
    if(ch < 'A'){
    ch = ch + 'Z' - 'A' + 1;
    }
    message2[i] = ch;
    }
    }
    printf("\nDecrypted message: %s", message2);
    printf("\n\n\n\n\n To Decrypt another string enter 1,  \n To go to main menu type 2 :");
    scanf("%d", &key);
    switch(key){
        case 1:
        decrypt();
        break;
        
        case 2:
        main();
        break;
        
        dafault:
        printf("Enter valid choice");
        break;
    }
   
}

int main()
{
    
int op;

printf("\n\n*Welcome to Ceaser-Cipher Program*\n");
printf("\nHere Are the Operations which you can perform: \n");
printf("1. Encrypting a String");
printf("\n2. Decrypting a String");
printf("\n3. Exit");
printf("\n\nEnter the number of operation (1,2 or 3) you want to perform:\n");
scanf("%d", &op);

switch(op) {
    case 1:
    encrypt() ;
    break;
    
    case 2:
    decrypt() ;
    break;
    
    case 3:
    ex() ;
    break;
}
}
