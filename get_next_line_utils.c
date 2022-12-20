/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:23:48 by ebennix           #+#    #+#             */
/*   Updated: 2022/12/19 02:39:28 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c )
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

	// char	*ft_strjoin(char *s1, char *s2)
	// {
	// 	char			*str;
	// 	size_t			len;
	// 	unsigned int	i;
	// 	unsigned int	j;

	// 	i = 0;
	// 	j = 0;
	// 	if (!s1)
	// 		return (ft_strdup(s2));
	// 	if(!s2 || !s2[0])
	// 		return (s1);
	// 	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	// 	str = (char *)malloc(len * sizeof(char));
	// 	if (!str)
	// 		return (NULL);
	// 	while (s1[i] != '\0' && i < len)
	// 	{
	// 		str[i] = s1[i];
	// 		i++;
	// 	}
	// 	while (s2[j] != '\0' && i < len)
	// 			str[i++] = s2[j++];
	// 	str[i] = '\0';
	// 	return (str);
	// }
	
char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		if(!s1)
			return NULL;
		s1[0]= '\0';
	}
	if (!s2 || !s2)
		return NULL ;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!str)
		return NULL;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1);
	// free(s2);
	return (str);
}

// void	*ft_calloc(size_t nelem, size_t size)
// {
// 	char	*p;
// 	unsigned int i ;

// 	i = 0;
// 	p = (char *)malloc (nelem * size);
// 	if (!p)
// 		return NULL;
// 	while (i < (nelem * size))
// 	{
// 		p[i] = '\0';
// 		i++;
// 	}
// 	return (p);
// }
