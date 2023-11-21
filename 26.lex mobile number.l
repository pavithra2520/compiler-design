%{
#include<stdio.h>
%}

%%
[6-9][0-9]{9} {printf("%s, is a Valid Mobile Number", yytext);}
.+ {printf("The Mobile Number is Invalid");}
%%
int yywrap()
{
return 1;
}
int main()
{
printf("\n Enter the mobile number:");	
yylex();
}
