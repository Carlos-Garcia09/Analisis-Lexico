%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

/*Seccion de opciones*/
%option noyywrap
/* Nombre de salida del archivo */
%option outfile = "scanner.c"


/* TOKEN SECTION */

/*BASIC TOKENS*/
DIGIT             [0-9]
LETTER            [a-zA-ZñÑ]
UNDERSCORE        [_]
COMMA             ","
POINT             "."
COMMENT           "//"
SEMICOLON         ";"
SPACES            [" "\n\t]
CHAIN             \"[^\n"]*\"
INTEGER           (-?[1-9][0-9]{0,4})|0
REAL              {DIGIT}{0,8}"."{DIGIT}{1,8}
ID                {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*

/*RESERVED WORDS*/
IF                "if"
ELSE              "else"
WHILE             "while"
FOR               "for"
INT               "int"
FLOAT             "float"
STRING            "string"
CHAR              "char"
PRINT             "print"
SCAN              "scan"
AND               "and"
OR                "or"

/*DELIMITERS*/
BRACKET_O             "{"
BRACKET_C             "}"
PARENTHESES_O     "("
PARENTHESES_C     ")"
SQUARE_BRACKET_O  "["
SQUARE_BRACKET_C  "]" 

/*OPERATORS*/
SUM                  "+"
SUBTRACTION          "-"
MULTIPLICATION       "*"
DIVISION             "/"
EQUAL                "="
LESS_THAN            "<"
LESS_OR_EQUAL_THAN   "<="
MORE_THAN            ">"
MORE_OR_EQUAL_THAN   ">="
EQUAL_THAN           "=="
NEGATION             "!"
DIFFERENT            "!="

/*Rules section, its order is very important because the pattern will be searched and executed in a sequential manner*/
%%

{COMMA}            {printf("COMMA: %s\n", yytext);}
{SEMICOLON}        {printf("SEMICOLON: %s\n", yytext);}
{INTEGER}          {printf("INTEGER: %s\n", yytext);}
{REAL}             {printf("REAL: %s\n", yytext);}
{CHAIN}            {printf("CHAIN: %s\n", yytext);}
{UNDERSCORE}       {printf("UNDERSCORE: %s\n", yytext);}
{POINT}            {printf("POINT: %s\n", yytext);}
{COMMENT}          {printf("COMMENT: %s\n", yytext);}

 
{SUM}                {printf("SUM OPERATOR: %s\n", yytext);}
{SUBTRACTION}        {printf("SUBTRACTION OPERATOR: %s\n", yytext);}
{MULTIPLICATION}     {printf("MULTIPLICATION OPERATOR: %s\n", yytext);}
{DIVISION}           {printf("DIVISION OPERATOR: %s\n", yytext);}
{EQUAL}              {printf("EQUAL OPERATOR: %s\n", yytext);}
{LESS_THAN}          {printf("LESS THAN OPERATOR: %s\n", yytext);}
{LESS_OR_EQUAL_THAN} {printf("LESS OR EQUAL THAN OPERATOR: %s\n", yytext);}
{MORE_THAN}          {printf("MORE THAN OPERATOR: %s\n", yytext);}
{MORE_OR_EQUAL_THAN} {printf("MORE OR EQUAL THAN OPERATOR: %s\n", yytext);}
{EQUAL_THAN}         {printf("EQUAL THAN OPERATOR: %s\n", yytext);}
{NEGATION}           {printf("NEGATION OPERATOR: %s\n", yytext);}
{DIFFERENT}          {printf("DIFFERENT OPERATOR: %s\n", yytext);}

{BRACKET_O}          {printf("OPENING BRACKET: %s\n", yytext);}
{BRACKET_C}          {printf("CLOSING BRACKET: %s\n", yytext);}
{PARENTHESES_O}      {printf("OPENING PARENTHESES: %s\n", yytext);}
{PARENTHESES_C}      {printf("CLOSING PARENTHESES: %s\n", yytext);}
{SQUARE_BRACKET_O}   {printf("OPENING SQUARE BRACKET: %s\n", yytext);}
{SQUARE_BRACKET_C}   {printf("CLOSING SQUARE BRACKET: %s\n", yytext);}  

{IF}              {printf("RESERVED WORD IF\n");}
{ELSE}            {printf("RESERVED WORD ELSE\n");}
{WHILE}           {printf("RESERVED WORD WHILE\n");}
{FOR}             {printf("RESERVED WORD FOR\n");}
{INT}             {printf("RESERVED WORD INT\n");}
{FLOAT}           {printf("RESERVED WORD FLOAT\n");}
{STRING}          {printf("RESERVED WORD STRING\n");}
{CHAR}            {printf("RESERVED WORD CHAR\n");}
{PRINT}           {printf("RESERVED WORD PRINT\n");}
{SCAN}            {printf("RESERVED WORD SCAN\n");}
{AND}             {printf("RESERVED WORD AND\n");}
{OR}              {printf("RESERVED WORD OR\n");}       

{ID}              {printf("ID: %s\n", yytext);}

{SPACES}      

.               {printf("Error, Invalid Character: %s\n", yytext);}

%%

int main(){
    
    char linea[255];
    FILE *archivo = fopen("code.txt","r");
    FILE *aux = fopen("tem.txt", "w");

    while(fgets(linea, sizeof(linea), archivo)){
        aux = freopen("tem.txt", "w", aux);
        
        if(linea[strlen(linea)-1] == '\n')
            linea[strlen(linea)-1] = ' ';
        
        printf("\n%s\n\n", linea);
        fprintf(aux, "%s", linea);
        aux = freopen("tem.txt", "r", aux);
        yyin = aux;
        yylex();  
    }
    
    fclose(archivo);
    fclose(aux);
    remove("tem.txt");
    return 0;
}
