/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:29:00 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 12:31:11 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/hb_math_ext.h"

MYFLOAT	normalize(MYFLOAT from, MYFLOAT too, MYFLOAT t)
{
	return ((t - from) / (too - from));
}
