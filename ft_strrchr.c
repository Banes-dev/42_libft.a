/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *no_ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:19:18 by ehay              #+#    #+#             */
/*   Updated: 2023/10/18 15:02:37 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *text, char lettre)
{
	int	i;

	i = (ft_strlen(text) - 1);
	if (!text)
	{
		return (NULL);
	}
	while (text[i] != '\0')
	{
		if (text[i] == lettre)
		{
			return ((char *)(text + i));
		}
		i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char textbon[] = "ABcdTGzwtzt";
// 	char notext = 'z';
// 	if (ft_strrchr(textbon, notext))
// 	{
// 		printf("%s", ft_strrchr(textbon, notext));
// 		printf("\n");
// 		printf("%s", strrchr(textbon, notext));
// 		printf("\n");
// 	}
// }