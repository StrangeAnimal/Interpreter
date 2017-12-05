#include <stdio.h>
#include <string.h>


char commands [30][100];
int  variables [26];
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


void readcommands(){
    
    printf("Enter commands line by line pressing enter enter command exit to finish maximum 30 lines \n");
    
    int x = 0;
    
    do{
    
    scanf("%s",commands[x]);
    
  if(commands[x][0] == 'e' &&commands[x][1] == 'x' &&commands[x][2] == 'i' &&commands[x][3] == 't')break;
  
  
  
    
    x++;
        
    
    
    
    
    
    }while(x<29);
    
    
    
    
}


void interpreter(){
    
    
    for(int x=0 x<30; x++){
        
        
        
        
        
        
        
        
        }
    
    
    
    
    }




int main(int argc, char **argv)
{
readcommands();
return 0;

}
