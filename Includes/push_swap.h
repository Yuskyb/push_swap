/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yususato <yususato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:34:14 by yususato          #+#    #+#             */
/*   Updated: 2023/10/16 18:21:39 by yususato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libc.h>
# include <unistd.h>
# include <stdlib.h>
# include <inttypes.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include "../libft/libft.h"
# include "../libft/ft_printf.h"

typedef struct s_node
{
	int				data;
	struct	s_node	*prev;
	struct	s_node	*next;
}	t_node;

typedef	struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		max_size;
	int		current_size;
	int		nameflag;
}	t_stack;

int		ft_putnbr_i(int nb);
int		ft_putnbr_u(unsigned int nb);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_printf(const char *fmt, ...);
int		count(const char *save, va_list ap);
int		ft_range(int c, va_list ap);
int		ft_process_u(unsigned int u);
int		ft_process_c(char c);
int		ft_process_i(int c);
int		ft_process_s(char *c);
int		ft_process_x(unsigned int p, int c);
int		ft_small(unsigned int p);
int		ft_large(unsigned int p);
int		ft_process_p(uintptr_t p);
int		ft_putchar(int n);
t_stack	*create_stack(void);
void	push(t_stack *stack, int data);
int		pop(t_stack *stack);
void	sa(t_stack *stackA);
void	pa(t_stack *stackA, t_stack *stackB);
void  ra(t_stack *stack);
void  rra(t_stack *stackA);
void	sort3(t_stack *stack);
void	swap(int *a,int *b);
void	bubble(int	arr[], int n);
void check(t_stack *stack, int *t1, int *t2, int *t3);
void	change(t_stack *stack, char **av, int *flag);
void	sort5(t_stack *stackA);
void	sb(t_stack *stackB);
void	pb(t_stack *stackA, t_stack *stackB);
void  rb(t_stack *stackB);
void  rrb(t_stack *stackB);
void	divide(t_stack *stackA);
int	search(t_stack *stack, int num);

#endif