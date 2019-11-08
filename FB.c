
#include <stdio.h>
#include <stdlib.h>


int main(){
int m;
int n;
int coinc;
char T[500];
char P[500];
int i;
int j;
printf("Deposita la secuencia \n");
scanf("%s",&T);
m=strlen(T);
printf("Deposita el patron a buscar \n");
scanf("%s",&P);
n=strlen(P);

for( i=0;i<m;i++)
{
 if(T[i]==P[i]){

    for( j=0; j<n;j++){
        if(T[i+j]!=P[j]){
            break;
        }
        else{
            if(j==n-1){
                coinc++;
            }
        }



    }


 }


}
printf("el numero de coincidencias es : %i", coinc);
return 0;
}
