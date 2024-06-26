/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollign <ncollign@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:07:31 by ncollign          #+#    #+#             */
/*   Updated: 2024/05/15 13:50:31 by ncollign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nblen(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}
