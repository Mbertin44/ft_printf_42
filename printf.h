/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:19:18 by mbertin           #+#    #+#             */
/*   Updated: 2022/06/10 09:04:48 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<unistd.h>
# include<stdio.h>
# include<stdarg.h>

void	ft_putstr(char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
int		ft_puthex(unsigned long n, int *len, char str, int base);

#endif