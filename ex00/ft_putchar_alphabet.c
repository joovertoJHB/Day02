/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:55:19 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/09 10:23:57 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void		 ft_print_alphabet(void)
{		
		char i;
		
		i = 'a';
		while ( i <= 'z' )
			{	ft_putchar(i);
				i++;
			}
		
}

int		main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return(0);
}