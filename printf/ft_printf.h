/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:47:46 by ratwani           #+#    #+#             */
/*   Updated: 2023/08/04 18:37:26 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(const char *c, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	to_hexconv(unsigned int x);
int	to_hexconv_u(unsigned int x);
