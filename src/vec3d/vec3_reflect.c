/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_reflect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 13:07:10 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_reflect(t_vec3 *vec, t_vec3 *normal)
{
	t_vec3	reflected;
	MYFLOAT	dot_product;

	if (!vec || !normal)
		return ((t_vec3){0});
	dot_product = vec3_dot_product(vec, normal);
	reflected.x = vec->x - 2 * dot_product * normal->x;
	reflected.y = vec->y - 2 * dot_product * normal->y;
	reflected.z = vec->z - 2 * dot_product * normal->z;
	return (reflected);
}
