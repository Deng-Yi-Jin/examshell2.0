/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:41:44 by djin              #+#    #+#             */
/*   Updated: 2023/04/13 19:46:17 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	int	i;
	int	odd;

	i = 'A';
	while (i <= 'Z')
	{
		if (i % 2 == 0)
			write(1, &i, 1);
		else
		{
			odd = i + 32;
			write(1, &odd, 1);
		}
		i++;
	}
	return (0);
}