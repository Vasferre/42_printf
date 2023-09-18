/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasferre <vasferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:16 by vasferre          #+#    #+#             */
/*   Updated: 2022/11/28 15:50:43 by vasferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_prthex(unsigned int num, const char format);
int		ft_lenptr(uintptr_t num);
void	ft_putptr(uintptr_t ptr);
int		ft_prtstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_prtchr(char c);
void	ft_putstr(char *str);
int		ft_prtnum(int n);
int		ft_num_len(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
int		ft_putchar(char c);
int		ft_format(va_list args, const char format);
int		ft_printf(const char *str, ...);

#endif