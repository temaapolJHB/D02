/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:47:30 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/15 13:47:44 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
