/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:09:58 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

t_vec2	vec2_mult(t_vec2 *vec1, t_vec2 *vec2)
{
	t_vec2	result;

	if (!vec1 || !vec2)
		return ((t_vec2){0, 0});
	result.x = vec1->x * vec2->x;
	result.y = vec1->y * vec2->y;
	return (result);
}
