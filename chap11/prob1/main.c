#include <stdio.h>
int main( )
{
alarm(5);
printf("infinite loof \n");
while (1) {
sleep(1);
printf("1second pass\n");
}
printf("not running \n");
}
