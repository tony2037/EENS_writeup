#include <stdio.h>                                             
#include <stdlib.h>                                            
#include <string.h>                                            

char acc[10];                                                  
char pass[10];                                                 
char allow[4];                                                 

int main() {                                                   
    strcpy(allow,"no");                                        

    FILE *fd = fopen("secret.txt", "r");                       
    char username[10], password[10], flag[256];                

    fscanf(fd, "%s", username);                                
    fscanf(fd, "%s", password);                                
    fscanf(fd, "%s", flag);                                    


    printf("Username: \n");                                    
    fflush(stdout);                                            
    scanf("%s",acc);                                           
    fflush(stdout);                                            
    printf("Password: \n");                                    
    fflush(stdout);                                            
    scanf("%s",pass);                                          
    fflush(stdout);                                            


    if ((!strcmp(acc, username)) && !(strcmp(pass, password)) )
		strcpy(allow, "yes");                                  

    if (!strcmp(allow, "yes"))                                 
		printf("Nice!\n%s\n", flag);                           
    else                                                       
        printf("You are bad guy so you cannot access!\n");   
	
    fflush(stdout);                                            
    return 0;                                                  
}                                                              
