#include <stdio.h>

#include "waveshare.h"

int main(void)
{
        if (wsInit() == 0) {
                printf("Yeah\n");
        } else {
                printf("Awww\n");
        }

        lookatmicrosd();

        wsClear();

        image_write();

        

	system("sudo shutdown -P now");

        wsRefresh();
        
        return 0;
}
