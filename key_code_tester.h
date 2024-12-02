/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Furaido <Furaido@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:01:52 by joschmun          #+#    #+#             */
/*   Updated: 2024/11/13 17:30:53 by Furaido          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_CODE_TESTER_H
# define KEY_CODE_TESTER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include "minilibx-linux/mlx.h"
# include "libft/libft.h"

int key_hook(int keycode, void *param);

#endif
