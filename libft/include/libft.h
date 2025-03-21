/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:16:26 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/13 02:29:54 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "ft_printf.h"
# include "get_next_line.h"

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

typedef struct s_list_char
{
	char				c;
	struct s_list_char	*next;
}						t_lst_char;

int			ft_isstrnum(char *str);
void		ft_free(t_lst_char *lst);
int			ft_atoi(const char *str);
long		ft_atol(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *ptr, int value, size_t size);
void		ft_bzero(void *ptr, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle,
							size_t len);
char		*ft_itoa(int n);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start,
							size_t len);
char		*ft_strjoin(char *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
size_t		ft_nb_words(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int,
								char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar(char c, int fd);
void		ft_putstr(char *s, int fd);
void		ft_putnbr(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));
size_t		ft_strcspn(const char *s, const char *reject);
char		**ft_split_charset(char const *s, const char *charset);
char		*ft_strchr_charset(const char *s, const char *charset);

#endif
