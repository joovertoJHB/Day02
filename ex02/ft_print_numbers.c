/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:09:23 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/10 10:09:11 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_print_numbers(void)
{
		char	alpha;

		alpha = '1';
		while(alpha <= '9')
				{		ft_putchar(alpha);
						alpha++;
				}

}


