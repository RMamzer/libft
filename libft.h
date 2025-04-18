/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:12:32 by rmamzer           #+#    #+#             */
/*   Updated: 2025/04/18 16:26:17 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//libraries
#include <unistd.h>


// mandatory functions
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(char c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t	ft_strlen(const char *str);
void	*memset( void *s,  int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
#endif
