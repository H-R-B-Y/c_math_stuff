/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_lerp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 13:07:10 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_lerp(t_vec3 *vec1, t_vec3 *vec2, MYFLOAT t)
{
	t_vec3	result;

	if (!vec1 || !vec2)
		return ((t_vec3){0});
	if (t < 0)
		t = 0;
	else if (t > 1)
		t = 1;
	result.x = vec1->x + (vec2->x - vec1->x) * t;
	result.y = vec1->y + (vec2->y - vec1->y) * t;
	result.z = vec1->z + (vec2->z - vec1->z) * t;
	return (result);
}
