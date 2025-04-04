/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_math_ext.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:11:38 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/04 13:12:38 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HB_MATH_EXT_H
# define HB_MATH_EXT_H

# include <math.h>

#ifndef M_PI
# define M_PI 3.14159265358979323846
#endif

#ifndef MYFLOAT
# define MYFLOAT float
#endif


#include "../src/matrix4d/matrix4d.h"
#include "../src/matrix3d/matrix3d.h"
#include "../src/matrix2d/matrix2d.h"
#include "../src/vec2d/vec2d.h"
#include "../src/vec3d/vec3d.h"
#include "../src/vec4d/vec4d.h"

// ███    ███ ██ ███████  ██████ 
// ████  ████ ██ ██      ██      
// ██ ████ ██ ██ ███████ ██      
// ██  ██  ██ ██      ██ ██      
// ██      ██ ██ ███████  ██████ 

MYFLOAT		lerp(MYFLOAT start, MYFLOAT end, MYFLOAT t);

MYFLOAT		normalize(MYFLOAT from, MYFLOAT too, float t);

// Note: x is start, y is end.
MYFLOAT		maprange(t_vec2 *from, t_vec2 *too, MYFLOAT t);

//  ██████  ██████  ██       ██████  ██    ██ ██████  
// ██      ██    ██ ██      ██    ██ ██    ██ ██   ██ 
// ██      ██    ██ ██      ██    ██ ██    ██ ██████  
// ██      ██    ██ ██      ██    ██ ██    ██ ██   ██ 
//  ██████  ██████  ███████  ██████   ██████  ██   ██ 

__uint8_t	rgba_get_red(__uint32_t colour);
__uint8_t	rgba_get_green(__uint32_t colour);
__uint8_t	rgba_get_blue(__uint32_t colour);
__uint8_t	rgba_get_alph(__uint32_t colour);

__uint32_t	colour_rgba(__uint8_t red,
				__uint8_t green,
				__uint8_t blue,
				__uint8_t alpha);

#endif