#include <stdio.h>
#include <unistd.h>

int y = 7;

int main(void)
{
printf("Hello, world!\n");
y = y + 3;
sleep(5);

return 0;
}
