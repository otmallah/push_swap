

int main(int ac, char **av)
{
    static int l;
    static int u;
    static int s;
    static int o;
    static int n;
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                l++;
            else if (av[1][i] >= '0' && av[1][i] <= '9')
                n++;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                u++;
            else if (av[1][i] == 32)
                s++;
            else
                o++;
            i++;
        }
        printf("space = %d\n", s);
        printf("upper = %d\n", u);
        printf("lower = %d\n", l);
        printf("other = %d\n", o);
        printf("num = %d\n", n);

    }
    else
        puts("2 arg");
}