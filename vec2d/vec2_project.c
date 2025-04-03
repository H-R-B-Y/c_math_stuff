/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_project.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:10:47 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

t_vec2	vec2_project(t_vec2 *vec1, t_vec2 *vec2)
{
	MYFLOAT	dot_product;
	MYFLOAT	magnitude_squared;
	t_vec2	result;

	if (!vec1 || !vec2)
		return ((t_vec2){0, 0});
	dot_product = vec2_dot_product(vec1, vec2);
	magnitude_squared = vec2_dot_product(vec2, vec2);
	if (magnitude_squared == 0)
		return ((t_vec2){0, 0});
	result.x = (dot_product / magnitude_squared) * vec2->x;
	result.y = (dot_product / magnitude_squared) * vec2->y;
	return (result);
}
