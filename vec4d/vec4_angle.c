/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_angle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:18:55 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:21:00 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec4d.h"

MYFLOAT	vec4_angle(t_vec4 *a, t_vec4 *b)
{
	MYFLOAT	dot_product;
	MYFLOAT	magnitude_a;
	MYFLOAT	magnitude_b;

	dot_product = vec4_dot_product(a, b);
	magnitude_a = vec4_magnitude(a);
	magnitude_b = vec4_magnitude(b);
	if (magnitude_a == 0 || magnitude_b == 0)
		return (0);
	return (acosf(dot_product / (magnitude_a * magnitude_b)));
}
