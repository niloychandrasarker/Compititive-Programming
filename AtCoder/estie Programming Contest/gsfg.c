#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,n;
    int ispalindrome=1;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n/2;i++)  
    {
    	if(s[i]!=s[n-i-1])
    	ispalindrome=0;
      break;

 	}
 	if(ispalindrome)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");

 	 
     
    return 0;
}