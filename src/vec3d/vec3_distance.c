/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_distance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:18:52 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

MYFLOAT	vec3_distance(t_vec3 *vec1, t_vec3 *vec2)
{
	t_vec3	difference;

	if (!vec1 || !vec2)
		return (0);
	difference = vec3_mult_scalar(vec2, -1.0f);
	difference = vec3_add(vec1, &difference);
	return (vec3_magnitude(&difference));
}
