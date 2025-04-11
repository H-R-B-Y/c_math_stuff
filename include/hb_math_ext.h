/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_math_ext.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbreeze <hbreeze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:11:38 by hbreeze           #+#    #+#             */
/*   Updated: 2025/04/11 18:46:25 by hbreeze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HB_MATH_EXT_H
# define HB_MATH_EXT_H

# include <math.h>

# include "../src/matrix4d/matrix4d.h"
# include "../src/matrix3d/matrix3d.h"
# include "../src/matrix2d/matrix2d.h"
# include "../src/vec2d/vec2d.h"
# include "../src/vec3d/vec3d.h"
# include "../src/vec4d/vec4d.h"

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

u8	rgba_get_red(u32 colour);
u8	rgba_get_green(u32 colour);
u8	rgba_get_blue(u32 colour);
u8	rgba_get_alph(u32 colour);

u32	colour_rgba(u8 red,
				u8 green,
				u8 blue,
				u8 alpha);

#endif