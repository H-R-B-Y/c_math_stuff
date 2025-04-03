/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_distance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:59 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:07:17 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2d.h"

MYFLOAT	vec2_distance(t_vec2 *vec1, t_vec2 *vec2)
{
	t_vec2	difference;

	if (!vec1 || !vec2)
		return (0);
	difference = vec2_mult_scalar(vec2, -1.0f);
	difference = vec2_add(vec1, &difference);
	return (vec2_magnitude(&difference));
}
