#include <stdio.h>
#include <stdlib.h>

#include "File.h"

void *my_memset(void *StartAddress, int Character, unsigned int Length); 
void *my_memchr(const void *StartAddress, int Char, unsigned int Length); 
int my_memcmp(const void *Address1, const void *Address2, unsigned int Length);
void *my_memcpy(void *DestAdd, const void *SourceAdd, unsigned int Length);
char *my_strcat(char *DestAdd, const char *SourceAdd);
char *my_strncat(char *DestAdd, const char *SourceAdd, unsigned int Length);
char *my_strchr(const char *StringAdd, int Character);
unsigned int my_strcspn(const char *Str1, const char *Str2);
unsigned int my_strlen(const char *String);
char *my_strpbrk(const char *String1, const char *String2);
char *my_strrchr(const char *Str, int Char);
unsigned int my_strspn(const char *String1, const char *String2);
char *my_strstr(const char *Haystack, const char *Needle);
char *my_strtok(char *String, const char *Delimiter);

void *my_memset(void *StartAddress, int Character, unsigned int Length)
{
    char *TempStartAdd = (char *)StartAddress;
    if(TempStartAdd)
    {
        while(Length--)
        {
            *(TempStartAdd++) = (char)Character;
        }
    }
    else
    {
        printf("Invalid Start Address !!\n");
    }
    return StartAddress;
}

void *my_memchr(const void *StartAddress, int Char, unsigned int Length)
{
    char *TempStartAdd = (char*)StartAddress;
    unsigned int LengthSav = Length;
    unsigned int Checked = 0;
    if(TempStartAdd)
    {
        while(Length--)
        {
            if(*TempStartAdd == Char)
            {
                printf("%C Found At %s" , Char ,((char *)StartAddress + Checked));
                break;
            }
            else
            {
                Checked++;
                TempStartAdd++;
            }
        }
        if(Checked == LengthSav)
        {
            printf("Character %C Not Found !",Char);
        }
        else {}
    }
    else
    {
        printf("Invalid Address Passed !!\n");
    }
    return (TempStartAdd + Checked);
}

int my_memcmp(const void *Address1, const void *Address2, unsigned int Length)
{
    char *TempAdd1 = (char *) Address1;
    char *TempAdd2 = (char *) Address2;
    
    char Ret = 0 ;
    if(TempAdd1 || TempAdd2)
    {
        if(TempAdd1 == TempAdd2)
        {
            printf("Your trying to compare the same memory block !\n");
            Ret = 0;
        }
        else
        {
            while(Length--)
            {
                if((*TempAdd1) != (*TempAdd2))
                {
                    Ret = (*TempAdd1 > *TempAdd2) ? 1 : -1;
                    break;
                }
                else
                {
                    TempAdd1++;
                    TempAdd2++;
                }
            }
        }

    }
    else
    {
        printf("Invalid Address Passed !!\n");
    }
    return Ret ;
}

void *my_memcpy(void *DestAdd, const void *SourceAdd, unsigned int Length)
{
    char *TempDestAdd = (char *)DestAdd;
    char *TempSourceAdd = (char *)SourceAdd;
    if((TempDestAdd == NULL) || (TempSourceAdd == NULL))
    {
        printf("Inavlid Addresses Passed !!\n");
    }
    else
    {
        while(Length--)
        {
            *(TempDestAdd++) = *(TempSourceAdd++);
        }
    }
    return DestAdd;
}

char *my_strcat(char *DestAdd, const char *SourceAdd)
{
    char *TempDestAdd = DestAdd;
    char *TempSourceAdd = (char *)SourceAdd;
    if(DestAdd || SourceAdd)
    {
        while(*TempDestAdd)
        {
            TempDestAdd++;
        }
        while(*TempSourceAdd)
        {
            *(TempDestAdd++) =*(TempSourceAdd++);
        }
    }
    else
    {
        printf("You've Passed Invalid Addresses !!");
    }
    return DestAdd ;
}

char *my_strncat(char *DestAdd, const char *SourceAdd, unsigned int Length)
{
    char *TempDestAdd = DestAdd;
    char *TempSourceAdd = (char *)SourceAdd;
    if((TempDestAdd == NULL) || (SourceAdd == NULL))
    {
        printf("Invalid Address Passed !!\n");
    }
    else
    {
        while(*TempDestAdd)
        {
            TempDestAdd++;
        }    
        while(Length--)
        {
            *(TempDestAdd++) = *(TempSourceAdd++);
        }
    }
    return DestAdd ;
}

char *my_strchr(const char *StringAdd, int Character)
{
    char *TempStrAdd = (char *)StringAdd;
    char *CharacterAdd = NULL;
    if(TempStrAdd == NULL)
    {
        printf("Null Pinter Passed !!\n");
    }
    else
    {
        while(*TempStrAdd)
        {
            if(*TempStrAdd == Character)
            {
                CharacterAdd = TempStrAdd;
                printf("Character '%C' Found At The First Of %s. \n",*CharacterAdd , CharacterAdd);
                break;
            }
            else
            {
                TempStrAdd++;
            }
        }
    }
    return (CharacterAdd) ;
}

unsigned int my_strcspn(const char *Str1, const char *Str2)
{
    char *TempStr1 = (char *)Str1;
    char *TempStr2 = (char *)Str2;
    unsigned int Length = 0;
    if((TempStr1 == NULL) || (TempStr2 == NULL))
    {
        printf("Null Pointer/s Passed !!\n");
    }
    else
    {
        while((*TempStr1) || (*TempStr2))
        {
            if(*TempStr1 == *TempStr2)
            {
                Length--;
                break;
            }
            else
            {
                TempStr1++;
            }
            if(*TempStr1)
            {}
            else
            {
                TempStr1 =(char *)Str1;
                TempStr2++;
                Length = 0;
            }
            if(TempStr2)
            {}
            else
            {
                Length--;
                break;
            }
            Length++;
        }
    }
    return Length ;
}

unsigned int my_strlen(const char *String)
{
    char *TempStr = (char *)String;
    unsigned int Len = 0;
    if(TempStr)
    {
        while(*TempStr)
        {
            Len++;
            TempStr++;
        }
    }
    else
    {
        printf("Null Pointer Passed !!\n");
    }
    return Len ;
}

char *my_strpbrk(const char *String1, const char *String2)
{
    char *TempStr1 = (char *) String1;
    char *TempStr2 = (char *)String2;
    char *CharacterAdd = NULL;
    if((TempStr1 == NULL) || (TempStr2 == NULL))
    {
        printf("Null Pointer/s Passed !!\n");
    }
    else
    {
        while(*TempStr1 || *TempStr2)
        {
            if((*TempStr1) == (*TempStr2))
            {
                CharacterAdd = TempStr1;
                break;
            }
            else
            {
                TempStr1++;
            }
            if(*TempStr1){}
            else
            {
                TempStr1 = (char *)String1;
                TempStr2++;
            }
        }
    }
    return CharacterAdd;
}

char *my_strrchr(const char *Str, int Char)
{
    char *TempStr = (char *)Str;
    char *CharAdd = NULL;
    if(TempStr)
    {
        while(*TempStr)
        {
            if(*TempStr == Char)
            {
                CharAdd = TempStr;
                TempStr++;
            }
            else
            {
                TempStr++;
            }
        }
    }
    else
    {
        printf("Null Pointer Passed !!\n");
    }
    return CharAdd;
}

unsigned int my_strspn(const char *String1, const char *String2)
{
    char *TempStr1 = (char *)String1;
    char *TempStr2 = (char *)String2;
    unsigned int Len = 0;
    unsigned int Police = 0;
    if((TempStr1 == NULL) || (TempStr2 == NULL))
    {
        printf("Null Pointer/s Passed !!\n");
    }
    else
    {
        while(*TempStr1)
        {
            while(*TempStr2)
            {
                if(*TempStr1 == *TempStr2)
                {
                    Len++;
                    Police = 0;
                    break;
                }
                else
                {
                    Police = 1;
                }
                TempStr2++;
            }
            if((Police) || (Len))
            {
                break;
            }
            TempStr2 = (char *)String2;
            TempStr1++;
        }
    }
    return Len ;
}

char *my_strstr(const char *Haystack, const char *Needle)
{
    char *TempHay = (char *)Haystack;
    char *TempNeedle = (char *)Needle;
    char *NeedleAdd = NULL;
    int Police = 0 ;
    if((TempHay == NULL) || (TempNeedle == NULL))
    {
        printf("Null Pointer/s Passed !!\n");
    }
    else
    {
        while(*TempHay)
        {
            if(*TempHay == *TempNeedle)
            {
                NeedleAdd = TempHay;
                while(*TempNeedle)
                {
                    TempNeedle++;
                    TempHay++;
                    if(*TempHay == *TempNeedle)
                    {
                        Police = 0;
                    }
                    else
                    {
                        Police = 1;
                        break;
                    }
                }
                if(Police == 0)
                {
                    break;
                }
                else
                {
                    NeedleAdd = NULL;
                }
                TempNeedle = (char *)Needle;
            }
            else{}
            TempHay++;
        }
    }
    return NeedleAdd;
}

char *my_strtok(char *String, const char *Delimiter)
{
    static int Calls = 0;
    static char *StrSav = NULL;
    //char *StrSav2 = NULL;
    static int I = 0;
    static int Len = 0;
    int Counter = 0;
    char *Token = NULL;
    StrSav = String;
    if(Calls == 0)
    {
        Calls++;
        printf("Calls = %i\n" , Calls);
        Token = String;

        //StrSav2 = String;
       while(*StrSav)
        {
            Len++;
            StrSav++;
        }
        StrSav = String;
        while(*String)
        {
            if((*String) == (*Delimiter))
            {
                *String = 0;
            }
            else
            {

            }
            String++;
        }
       /*
        for(Len = 0 ; Len <= 40 ; Len++)
        {
            if(*StrSav2)
            {
                printf("%C " , *StrSav2);
            }
            else
            {
                printf("\\0 ");
                
            }
            StrSav2++;        
        }
        printf("\n");
        */
    }
    
    else if (Calls || (String == NULL))
    {
        Calls++;
        printf("Length = %i\n" , Len);
        printf("Calls = %i\n" , Calls);
        printf("StrSav = 0x%X\n" , StrSav);
        for(I = 0 ; I <= Len ; I++)
        {
            
            if(*StrSav == 0)
            {
                
                printf("I = %i\n",I);
                printf("StrSav = 0x%X\n" , StrSav);
                Token = StrSav - Counter  ;
                printf("Token  = 0x%X\n" , Token);
                printf("Token  = %c\n" , *Token);
                Counter = 0;
                break;
            }
            Counter++;
            StrSav++;
        }
    }
    return Token ;
}
