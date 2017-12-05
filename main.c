#include <stdio.h>


char commands [200][10];
int  variables [20];
int currentvariable =0;


int sum(int x,int y){return x+y;}


int subtract(int x,int y){return x-y;}

int multiply (int x,int y){return x*y;}

int divide(int x,int y){return x/y;}


int comparison(int x, int y){
    
    if(x ==y){
        
        return 1;
        }
    else{return 0;}
}

void declare(int x){
    
    variables[currentvariable]=x;
    currentvariable++;
    
    
    
    }


void initialise(int x){
    variables[currentvariable]=x;
    currentvariable++;
    
    }


void print(int x){
    
    printf("%d",x);
    
    
    }

void read_words () {
     int i = 0;

 int BUFSIZE = 1000;
 char* words[20];
 FILE *fp = fopen("f.txt", "r");
 if (fp == 0){
        fprintf(stderr, "Error while opening");
        exit(1);
 }

 words[i] = malloc(BUFSIZE);
  while (fgets(words[i], BUFSIZE, fp)) {
        i++;
        words[i] = malloc(BUFSIZE);
 } 

printf("%s",words[2]);
 
}




int main(int argc, char **argv)
{
read_words();
return 0;
}
