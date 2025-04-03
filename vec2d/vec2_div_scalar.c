/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_div_scalar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:07:27 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

t_vec2	vec2_div_scalar(t_vec2 *vec, MYFLOAT scalar)
{
	if (!vec || scalar == 0)
		return ((t_vec2){0, 0});
	return ((t_vec2){.x = vec->x / scalar,
		.y = vec->y / scalar});
}
