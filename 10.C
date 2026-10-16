#include<stdio.h>
int main()
{
FILE*fp;
char name[20];
fp=tmpfile();
if(fp==NULL)
{
printf("File cannot be created");
return 0;
}
fprintf(fp,"Kumar\n");
fprintf(fp,"101\n");
fprintf(fp,"85\n");
rewind(fp);
printf("Student Details\n");
printf("---------------\n");
while(fgets(name,20,fp)!=NULL)
{
printf("%s",name);
}
fclose(fp);
return 0;
}