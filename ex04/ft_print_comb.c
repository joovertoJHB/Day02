/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:14:12 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/10 10:24:25 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void 	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_print_digits(char a, char b, char c)
{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			ft_putchar(',');
			ft_putchar('.');
		}
}

void	ft_print_comb(void)
{
		char	a = '0';
		char	b = '0';
		char	c = '0';

		while (a <= '9')
			{
						b = a + 1;
						while (b <= '9')
						{
										c = b + 1;
										while (c <= '9')
										{
														if (a < b && b < c)
														{
																			ft_print_digits(a, b, c);
														}
														c++;
										}
										b++;
						}
						a++;
			}
}
