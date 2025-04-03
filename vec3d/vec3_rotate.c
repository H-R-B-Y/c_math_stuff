/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:21:25 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_rotate(t_vec3 *vec, t_vec3 *axis, MYFLOAT angle)
{
	t_vec3	rotated;
	MYFLOAT	cos_angle;
	MYFLOAT	sin_angle;
	MYFLOAT	dot_product;

	if (!vec || !axis)
		return ((t_vec3){0, 0, 0});
	cos_angle = cosf(angle);
	sin_angle = sinf(angle);
	dot_product = vec3_dot_product(vec, axis);
	rotated.x = \
		(cos_angle + (1 - cos_angle) * axis->x * axis->x) * vec->x
		+ ((1 - cos_angle) * axis->x * axis->y - axis->z * sin_angle) * vec->y
		+ ((1 - cos_angle) * axis->x * axis->z + axis->y * sin_angle) * vec->z;
	rotated.y = \
		((1 - cos_angle) * axis->y * axis->x + axis->z * sin_angle) * vec->x
		+ (cos_angle + (1 - cos_angle) * axis->y * axis->y) * vec->y
		+ ((1 - cos_angle) * axis->y * axis->z - axis->x * sin_angle) * vec->z;
	rotated.z = \
		((1 - cos_angle) * axis->z * axis->x - axis->y * sin_angle) * vec->x
		+ ((1 - cos_angle) * axis->z * axis->y + axis->x * sin_angle) * vec->y
		+ (cos_angle + (1 - cos_angle) * axis->z * axis->z) * vec->z;
	return (rotated);
}
