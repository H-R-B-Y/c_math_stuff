/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 13:05:36 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

t_vec2	vec2_div(t_vec2 *vec1, t_vec2 *vec2)
{
	t_vec2	result;

	if (!vec1 || !vec2)
		return ((t_vec2){0});
	if (vec2->x == 0 || vec2->y == 0)
		return ((t_vec2){0});
	result.x = vec1->x / vec2->x;
	result.y = vec1->y / vec2->y;
	return (result);
}
