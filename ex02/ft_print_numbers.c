#include <stdio.h>
#include <unistd.h>

void ft_print_numbers();
void ft_putchar(char c);

void ft_putchar(char c)
{
   write(1, &c, 1);
}

void ft_print_numbers()
{
   int number;

   number  = '0';
   while(number <= '9')
   {
	   ft_putchar(number);
	   number++;
   }

   ft_putchar('\n');
}

int main()
{
	ft_print_numbers();

	return 0;
}


