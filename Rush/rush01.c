/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaolive <anaolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:37:43 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/07 03:35:05 by anaolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01_first_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1)
			ft_putchar('/');
		else if (counter > 1 && counter < total_characters)
			ft_putchar('*');
		else if (counter == total_characters)
			ft_putchar('\\');
		counter++;
	}
	ft_putchar('\n');
}

void	rush01_common_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1 || counter == total_characters)
			ft_putchar('*');
		else
			ft_putchar(' ');
		counter++;
	}
	ft_putchar('\n');
}

void	rush01_last_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1)
			ft_putchar('\\');
		else if (counter > 1 && counter < total_characters)
			ft_putchar('*');
		else if (counter == total_characters)
			ft_putchar('/');
		counter++;
	}
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	int	counter;

	if (x < 0)
		x = (x * -1);
	if (y < 0)
		y = (y * -1);
	counter = 0;
	while (counter < y)
	{
		if (counter == 0)
			rush01_first_line(x);
		else if (counter == (y - 1))
			rush01_last_line(x);
		else
			rush01_common_line(x);
		counter++;
	}
}
