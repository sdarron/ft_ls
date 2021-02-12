/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:09:13 by sdarron           #+#    #+#             */
/*   Updated: 2021/02/12 16:39:07 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <math.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

# define BUFF_SIZE 1
# define FD_SIZE 100

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_flags
{
	int				l;
	int				min;
	int				plus;
	int				space;
	int				resh;
	int				zr;
	int				percent;
	long long int	w;
	long long int	tchn;
	int				tchn_t;
	char			*mod;
	char			tp;
	char			non_v;
}					t_flags;

int					ft_printf(char *fmt, ...);
int					fdprintf(int fd, char *fmt, ...);
int					nbpass(char *s, int i);
int					printtxt(char *s, t_flags *f, int i, int fd);
int					printnbr(char *s, int fd);
int					precision(char *s, t_flags *f, int i);
int					width(char *s, t_flags *f, int i);
int					pars(va_list ar, t_flags *f, char *s, int fd);
int					parstp(va_list ar, t_flags *f, int i, char *s);
int					putsn(char *str, t_flags *f, int min, int fd);
int					putcharn(char c, t_flags *f, int i, int fd);
int					putnbrll(long long int n, int i);
int					putnbrlln(long long int n, t_flags *f, int fd, int z);
int					putnbrf(va_list ar, t_flags *f, int z, int fd);
int					calcnbr(long long int d);
int					ptrtype(long long int d, t_flags *f, int fd);
int					decl(va_list ar, t_flags *f, int fd);
int					percent(char c, t_flags *f, int fd);
int					octal(long long int d, t_flags *f, int i, int fd);
int					unsig(long long int d, t_flags *f, int i, int fd);
int					hex(long long int d, t_flags *f, int fd, int i);
int					ffloat(va_list ar, t_flags *f, int fd);
char				*strjoinfree(char const *s1, char const *s2, int n);
char				*strtemp(int x, int i, char c);
char				*uitoabase(unsigned long long int value, int base);
char				*itoabaseld(long double value, int base);
t_flags				*obnulfl(t_flags *flags);
t_flags				*nultchn(t_flags *f);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int ch);
int					ft_isalpha(int ch);
int					ft_isascii(int ch);
int					ft_isdigit(int ch);
int					ft_isprint(int ch);
void				*ft_memccpy(void *des, const void *src, int ch, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *arr1, const void *arr2, size_t n);
void				*ft_memcpy(void *des, const void *src, size_t n);
void				*ft_memmove(void *des, const void *src, size_t n);
void				*ft_memset(void *memptr, int val, size_t num);
char				*ft_strcat(char *des, const char *src);
char				*ft_strchr(const char *str, int sym);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *c);
char				*ft_strncat(char *des, const char *app, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strnstr(const char *b, const char *l, size_t len);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strstr(const char *str1, const char *str2);
int					ft_tolower(int ch);
int					ft_toupper(int ch);
void				ft_putchar(char c);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_strclr(char *s);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmap(char const *s, char(*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				*ft_strrev(char *s);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void(*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_quicksort(long long int arr[], int left, int right);
int					ft_arrmax(int arr[], int beg, int end);
int					ft_arrmin(int arr[], int beg, int end);
int					lineoutput(char **fd_arr, char **line, int count);
int					ft_get_next_line(int fd, char **line);
char				*ft_itoa_base(long long int value, int base);
char				*ft_strlowcase(char *str);

#endif
