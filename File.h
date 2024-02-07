#ifndef __File_H__
#define __File_H__

void *my_memset(void *StartAddress, int Character, unsigned int Length); 
/*To Set block of memory starting from "StartAddress" to a certain Length*/
void *my_memchr(const void *StartAddress, int Char, unsigned int Length);
/*To Search about the first occurrence of a certain Character "Char" from a starting address to a certain length */
int my_memcmp(const void *Address1, const void *Address2, unsigned int Length);
/*To Compare the Length Bytes of memory area Address1(Array) and memory area Address2(Array) and Return a value that represents which memory area is larger 
Compare Bytes ! not the total value (It Just Compare Byte X From The First Memory Block With The Same Byte Position Byte X From The Second Memory Block)
Returns 1 when First Memory Block (Address1) is larger
Returns -1 when Second Memory Block (Address2) is Larger
Returns 0 when Memory Blocks are the Same)
*/
void *my_memcpy(void *DestAdd, const void *SourceAdd, unsigned int Length);
/*To Copy Characters of Length From an Area Memory(SoucrAdd) to another Area Memory (DestAdd) */
/*There is another Functions Called strcpy it does the same functionality but it only used with Strings Because it considers Many Factors
when dealing with strings like (Null terminations ,lexicographical Ordering) so it's only for Strings
Also there is strncpy it's the same like strcpy but it just have a Length 
*/
void *my_memmove(void *DestAdd, const void *SourceAdd, unsigned int Length);
/*To Copy Characters of Length From an Area Memory(SoucrAdd) to another Area Memory (DestAdd)...so what is the deference between memcpy and memmove?
the Deference in usage is that memcpy is used with 2 separate memory areas (Not Overlapped) like 2 Separated Arrays But, memmove is used with these (Overlaped Memory) 
like if you want to copy N of Bytes (Characters) from an array to another position in the same array which is (Overlapped Locations) so here we use 
memove and also we can use it with Non-Overlapping Memory so it works At the Two Situations...How memmove & memcpy Works ?
memove copies Data(Characters)to the Buffer then to the Destination But, memcpy just copies the Data(Characters) to the Destination Directly.  
*/
/*There Is Another Function Called strcmp .. strcmp and memcmp do the same but strcmp is used only with strings because there are many factors 
Should be considered when dealing with Strings like (Null terminations ,lexicographical Ordering) memcmp dosen't care about lexicographical Ordering
it just simply compares bytes(Byte to Byte) in memory so when it comes to Strings it is prefered to use strcmp. */
/*Also there is a strncmp it's totally the same as strcmp it only have a range of compairing (another Parameter that is set for a Length of compairing)*/
char *my_strcat(char *DestAdd, const char *SourceAdd);
/*To Apend the String Pointed To By SourceAdd to the End Of the Sting Pointed To By DestAdd and Returns the Address of Destination 
(Return is Optional to use or you can just Ignore it) */
char *my_strncat(char *DestAdd, const char *SourceAdd, unsigned int Length);
/*To Apend the String till Length Pointed To By SourceAdd to the End Of the Sting Pointed To By DestAdd and Returns the Address of Destination 
(Return is Optional to use or you can just Ignore it) */
char *my_strchr(const char *StringAdd, int Character);
/*To search for the First Occurence of a certain Character and Returns its Address through a char pointer */
unsigned int my_strcspn(const char *Str1, const char *Str2);
/*the strcspn function is used to determine the length of the initial segment of a string(Str1) that does not contain any characters from a specified set(Str2)
of characters. It calculates that length by counting the number of characters in the string(Str1) until it encounters any of the characters specified(Str2)
in the set. And Return the Length of this Scanned Segment*/
unsigned int my_strlen(const char *String);
/*To find The Length of the Sting (Null Termination Not Included)*/
char *my_strpbrk(const char *String1, const char *String2);
/*It finds the first Character in String1 that Matches any Character specified in String2 (Null Terminations are not Includded) 
..Returns its Location as a char pointer and Returns Null Pointer if Character Not Found*/
char *my_strrchr(const char *Str, int Char);
/*To find the Last Occurence of a Character(Char) in the String(Str) and Return its Address if Found if Not Found it Returns a Null Pointer*/
unsigned int my_strspn(const char *String1, const char *String2);
/*It calculate the Length of the Initial Segment of String1 that Consists Entirely of String2 Characters And Returns this Length */
char *my_strstr(const char *Haystack, const char *Needle);
/*To search in Haystack(Sting) for the First Occurence of a Sequence (Substring) which is specified in Needle and 
Return the Address of the First Occurence as a Pointer if Found and Null Pointer if Not Found */
char *my_strtok(char *String, const char *Delimiter);
/*It breaks the String into Series of Tokens using the Delimiter and Returns a Pointer to the First Token and when you pass Null instead of String 
after First call it Returns Pointer to the Second Token and so on when you pass Null again it will returns the Third Token..How strtok works ?
if you pass String like "Hello World !" and Delimiter like " " (Delimiter could be 1 or more letters) the Function Replace Every Delimiter with 
a Null Termination so it modifies the String to "Hello\0World\0!\0" (\0 Represents the Null Termination) so here you've broken your string from 
1 Piece to many Pieces(Tokens) and this Concept called String Tokenization  */


//So there are many functions taht looks similar with small changes 


#endif 