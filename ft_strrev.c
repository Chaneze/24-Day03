/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:19:42 by caroua            #+#    #+#             */
/*   Updated: 2017/08/07 10:05:53 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	char *end;
	char *begin;
	char k;

	end = str;
	begin = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		k = *end;
		*end = *begin;
		*begin = k;
		begin++;
		end--;
	}
	return (str);
}
