/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:18:55 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:25:00 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec4d.h"

t_vec4	vec4_mult(t_vec4 *vec1, t_vec4 *vec2)
{
	t_vec4	result;

	result.x = vec1->x * vec2->x;
	result.y = vec1->y * vec2->y;
	result.z = vec1->z * vec2->z;
	result.w = vec1->w * vec2->w;
	return (result);
}
