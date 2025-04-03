/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_project.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:20:26 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_project(t_vec3 *vec, t_vec3 *normal)
{
	t_vec3	projected;
	MYFLOAT	dot_product;
	MYFLOAT	magnitude_squared;

	if (!vec || !normal)
		return ((t_vec3){0, 0, 0});
	dot_product = vec3_dot_product(vec, normal);
	magnitude_squared = vec3_dot_product(normal, normal);
	if (magnitude_squared == 0)
		return ((t_vec3){0, 0, 0});
	projected.x = (dot_product / magnitude_squared) * normal->x;
	projected.y = (dot_product / magnitude_squared) * normal->y;
	projected.z = (dot_product / magnitude_squared) * normal->z;
	return (projected);
}
