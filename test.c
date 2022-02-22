
#include <unistd.h>


int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (ac >= 3)
    {

        while (av[j])
        {
            while (av[j][i])
            {
                if (av[j][i] >= '0' && av[j][i] <= '9')
                    i++;
                else
                {
                    write (1, "only num\n", 10);
                    exit(0);
                }
            }
            
            i = 0;
            j++;
        }
    }
    else
        write (1, "moore", 6);
}