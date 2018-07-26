/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdos-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:40:37 by thdos-re          #+#    #+#             */
/*   Updated: 2018/07/26 06:52:42 by thdos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if ((nb <= 0) || (nb == 1))
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			i++;
		return (1);
	}
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		nb++;
	return (nb);
}
