/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:08:50 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

t_vec2	vec2_rotate(t_vec2 *vec, MYFLOAT angle)
{
	t_vec2	rotated;
	MYFLOAT	radians;

	if (!vec)
		return ((t_vec2){0, 0});
	radians = angle * (M_PI / 180.0);
	rotated.x = vec->x * cos(radians) - vec->y * sin(radians);
	rotated.y = vec->x * sin(radians) + vec->y * cos(radians);
	return (rotated);
}
