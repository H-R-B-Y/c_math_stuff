/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:19:13 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_div(t_vec3 *vec1, t_vec3 *vec2)
{
	t_vec3	result;

	if (!vec1 || !vec2)
		return ((t_vec3){0, 0, 0});
	if (vec2->x == 0 || vec2->y == 0 || vec2->z == 0)
		return ((t_vec3){0, 0, 0});
	result.x = vec1->x / vec2->x;
	result.y = vec1->y / vec2->y;
	result.z = vec1->z / vec2->z;
	return (result);
}
