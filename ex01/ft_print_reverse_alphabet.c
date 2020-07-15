/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:48:52 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/15 13:48:56 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet();
void ft_putchar(char c);}

void ft_putchar(char c)
{

    write(1, &c, 1);

}

void ft_print_reverse_alphabet()
{

    char letter;

	letter = 'z';

	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
        ft_putchar('\n');
}
