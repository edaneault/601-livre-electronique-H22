#include <stdio.h>

#include "waveshare.h"

int main(void)
{
        if (wsInit() == 0) {
                printf("Yeah\n");
        } else {
                printf("Awww\n");
        }

        wsClear();
        texte = open("book_to_read.txt")
        read_texte = texte.read
        texte.close()
        for(int i = 0; i < 22; i++) {
                wsDisplayText(0,i*28, read_texte, 100);
        }
        wsRefresh();

        return 0;
}
