#include<stdio.h>

void main(){
/*
1. open the file
2. read/write
3. wrinting... reading
4. close

*/

/*
FILE *fp=fopen("bugstophere.txt","w+");
//printf("slkdjfskld jflksjdf")
fprintf(fp,"hi how are you");
fclose(fp);
*/

FILE *fp;
char buff[255];

fp=fopen("bugstophere.txt","r");
fscanf(fp,"%s",buff);
printf("%s",buff);
fclose(fp);

}