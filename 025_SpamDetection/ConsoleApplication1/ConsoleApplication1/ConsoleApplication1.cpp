
#include <iostream>
#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


#define SPAM_LENGHT 4
#define INCOMING_MAIL_LENGHT 2
int ret_idx = 0;
char* ret[] = { "" };
char** spam_detection_algorithm(char** spam_mail_list, char** incoming_email)
{
    char comparision_str[75] = { 0 };
    int idx = 0;
    bool spam_found = false;
    char last_spam_str[100] = { 0 };
    uint16_t spam_sayac = 0;
    for (int i = 0; i < INCOMING_MAIL_LENGHT; i++)
    {
        for (int j = 0; incoming_email[i][j] != '\0'; j++)
        {

            if (incoming_email[i][j + 1] == '\0' || incoming_email[i][j] == ' ')
            {
                if (incoming_email[i][j + 1] == '\0')
                    comparision_str[idx++] = incoming_email[i][j];
                for (int k = 0; k < SPAM_LENGHT; k++)
                {
                    if ((strncmp(comparision_str, spam_mail_list[k], strlen(spam_mail_list[k])) == 0) / && strcmp(last_spam_str, comparision_str) / )
                    {
                        spam_sayac++;
                        // strncpy(last_spam_str, comparision_str, strlen(comparision_str));
                        break;
                    }
                }
                if (spam_sayac == 2)
                {
                    memset(last_spam_str, '\0', sizeof(last_spam_str));
                    ret[ret_idx++] = "Spam_Found";
                    spam_sayac = 0;
                    spam_found = true;
                    break;
                }
                memset(comparision_str, '\0', sizeof(comparision_str));
                idx = 0;
            }
            else if (incoming_email[i][j] != ' ')
            {
                comparision_str[idx++] = incoming_email[i][j];
            }
        }
        if (!spam_found) {
            if (spam_sayac != 0) {
                memset(last_spam_str, '\0', sizeof(last_spam_str));
                spam_sayac = 0;
            }
            ret[ret_idx++] = "Spam_Not_Found";
        }
        else
            spam_found = false;
        memset(comparision_str, '\0', sizeof(comparision_str));
    }
    return ret;
}


int main()
{
    int subject_count = 2;

    char* pSubjects[2] = { "free prize worth millions"            ,
                           "ten tips for a carefree lifestyle" };

    int spam_words_count = 3;

    char* pSpamWords[3] = { "free" , "money" , "win" };

    int result_count;

    char** result;

       



}

