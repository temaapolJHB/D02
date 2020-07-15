/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:50:08 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/15 13:50:11 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
