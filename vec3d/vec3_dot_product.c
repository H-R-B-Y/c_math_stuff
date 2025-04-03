/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_dot_product.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 20:17:37 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 20:19:26 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3d.h"

MYFLOAT	vec3_dot_product(t_vec3 *vec1, t_vec3 *vec2)
{
	if (!vec1 || !vec2)
		return (0);
	return ((vec1->x * vec2->x) + (vec1->y * vec2->y) + (vec1->z * vec2->z));
}
