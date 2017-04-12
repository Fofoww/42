/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 21:27:07 by doriol            #+#    #+#             */
/*   Updated: 2017/04/12 16:30:11 by doriol           ###   ########.fr       */
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
size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char dest[100];
	char dest2[100];

	/*printf("\033[0m------------------------ft_memset---------------------\n");
	printf("\033[35mmemset	   : %d\033[0m\n", memset('u'));
	printf("\033[31mft_memset  : %d\033[0m\n", ft_memset('u'));
	printf("\033[35mmemset     : %d\033[0m\n", memset(']'));
	printf("\033[31mft_memset  : %d\033[0m\n", ft_memset(']'));
	printf("\033[0m------------------------ft_bzero---------------------\n");
	printf("\033[35mbzero      : %d\033[0m\n", bzero('u'));
	printf("\033[31mft_bzero   : %d\033[0m\n", ft_bzero('u'));
	printf("\033[35mbzero      : %d\033[0m\n", bzero(']'));
	printf("\033[31mft_bzero   : %d\033[0m\n", ft_bzero(']'));
	printf("\033[0m------------------------ft_memcpy---------------------\n");
	printf("\033[35mmemcpy     : %d\033[0m\n", memcpy('u'));
	printf("\033[31mft_memcpy  : %d\033[0m\n", ft_memcpy('u'));
	printf("\033[35mmemcpy     : %d\033[0m\n", memcpy(']'));
	printf("\033[31mft_memcpy  : %d\033[0m\n", ft_memcpy(']'));
	printf("\033[0m------------------------ft_memccpy---------------------\n");
	printf("\033[35mmemccpy    : %d\033[0m\n", memccpy('u'));
	printf("\033[31mft_memccpy : %d\033[0m\n", ft_memccpy('u'));
	printf("\033[35mmemccpy    : %d\033[0m\n", memccpy(']'));
	printf("\033[31mft_memccpy : %d\033[0m\n", ft_memccpy(']'));
	printf("\033[0m------------------------ft_memmove---------------------\n");
	printf("\033[35mmemmove    : %d\033[0m\n", memmove('u'));
	printf("\033[31mft_memmove : %d\033[0m\n", ft_memmove('u'));
	printf("\033[35mmemmove    : %d\033[0m\n", memmove(']'));
	printf("\033[31mft_memmove : %d\033[0m\n", ft_memmove(']'));
	printf("\033[0m------------------------ft_memchr---------------------\n");
	printf("\033[35mmemchr    : %d\033[0m\n", memchr('u'));
	printf("\033[31mft_memchr : %d\033[0m\n", ft_memchr('u'));
	printf("\033[35mmemchr    : %d\033[0m\n", memchr(']'));
	printf("\033[31mft_memchr : %d\033[0m\n", ft_memchr(']'));
	printf("\033[0m------------------------ft_memcmp---------------------\n");
	printf("\033[35mmemcmp    : %d\033[0m\n", memcmp('u'));
	printf("\033[31mft_memcmp : %d\033[0m\n", ft_memcmp('u'));
	printf("\033[35mmemcmp    : %d\033[0m\n", memcmp(']'));
	printf("\033[31mft_memcmp : %d\033[0m\n", ft_memcmp(']'));*/
	printf("\033[0m--------------------------ft_strlen--------------------\n");
	printf("\033[35mstrlen     : %lu\033[0m\n", strlen("bite de bite"));
	printf("\033[31mft_strlen  : %lu\033[0m\n", ft_strlen("bite de bite"));
	printf("\033[35mstrlen     : %lu\033[0m\n", strlen("strlcat de biteeee"));
	printf("\033[31mft_strlen  : %lu\033[0m\n", ft_strlen("strlcat de biteeee"));
	printf("\033[0m--------------------------ft_strdup--------------------\n");
	printf("\033[35mstrdup     : %s\033[0m\n", strdup("bite de bite"));
	printf("\033[31mft_strdup  : %s\033[0m\n", ft_strdup("bite de bite"));
	printf("\033[35mstrdup     : %s\033[0m\n", strdup("strlcat de biteeee"));
	printf("\033[31mft_strdup  : %s\033[0m\n", ft_strdup("strlcat de biteeee"));
	printf("\033[0m--------------------------ft_strcpy--------------------\n");
	printf("\033[35mstrcpy     : %s\033[0m\n", strcpy(dest, "bite"));
	printf("\033[31mft_strcpy  : %s\033[0m\n", ft_strcpy(dest2, "bite"));
	printf("\033[35mstrcpy     : %s\033[0m\n", strcpy(dest, "yu"));
	printf("\033[31mft_strcpy  : %s\033[0m\n", ft_strcpy(dest2, "yu"));
	printf("\033[0m--------------------------ft_strncpy-------------------\n");
	printf("\033[35mstrncpy    : %s\033[0m\n", strncpy(dest, "bite", 5));
	printf("\033[31mft_strncpy : %s\033[0m\n", ft_strncpy(dest2, "bite", 5));
	printf("\033[35mstrncpy    : %s\033[0m\n", strncpy(dest, "yu", 9));
	printf("\033[31mft_strncpy : %s\033[0m\n", ft_strncpy(dest2, "yu", 9));
	printf("\033[0m--------------------------ft_strcat--------------------\n");
	printf("\033[35mstrcat     : %s\033[0m\n", strcat(dest, "bite"));
	printf("\033[31mft_strcat  : %s\033[0m\n", ft_strcat(dest2, "bite"));
	printf("\033[35mstrcat     : %s\033[0m\n", strcat(dest, "yu"));
	printf("\033[31mft_strcat  : %s\033[0m\n", ft_strcat(dest2, "yu"));
	printf("\033[0m--------------------------ft_strncat-------------------\n");
	printf("\033[35mstrncat    : %s\033[0m\n", strncat(dest, "bite", 5));
	printf("\033[31mft_strncat : %s\033[0m\n", ft_strncat(dest2, "bite", 5));
	printf("\033[35mstrncat    : %s\033[0m\n", strncat(dest, "ia", 9));
	printf("\033[31mft_strncat : %s\033[0m\n", ft_strncat(dest2, "ia", 9));
	/*printf("\033[0m------------------------ft_strlcat---------------------\n");
	printf("\033[35mstrlcat    : %d\033[0m\n", strlcat('u'));
	printf("\033[31mft_strlcat : %d\033[0m\n", ft_strlcat('u'));
	printf("\033[35mstrlcat    : %d\033[0m\n", strlcat(']'));
	printf("\033[31mft_strlcat : %d\033[0m\n", ft_strlcat(']'));
	/*printf("\033[0m------------------------ft_strchr---------------------\n");
	printf("\033[35mstrchr    : %d\033[0m\n", strchr('u'));
	printf("\033[31mft_strchr : %d\033[0m\n", ft_strchr('u'));
	printf("\033[35mstrchr    : %d\033[0m\n", strchr(']'));
	printf("\033[31mft_strchr : %d\033[0m\n", ft_strchr(']'));
	printf("\033[0m------------------------ft_strrchr---------------------\n");
	printf("\033[35mstrrchr    : %d\033[0m\n", strrchr('u'));
	printf("\033[31mft_strrchr : %d\033[0m\n", ft_strrchr('u'));
	printf("\033[35mstrrchr    : %d\033[0m\n", strrchr(']'));
	printf("\033[31mft_strrchr : %d\033[0m\n", ft_strrchr(']'));*/
	printf("\033[0m--------------------------ft_strstr--------------------\n");
	printf("\033[35mstrstr     : %s\033[0m\n", strstr("bite de bite", "bite"));
	printf("\033[31mft_strstr  : %s\033[0m\n", ft_strstr("bite de bite", "bite"));
	printf("\033[35mstrstr     : %s\033[0m\n", strstr("strlcat de bite", "yu"));
	printf("\033[31mft_strstr  : %s\033[0m\n", ft_strstr("strlcat de bite", "yu"));
	printf("\033[0m------------------------ft_strnstr---------------------\n");
	printf("\033[35mstrnstr    : %d\033[0m\n", strnstr('u'));
	printf("\033[31mft_strnstr : %d\033[0m\n", ft_strnstr('u'));
	printf("\033[35mstrnstr    : %d\033[0m\n", strnstr(']'));
	printf("\033[31mft_strnstr : %d\033[0m\n", ft_strnstr(']'));
	printf("\033[0m--------------------------ft_strcmp--------------------\n");
	printf("\033[35mstrcmp     : %d\033[0m\n", strcmp("bite de bite", "bite"));
	printf("\033[31mft_strcmp  : %d\033[0m\n", ft_strcmp("bite de bite", "bite"));
	printf("\033[35mstrcmp     : %d\033[0m\n", strcmp("strlcat de bite", "yu"));
	printf("\033[31mft_strcmp  : %d\033[0m\n", ft_strcmp("strlcat de bite", "yu"));
	printf("\033[0m--------------------------ft_strncmp-------------------\n");
	printf("\033[35mstrncmp    : %d\033[0m\n", strncmp("bite de bite", "bite", 5));
	printf("\033[31mft_strncmp : %d\033[0m\n", ft_strncmp("bite de bite", "bite", 5));
	printf("\033[35mstrncmp    : %d\033[0m\n", strncmp("strlcat de bite", "yu", 9));
	printf("\033[31mft_strncmp : %d\033[0m\n", ft_strncmp("strlcat de bite", "yu", 9));
	printf("\033[0m--------------------------ft_atoi----------------------\n");
	printf("\033[35matoi       : %d\033[0m\n", atoi("  56485 54554 4114"));
	printf("\033[31mft_atoi    : %d\033[0m\n", ft_atoi("  56485 54554 4114"));
	printf("\033[35matoi       : %d\033[0m\n", atoi("jrgijr 55 484"));
	printf("\033[31mft_atoi    : %d\033[0m\n", ft_atoi("jrgijr 55 484"));
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
	printf("\033[0m------------------------ft_isalnum---------------------\n");
	printf("\033[35misalnum    : %d\033[0m\n", isalnum('u'));
	printf("\033[31mft_isalnum : %d\033[0m\n", ft_isalnum('u'));
	printf("\033[35misalnum    : %d\033[0m\n", isalnum(']'));
	printf("\033[31mft_isalnum : %d\033[0m\n", ft_isalnum(']'));
	printf("\033[0m------------------------ft_isascii---------------------\n");
	printf("\033[35misascii    : %d\033[0m\n", isascii('.'));
	printf("\033[31mft_isascii : %d\033[0m\n", ft_isascii('.'));
	printf("\033[35misascii    : %d\033[0m\n", isascii('&'));
	printf("\033[31mft_isascii : %d\033[0m\n", ft_isascii('&'));
	printf("\033[0m------------------------ft_isprint---------------------\n");
	printf("\033[35misprint    : %d\033[0m\n", isprint('/'));
	printf("\033[31mft_isprint : %d\033[0m\n", ft_isprint('/'));
	printf("\033[35misprint    : %d\033[0m\n", isprint(''));
	printf("\033[31mft_isprint : %d\033[0m\n", ft_isprint(''));
	printf("\033[0m------------------------ft_toupper---------------------\n");
	printf("\033[35mtoupper    : %d\033[0m\n", toupper('u'));
	printf("\033[31mft_toupper : %d\033[0m\n", ft_toupper('u'));
	printf("\033[35mtoupper    : %d\033[0m\n", toupper(']'));
	printf("\033[31mft_toupper : %d\033[0m\n", ft_toupper(']'));
	printf("\033[0m------------------------ft_tolower---------------------\n");
	printf("\033[35mtolower    : %d\033[0m\n", tolower('u'));
	printf("\033[31mft_tolower : %d\033[0m\n", ft_tolower('u'));
	printf("\033[35mtolower    : %d\033[0m\n", tolower(']'));
	printf("\033[31mft_tolower : %d\033[0m\n", ft_tolower(']'));
	/*printf("\033[0m------------------------ft_strlcat---------------------\n");
	printf("\033[35mstrlcat   : %d\033[0m\n", strlcat(dest, "bite", 5));
	printf("\033[31mft_strlcat : %d\033[0m\n", ft_strlcat(dest2, "bite", 5));
	printf("\033[35mstrlcat    : %d\033[0m\n", strlcat(dest, "yu", 9));
	printf("\033[31mft_strlcat : %d\033[0m\n", ft_strlcat(dest2, "yu", 9));
	printf("\033[0m-------------------------------------------------------\n");*/
	return (0);
}

