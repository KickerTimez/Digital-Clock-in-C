#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
    int h , m , s;
    printf("Enter Clock Format in\nHH:MM:SS:\n");
    scanf("%i %i %i", &h,&m,&s);

    if( h > 12 || m > 59 || s > 59)
    {
        printf("Error404....\nWrong Format\n");

        return 1;
    }

    while(1)
    {
        system("clear");

        printf("%02i:%02i:%02i ", h , m , s);

        s++;
        if (s > 59)
        {
            s = 0;
            m++;
        }
        else if (m > 59 )
        {
            m = 0;
            if (h >= 12)
            {
                h = 1;
            }
            else
            {
                h++;
            }
        }

        sleep(1);
    }



}
