/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 09:48:06 by floblanc          #+#    #+#             */
/*   Updated: 2019/04/27 12:47:03 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		other_turn(int **matrix, t_room *tab, int *way, int room_n)
{
	int	i;
	int	lim;
	int	j;

	i = 0;
	j = 0;
	printf("si y a pas pouet c'est que ca plante du premier coup (room_n %d)\n", room_n);
	while (way[i] != room_n)//si ca segfault c'est peut etre la mais ca devrait pas
	{
		if (i < 100)
			printf("way[%d] = %d\n", i, way[i]);
		i++;
	}
	i--;
	lim = matrix[i][i];
	while (lim > 0)
	{
		if (matrix[i][j] == -1)
		{
			lim--;
			if (tab[j].taken == 0)
			{
	//			printf("pouet1\n");
				return (1);
			}
		}
		j++;
	}
//	printf("pouet0\n");
	return (0);
}