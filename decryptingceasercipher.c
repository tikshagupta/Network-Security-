//Importing Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Start of main function
int main()
{

    //Function for clearing the terminal
    system("cls");
    //Declaring string variables
    char message[100], ch;
    char response[5];
    //Declaring integer variables
    int i, key, op;

    //Instructions for using the program
    printf("***Welcome to Caeser-Cipher Program***\n");
    printf("\n2. Decrypting a String");
    //Asking user input for message to be Decrypted
            printf("\nEnter a message to decrypt: ");
            scanf("%s", &message);
            //Asking user input for the Decryption key
            printf("\nEnter key: ");
            scanf("%d", &key);

            //for loop for iterating the string given by user
            for (i = 0; message[i] != '\0'; ++i)
            {
                //storing the iterated string in new variable ch
                ch = message[i];
                //if statement for checking if those iterated alphabets comes bw lower case a and z
                if (ch >= 'a' && ch <= 'z')
                {
                    //adding key to the variable for encryption(- sign for shifting the alphabets behind)
                    ch = ch - key;
                    //if statement when the alphabet is lesser then lower case a
                    if (ch < 'a')
                    {
                        //alloting of the key to this situation
                        ch = ch + 'z' - 'a' + 1;
                    }
                    //new message(encrypted) alloted to variable ch
                    message[i] = ch;
                }
                //else if statement to check if the alphabets lie bw uppercase A and Z
                else if (ch >= 'A' && ch <= 'Z')
                {
                    //adding key to the variable for encryption(- sign for shifting the alphabets behind)
                    ch = ch - key;
                    //if statement when the alphabet is lesser then upper case A
                    if (ch < 'A')
                    {
                        //alloting of the key to this situation
                        ch = ch + 'Z' - 'A' + 1;
                    }
                    //new message(encrypted) alloted to variable ch
                    message[i] = ch;
                }
            }
            //Printing the Decrypted message
            printf("\nDecrypted message: %s", message, "\n");
        }

