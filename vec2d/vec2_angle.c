/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_angle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:05:09 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

t_vec2	vec2_angle(t_vec2 *vec1, t_vec2 *vec2)
{
	MYFLOAT	dot_product;
	MYFLOAT	magnitude1;
	MYFLOAT	magnitude2;
	MYFLOAT	angle;

	if (!vec1 || !vec2)
		return ((t_vec2){0, 0});
	dot_product = vec2_dot_product(vec1, vec2);
	magnitude1 = vec2_magnitude(vec1);
	magnitude2 = vec2_magnitude(vec2);
	angle = acos(dot_product / (magnitude1 * magnitude2));
	return ((t_vec2){.x = angle, .y = 0});
}
