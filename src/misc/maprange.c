/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maprange.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:11:21 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 12:29:54 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/hb_math_ext.h"

MYFLOAT	maprange(t_vec2 *from, t_vec2 *too, MYFLOAT t)
{
	MYFLOAT	tn;

	tn = (t - from->x) / (from->y - from->x);
	return (too->x + tn * (too->y - too->x));
}
