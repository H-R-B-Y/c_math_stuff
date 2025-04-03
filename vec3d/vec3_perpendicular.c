/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_perpendicular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:20:16 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_perpendicular(t_vec3 *vec)
{
	t_vec3	perpendicular;

	if (!vec)
		return ((t_vec3){0, 0, 0});
	if (vec->x == 0 && vec->y == 0 && vec->z == 0)
		return ((t_vec3){0, 0, 0});
	if (vec->x != 0 || vec->y != 0)
	{
		perpendicular.x = -vec->y;
		perpendicular.y = vec->x;
		perpendicular.z = 0;
	}
	else
	{
		perpendicular.x = vec->z;
		perpendicular.y = 0;
		perpendicular.z = -vec->x;
	}
	return (perpendicular);
}
