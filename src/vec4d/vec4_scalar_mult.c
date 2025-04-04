/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_scalar_mult.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:18:55 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:28:29 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec4d.h"

t_vec4	vec4_scalar_mult(t_vec4 *vec, MYFLOAT scalar)
{
	t_vec4	result;

	result.x = vec->x * scalar;
	result.y = vec->y * scalar;
	result.z = vec->z * scalar;
	result.w = vec->w * scalar;
	return (result);
}
