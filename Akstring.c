/*Program on concatenate of strings */
#include<stdio.h>
#include<string.h>
void main()
{
	char string[30],string2[20];
	int length=0,temp,i;
	printf("Enter String 1 Elements:");
	gets(string);
	printf("Enter elements for string 2:");
	gets(string2);
	for(i=0;string[i]!='\0';i++) 
	{
	length++;
	temp =length;
    }
    for(i=0;string2[i]!='\0';i++)
	{
    string[temp]=string2[i];
    temp++;
	}
	string[temp]!='\0';
	printf("The final string:");
	puts(string);
	
	
}