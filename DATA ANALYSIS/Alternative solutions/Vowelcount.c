#include <stdio.h>
#include <ctype.h>
int main()
{
char s[100];
printf("Input the string : ");
scanf("%[^\n]s", s);
int count_of_vowels = 0, count_of_consonants = 0, count_of_spaces = 0;
int i = 0;
while(s[i] != '\0')
{
char x = s[i];
x = tolower(x);
if(x == ' ')
count_of_spaces++;
if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
count_of_vowels++;
else if((int)x >= 97 && (int)x <= 122)
count_of_consonants++;
i++;
}
printf("The count of spaces in the string is : %d\n", count_of_spaces);
printf("The count of vowels in the string is : %d\n", count_of_vowels);
printf("The count of consonants in the string is : %d\n", count_of_consonants);
return 0;
}
