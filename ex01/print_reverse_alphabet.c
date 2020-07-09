/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:55:41 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/09 12:56:37 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 		ft_putchar(char c)
{
	write(1, &c, 1);
}

void 		ft_print_reverse_alphabet(void)
{

	char alpha;
	
	alpha = 'z';
	while(alpha >= 'a')
			{	ft_putchar(alpha);
				alpha--;	
			}	

}



