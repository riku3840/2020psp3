#include <stdio.h>

#define DEBUG

#define ALPHABET_LEN    255

char StrOriginal[] = "On a dark deseart highway, cool wind in my hair.";
char StrKey[] = "wind";

char* ForceSearch(char text[], char key[])
{
    int pos=0;
    int start =0;
    while(text[pos+start]!='\0')
    {
     if(text[pos+start]==key[pos])
     {
      pos++;
      if(key[pos]=='\0')
      {
        return(&text[start]);
        break;
      }
     }
     else
     {
      start++;
      pos=0; 
     }
     }
}

char* BMSearch(char text[], char key[])
{
    //  ここを実装する

}

int main(void)
{
    char*   str;
    str = ForceSearch(StrOriginal, StrKey);
    printf("Force Search. Find keyword at:%s\n", str);

    str = BMSearch(StrOriginal, StrKey);
    printf("BM Search. Find keyword at:%s\n", str);

    return 0;
}