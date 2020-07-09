/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:35:04 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/09 10:50:55 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int 		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
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

int 	main()
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return(0);
}
