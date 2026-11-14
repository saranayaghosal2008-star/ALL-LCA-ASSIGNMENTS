#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
int i;
char ch;
char *ptr;
int choice, n;
char  str1 [100], str2 [100], str3 [50];
while (1) {
printf("\n=== Strings Operations Menu ===\n");
printf("1. Find Length (strlen)\n");
printf("2. Copy string (strcpy)\n");
printf("3. Concatenate strings (strcat)\n");
printf("4. Compare strings (strcmp)\n");
printf("5. Find Character (strchr)\n");
printf("6. Find substring (strstr)\n");
printf("7. Tokenize string (strtok)\n");
printf("8. Convert to uppercase\n");
printf("9. Convert to lowercase\n");
printf("10. Exit\n");

printf("Enter your choice: ");
scanf("%d" , &choice);
getchar();
switch (choice) {
case 1:
printf("Enter a string: ");
fgets(str1, 100, stdin);
str1[strcspn(str1, "\n")] = '\0';
printf("Lenghth =%zu\n", strlen(str1));
break;
case 2:
printf("Enter source string: ");
fgets(str1, 100, stdin);
str1[strcspn(str1, "\n")] = '\0';
strcpy(str2, str1);
printf("Copied string: %s\n",str2);
break;
case 3:
printf("Enter first string: ");
fgets(str1, 100, stdin);
str1[strcspn(str1, "\n")] = '\0';
printf("Enter Second String: ");
fgets(str2, 100, stdin);
str2[strcspn(str2, "\n")] = '\0';
if (strlen(str1) + strlen(str2) < sizeof(str1)) {
strcat(str1,str2);
printf("Concatenated string: %s\n", str1);
} else {
printf("Strings are too long to concatenated!\n");
}
break;
case 4:
printf("Enter first string: ");
fgets(str1, 100, stdin);
str1[strcspn(str1,"\n")] = '\0';
printf("Enter second string: ");
fgets(str2, 100, stdin);
str2[strcspn(str2,"\n")] = '\0';
i = strcmp(str1, str2);
if (i == 0)
printf(" Strings are equal.\n");
else if (i < 0)
printf("First string is greater.\n");
else
printf("First string is smaller.\n");
break;
case 5:
printf("Enter string: ");
fgets(str1, 100, stdin);
str1[strcspn(str1, "\n")] = '\0';
printf("Enter character to find: ");
scanf("%c", &ch);
getchar();
ptr = strchr(str1, ch);
if (ptr != NULL)
printf("Character found at position %lu\n",
        (unsigned long)(ptr - str1 + 1 ));
    else
    printf("Character not found.\n");
    break;
 case 6:
 printf("Enter main string: ");
 fgets(str1, 100, stdin);
 str1[strcspn(str1, "\n")] = '\0';
 printf(" Enter substring to find: ");
 fgets(str2, 100, stdin);
 str2[strcspn(str2,"\n")] = '\0';
 ptr = strstr(str1, str2);
  if (ptr != NULL)
   printf("Substring found at position %lu\n",
         (unsigned long)(ptr - str1 + 1));
      else
     printf("Substring not found.\n");
     break;
case 7:
printf("Enter string ( use spaces between words):  " );
fgets(str1, 100, stdin);
str1[strcspn(str1,"\n")] = '\0';
ptr =strtok(str1, " ,.\t");
printf("Tokens:\n");
while (ptr !=NULL) {
printf("%s\n", ptr);
ptr = strtok(NULL, " ,.\t");
}
break;
case 8:
printf("Enter String: ");
fgets(str1, 100, stdin);
str1[strcspn(str1, "\n")] = '\0';
for(i=0; str1[i] != '\0' ; i++)
 str1[i] = (char)toupper((unsigned char)str1[i]);
  printf("Uppercase string: %s\n", str1);
  break;
 case 9 :
 printf("Enter string: ");
 fgets(str1, 100, stdin);
 str1[strcspn(str1,"\n")] ='\0';
 for (i = 0; str1[i] != '\0'; i++)
 str1[i] = (char)tolower((unsigned char)str1[i]);
 printf("Lowercase string: %s\n", str1);
 break;
 case 10:
 printf("Exiting...\n");
 return 0;
 default: 
  printf("Invalid Choice!\n");
  }
 }
 return 0;
 }
 


