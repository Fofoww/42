/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 21:27:07 by doriol            #+#    #+#             */
/*   Updated: 2017/04/12 22:41:00 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
char	*ft_strcat(char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char * dest, const char * src);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char * dest, const char * src, size_t len);
char	*ft_strstr(const char *big, const char *little);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strrchr(const char *s, int c);

int		main(void)
{
	char dest[100];
	char dest2[100];
	char dest3[100] = "bite de bite";
	char dest4[100] = "test de bitee";
	char dest5[100] = "bite de bite";
	char dest6[100] = "test de bitee";
	char dest7[100] = "bite de bite";
	char dest8[100] = "test de bitee";
	char dest9[100] = "bite de bite";
	char dest10[100] = "test de bitee";
	char dest11[100] = "bite de bite";
	char dest12[100] = "test de bitee";
	char dest13[100] = "bite de bite";
	char dest14[100] = "test de bitee";
	printf("\033[0m------------------------ft_memset---------------------\n");
	printf("\033[35mmemset	   : %s\033[0m\n", memset(dest3, 15, 9));
	printf("\033[31mft_memset  : %s\033[0m\n", ft_memset(dest3, 15, 9));
	printf("\033[35mmemset     : %s\033[0m\n", memset(dest4, 6, 2));
	printf("\033[31mft_memset  : %s\033[0m\n", ft_memset(dest4, 6, 2));
	printf("\033[0m------------------------ft_bzero---------------------\n");
	bzero(dest3, 0);
	ft_bzero(dest3, 0);
	printf("\033[35mbzero      : %s\033[0m\n", dest3);
	printf("\033[31mft_bzero   : %s\033[0m\n", dest3);
	bzero(dest4, 5);
	ft_bzero(dest4, 5);
	printf("\033[35mbzero      : %s\033[0m\n", dest4);
	printf("\033[31mft_bzero   : %s\033[0m\n", dest4);
	printf("\033[0m------------------------ft_memcpy---------------------\n");
	printf("\033[35mmemcpy     : %s\033[0m\n", memcpy(dest5, dest6, 5));
	printf("\033[31mft_memcpy  : %s\033[0m\n", ft_memcpy(dest5, dest6, 5));
	printf("\033[35mmemcpy     : %s\033[0m\n", memcpy(dest6, dest5, 9));
	printf("\033[31mft_memcpy  : %s\033[0m\n", ft_memcpy(dest6, dest5, 9));
	printf("\033[0m------------------------ft_memccpy---------------------\n");
	printf("\033[35mmemccpy    : %s\033[0m\n", memccpy(dest7, dest8, 'e', 15));
	printf("\033[31mft_memccpy : %s\033[0m\n", ft_memccpy(dest7, dest8, 'e', 15));
	printf("\033[35mmemccpy    : %s\033[0m\n", memccpy(dest8, dest7, 'b', 2));
	printf("\033[31mft_memccpy : %s\033[0m\n", ft_memccpy(dest8, dest7, 'b', 2));
	printf("\033[0m------------------------ft_memmove---------------------\n");
	printf("\033[35mmemmove    : %s\033[0m\n", memmove(dest9, dest10, 5));
	printf("\033[31mft_memmove : %s\033[0m\n", ft_memmove(dest9, dest10, 5));
	printf("\033[35mmemmove    : %s\033[0m\n", memmove(dest9, dest10, 15));
	printf("\033[31mft_memmove : %s\033[0m\n", ft_memmove(dest9, dest10, 15));
	printf("\033[0m------------------------ft_memchr---------------------\n");
	printf("\033[35mmemchr     : %s\033[0m\n", memchr(dest11, 'e', 9));
	printf("\033[31mft_memchr  : %s\033[0m\n", ft_memchr(dest11, 'e', 9));
	printf("\033[35mmemchr     : %s\033[0m\n", memchr(dest12, 'b', 15));
	printf("\033[31mft_memchr  : %s\033[0m\n", ft_memchr(dest12, 'b', 15));
	printf("\033[0m------------------------ft_memcmp---------------------\n");
	printf("\033[35mmemcmp     : %d\033[0m\n", memcmp(dest13, dest14, 5));
	printf("\033[31mft_memcmp  : %d\033[0m\n", ft_memcmp(dest13, dest14, 5));
	printf("\033[35mmemcmp     : %d\033[0m\n", memcmp(dest14, dest13, 15));
	printf("\033[31mft_memcmp  : %d\033[0m\n", ft_memcmp(dest14, dest13, 15));
	printf("\033[0m--------------------------ft_strstr--------------------\n");
	printf("\033[35mstrstr     : %s\033[0m\n", strstr("bite de bite", "bite"));
	printf("\033[31mft_strstr  : %s\033[0m\n", ft_strstr("bite de bite", "bite"));
	printf("\033[35mstrstr     : %s\033[0m\n", strstr("test de bite", "yu"));
	printf("\033[31mft_strstr  : %s\033[0m\n", ft_strstr("test de bite", "yu"));
	printf("\033[0m------------------------ft_strnstr---------------------\n");
	printf("\033[35mstrnstr    : %s\033[0m\n", strnstr("bite de bite", "bite", 5));
	printf("\033[31mft_strnstr : %s\033[0m\n", ft_strnstr("bite de bite", "bite", 5));
	printf("\033[35mstrnstr    : %s\033[0m\n", strnstr("test de bite", "yu", 9));
	printf("\033[31mft_strnstr : %s\033[0m\n", ft_strnstr("test de bite", "yu", 9));
	printf("\033[0m--------------------------ft_strncpy-------------------\n");
	printf("\033[35mstrncpy    : %s\033[0m\n", strncpy(dest, "bite", 5));
	printf("\033[31mft_strncpy : %s\033[0m\n", ft_strncpy(dest2, "bite", 5));
	printf("\033[35mstrncpy    : %s\033[0m\n", strncpy(dest, "yu", 9));
	printf("\033[31mft_strncpy : %s\033[0m\n", ft_strncpy(dest2, "yu", 9));
	printf("\033[0m--------------------------ft_strncmp-------------------\n");
	printf("\033[35mstrncmp    : %d\033[0m\n", strncmp("bite de bite", "bite", 5));
	printf("\033[31mft_strncmp : %d\033[0m\n", ft_strncmp("bite de bite", "bite", 5));
	printf("\033[35mstrncmp    : %d\033[0m\n", strncmp("test de bite", "yu", 9));
	printf("\033[31mft_strncmp : %d\033[0m\n", ft_strncmp("test de bite", "yu", 9));
	printf("\033[0m--------------------------ft_strncat-------------------\n");
	printf("\033[35mstrncat    : %s\033[0m\n", strncat(dest, "bite", 5));
	printf("\033[31mft_strncat : %s\033[0m\n", ft_strncat(dest2, "bite", 5));
	printf("\033[35mstrncat    : %s\033[0m\n", strncat(dest, "ia", 9));
	printf("\033[31mft_strncat : %s\033[0m\n", ft_strncat(dest2, "ia", 9));
	printf("\033[0m--------------------------ft_strlen--------------------\n");
	printf("\033[35mstrlen     : %lu\033[0m\n", strlen("bite de bite"));
	printf("\033[31mft_strlen  : %lu\033[0m\n", ft_strlen("bite de bite"));
	printf("\033[35mstrlen     : %lu\033[0m\n", strlen("test de biteeee"));
	printf("\033[31mft_strlen  : %lu\033[0m\n", ft_strlen("test de biteeee"));
	printf("\033[0m--------------------------ft_strdup--------------------\n");
	printf("\033[35mstrdup     : %s\033[0m\n", strdup("bite de bite"));
	printf("\033[31mft_strdup  : %s\033[0m\n", ft_strdup("bite de bite"));
	printf("\033[35mstrdup     : %s\033[0m\n", strdup("test de biteeee"));
	printf("\033[31mft_strdup  : %s\033[0m\n", ft_strdup("test de biteeee"));
	printf("\033[0m--------------------------ft_strcpy--------------------\n");
	printf("\033[35mstrcpy     : %s\033[0m\n", strcpy(dest, "bite"));
	printf("\033[31mft_strcpy  : %s\033[0m\n", ft_strcpy(dest2, "bite"));
	printf("\033[35mstrcpy     : %s\033[0m\n", strcpy(dest, "yu"));
	printf("\033[31mft_strcpy  : %s\033[0m\n", ft_strcpy(dest2, "yu"));
	printf("\033[0m--------------------------ft_strcmp--------------------\n");
	printf("\033[35mstrcmp     : %d\033[0m\n", strcmp("bite de bite", "bite"));
	printf("\033[31mft_strcmp  : %d\033[0m\n", ft_strcmp("bite de bite", "bite"));
	printf("\033[35mstrcmp     : %d\033[0m\n", strcmp("test de bite", "yu"));
	printf("\033[31mft_strcmp  : %d\033[0m\n", ft_strcmp("test de bite", "yu"));
	printf("\033[0m--------------------------ft_strcat--------------------\n");
	printf("\033[35mstrcat     : %s\033[0m\n", strcat(dest, "bite"));
	printf("\033[31mft_strcat  : %s\033[0m\n", ft_strcat(dest2, "bite"));
	printf("\033[35mstrcat     : %s\033[0m\n", strcat(dest, "yu"));
	printf("\033[31mft_strcat  : %s\033[0m\n", ft_strcat(dest2, "yu"));
	printf("\033[0m--------------------------ft_atoi----------------------\n");
	printf("\033[35matoi       : %d\033[0m\n", atoi("  56485 54554 4114"));
	printf("\033[31mft_atoi    : %d\033[0m\n", ft_atoi("  56485 54554 4114"));
	printf("\033[35matoi       : %d\033[0m\n", atoi("jrgijr 55 484"));
	printf("\033[31mft_atoi    : %d\033[0m\n", ft_atoi("jrgijr 55 484"));
	printf("\033[0m------------------------ft_strchr---------------------\n");
	printf("\033[35mstrchr     : %s\033[0m\n", strchr("bite de bite", 'e'));
	printf("\033[31mft_strchr  : %s\033[0m\n", ft_strchr("bite de bite", 'e'));
	printf("\033[35mstrchr     : %s\033[0m\n", strchr("test de bite", 'y'));
	printf("\033[31mft_strchr  : %s\033[0m\n", ft_strchr("test de bite", 'y'));
	printf("\033[0m------------------------ft_strrchr---------------------\n");
	printf("\033[35mstrrchr    : %s\033[0m\n", strrchr("bite de bite", 'e'));
	printf("\033[31mft_strrchr : %s\033[0m\n", ft_strrchr("bite de bite", 'e'));
	printf("\033[35mstrrchr    : %s\033[0m\n", strrchr("test de bite", 'y'));
	printf("\033[31mft_strrchr : %s\033[0m\n", ft_strrchr("test de bite", 'y'));
	printf("\033[0m------------------------ft_isprint---------------------\n");
	printf("\033[35misprint    : %d\033[0m\n", isprint('/'));
	printf("\033[31mft_isprint : %d\033[0m\n", ft_isprint('/'));
	printf("\033[35misprint    : %d\033[0m\n", isprint('\t'));
	printf("\033[31mft_isprint : %d\033[0m\n", ft_isprint('\t'));
	printf("\033[0m------------------------ft_isalpha---------------------\n");
	printf("\033[35misalpha    : %d\033[0m\n", isalpha('e'));
	printf("\033[31mft_isalpha : %d\033[0m\n", ft_isalpha('e'));
	printf("\033[35misalpha    : %d\033[0m\n", isalpha('5'));
	printf("\033[31mft_isalpha : %d\033[0m\n", ft_isalpha('5'));
	printf("\033[0m------------------------ft_isdigit---------------------\n");
	printf("\033[35misdigit    : %d\033[0m\n", isdigit('5'));
	printf("\033[31mft_isdigit : %d\033[0m\n", ft_isdigit('5'));
	printf("\033[35misdigit    : %d\033[0m\n", isdigit('a'));
	printf("\033[31mft_isdigit : %d\033[0m\n", ft_isdigit('a'));
	printf("\033[0m------------------------ft_isascii---------------------\n");
	printf("\033[35misascii    : %d\033[0m\n", isascii('.'));
	printf("\033[31mft_isascii : %d\033[0m\n", ft_isascii('.'));
	printf("\033[35misascii    : %d\033[0m\n", isascii('&'));
	printf("\033[31mft_isascii : %d\033[0m\n", ft_isascii('&'));
	printf("\033[0m------------------------ft_strlcat---------------------\n");
	printf("\033[35mstrlcat    : %lu\033[0m\n", strlcat(dest, "bite", 5));
	printf("\033[31mft_strlcat : %zu\033[0m\n", ft_strlcat(dest2, "bite", 5));
	printf("\033[35mstrlcat    : %lu\033[0m\n", strlcat(dest, "yu", 9));
	printf("\033[31mft_strlcat : %zu\033[0m\n", ft_strlcat(dest2, "yu", 9));
	printf("\033[0m------------------------ft_toupper---------------------\n");
	printf("\033[35mtoupper    : %d\033[0m\n", toupper('u'));
	printf("\033[31mft_toupper : %d\033[0m\n", ft_toupper('u'));
	printf("\033[35mtoupper    : %d\033[0m\n", toupper(']'));
	printf("\033[31mft_toupper : %d\033[0m\n", ft_toupper(']'));
	printf("\033[0m------------------------ft_tolower---------------------\n");
	printf("\033[35mtolower    : %d\033[0m\n", tolower('U'));
	printf("\033[31mft_tolower : %d\033[0m\n", ft_tolower('U'));
	printf("\033[35mtolower    : %d\033[0m\n", tolower(']'));
	printf("\033[31mft_tolower : %d\033[0m\n", ft_tolower(']'));
	printf("\033[0m------------------------ft_isalnum---------------------\n");
	printf("\033[35misalnum    : %d\033[0m\n", isalnum('u'));
	printf("\033[31mft_isalnum : %d\033[0m\n", ft_isalnum('u'));
	printf("\033[35misalnum    : %d\033[0m\n", isalnum(']'));
	printf("\033[31mft_isalnum : %d\033[0m\n", ft_isalnum(']'));
	return (0);
}
