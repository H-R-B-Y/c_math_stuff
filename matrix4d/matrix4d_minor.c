/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix4d_minor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:51:24 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/03 21:52:09 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix4d.h"

MYFLOAT	matrix4d_minor(t_vec4 *v1, t_vec4 *v2, t_vec4 *v3)
{
	MYFLOAT	m1;
	MYFLOAT	m2;
	MYFLOAT	m3;

	m1 = v1->x * (v2->y * v3->z - v2->z * v3->y);
	m2 = v1->y * (v2->x * v3->z - v2->z * v3->x);
	m3 = v1->z * (v2->x * v3->y - v2->y * v3->x);
	return (m1 - m2 + m3);
}
