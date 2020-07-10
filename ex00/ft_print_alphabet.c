
void ft_puchar(char c);
void ft_print_alphabet();

void ft_putchar(char c)
{

	write(1, &c, 1);

}
void ft_print_alphabet()
{
    
	char letter;

     letter = 'a';	
	 while(letter <= 'z')
	 {
	   ft_putchar(letter);
	   letter++;
              
	 }

       ft_putchar('\n');
}

