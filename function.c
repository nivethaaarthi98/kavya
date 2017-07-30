#include<stdio.h>
#include<string.h>
int main()
{
char string[100],reverse[100];
int len,i,index,wordstart,wordend;
printf("enter any string");
gets(string);
len=strlen(string);
index=0;
wordstart=len-1;
wordend=len-1;
while(wordstart>0)
[
if(string[wordstart]==' ')
{
i=wordstart+1;
while(i<=wordend)
{
reverse[index]=string[i];
i++;
index++;
}
reverse[index++]=' ';
wordend=wordstart-1;
}
wordstart--;
for(i=0;i<=wordend;i++)
{
reverse[index]=string[i];
index++;
}
reverse[index]='\0';
printf("original string\n%s\n\n",string);
printf("reverse ordered words\n%s",reverse);
return 0;
}
