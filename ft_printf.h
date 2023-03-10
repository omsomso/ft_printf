/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpawlows <kpawlows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:58:07 by kpawlows          #+#    #+#             */
/*   Updated: 2022/11/28 17:01:05 by kpawlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putnbr_uns_fd(unsigned int n, int fd);
int		ft_nblen(long nb);
int		ft_puthex(unsigned long nb, unsigned long nbcpy, char *hex);
int		ft_putaddr(void *what);
int		ft_add_chars(char c, long arg);
int		ft_put_value(char c, long arg);
int		ft_printf(const char *argv, ...);

#endif