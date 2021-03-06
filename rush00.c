/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctifany <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:48:18 by ctifany           #+#    #+#             */
/*   Updated: 2021/01/24 18:48:41 by ctifany          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int x, char f_symb, char m_symb, char l_symb)
{
	ft_putchar(f_symb);
	while (x - 1 > 1)
	{
		ft_putchar(m_symb);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(l_symb);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_char(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_print_char(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
		{
			ft_print_char(x, 'o', '-', 'o');
		}
	}
}
