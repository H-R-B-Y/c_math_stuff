/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_angle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:17:59 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

MYFLOAT	vec3_angle(t_vec3 *vec1, t_vec3 *vec2)
{
	MYFLOAT	dot_product;
	MYFLOAT	magnitude1;
	MYFLOAT	magnitude2;
	MYFLOAT	angle;

	if (!vec1 || !vec2)
		return (0);
	dot_product = vec3_dot_product(vec1, vec2);
	magnitude1 = vec3_magnitude(vec1);
	magnitude2 = vec3_magnitude(vec2);
	angle = acos(dot_product / (magnitude1 * magnitude2));
	return (angle);
}
