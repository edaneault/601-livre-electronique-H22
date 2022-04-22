#include <stdio.h>

#include "waveshare.h"
char buffer_texte[1000];
int main(void)
{
        if (wsInit() == 0) {
                printf("Yeah\n");
        } else {
                printf("Awww\n");
        }
        FILE *fp;
        char c;
        int n = 0;
        fp = fopen("book_to_read.txt","r");
        if(fp == NULL) {
        perror("Error in opening file");
        return(-1);
      } do {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
      for(int a = 0; a < 1000; a++){
      buffer_texte[a] = c;
      }
      } while(1);

     fclose(fp);
        wsClear();
        for(int i = 0; i < 22; i++) {
            wsDisplayText(0,i*28, buffer_texte, 100);
        }
        wsRefresh();

        return 0;
}
