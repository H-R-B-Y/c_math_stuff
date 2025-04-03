/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_div_scalar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:19:00 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

t_vec3	vec3_div_scalar(t_vec3 *vec, MYFLOAT scalar)
{
	if (!vec || scalar == 0)
		return ((t_vec3){0, 0, 0});
	return ((t_vec3){.x = vec->x / scalar,
		.y = vec->y / scalar,
		.z = vec->z / scalar});
}
