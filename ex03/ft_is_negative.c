/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:46:51 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/10 10:12:43 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
		write(1, &c, 1);
}
void 	ft_is_negative(int n)
{
		if (n <= 0 || n== '\0')
			{
				ft_putchar ('N');
			}

		else if (n >= 0)
			{
				ft_putchar ('P');
			}
		ft_putchar('\n');
}


