/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojacobs <ojacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:34:00 by ojacobs           #+#    #+#             */
/*   Updated: 2024/02/11 15:39:59 by ojacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_m_strjoin(char *bucket, char *bailer)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!bucket)
	{
		bucket = (char *)malloc(1 * sizeof(char));
		bucket[0] = '\0';
	}
	if (!bucket || !bailer)
		return (NULL);
	str = malloc(((ft_strlen(bucket) + ft_strlen(bailer)) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (bucket)
		while (bucket[++i] != '\0')
			str[i] = bucket[i];
	while (bailer[j] != '\0')
		str[i++] = bailer[j++];
	str[ft_strlen(bucket) + ft_strlen(bailer)] = '\0';
	free(bucket);
	return (str);
}
