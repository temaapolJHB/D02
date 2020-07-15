/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:51:10 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/15 13:51:12 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_is_negative(int n);

void ft_putchar(char c)
{ 
    write(1, &c, 1);
}
void ft_is_negative(int n)
{
   

	if(n < 0)
	{
         ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
