/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/18 14:26:58 by shicai        #+#    #+#                 */
/*   Updated: 2026/10/20 12:51:26 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *s, char c);
static void		free_split(char **ptr, size_t len);
static char		*copy_word(const char *s, size_t len);
static int		fill_split(char **ptr, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	ptr = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (fill_split(ptr, s, c) != 0)
		return (NULL);
	return (ptr);
}

static size_t	count_word(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_split(char **ptr, size_t len)
{
	while (len > 0)
	{
		len--;
		free(ptr[len]);
	}
	free(ptr);
}

static char	*copy_word(const char *s, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static int	fill_split(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	copy_count;

	i = 0;
	copy_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ptr[copy_count] = copy_word(s + start, i - start);
		if (!ptr[copy_count])
		{
			free_split(ptr, copy_count);
			return (1);
		}
		copy_count++;
	}
	ptr[copy_count] = NULL;
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s = "  ,Hello,  this,  is,  Shitao,  ";
	char	c = ',';
	char	**result = ft_split(s, c);
	int		i;

	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
 */