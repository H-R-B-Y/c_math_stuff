NAME			:= hb_math_ext.a
CFLAGS			:= -Wextra -Wall -Werror -g3 -O0

CC				:= gcc
AR				:= ar
ARFLAGS			:= rcs

HEADERS			:= -I./include

SRC_DIR			:= ./src
SRCS			:=

SRCS			+= $(SRC_DIR)/colours/colour_get.c \
				$(SRC_DIR)/colours/colour_rgba.c \

SRCS			+= $(SRC_DIR)/matrix2d/matrix2d_add.c \
				$(SRC_DIR)/matrix2d/matrix2d_determinant.c \
				$(SRC_DIR)/matrix2d/matrix2d_identity.c \
				$(SRC_DIR)/matrix2d/matrix2d_inverse.c \
				$(SRC_DIR)/matrix2d/matrix2d_multiply.c \
				$(SRC_DIR)/matrix2d/matrix2d_scalar_multiply.c \
				$(SRC_DIR)/matrix2d/matrix2d_subtract.c \
				$(SRC_DIR)/matrix2d/matrix2d_transform.c \
				$(SRC_DIR)/matrix2d/matrix2d_transpose.c \

SRCS			+= $(SRC_DIR)/matrix3d/matrix3d_add.c \
				$(SRC_DIR)/matrix3d/matrix3d_determinant.c \
				$(SRC_DIR)/matrix3d/matrix3d_identity.c \
				$(SRC_DIR)/matrix3d/matrix3d_inverse.c \
				$(SRC_DIR)/matrix3d/matrix3d_multiply.c \
				$(SRC_DIR)/matrix3d/matrix3d_scalar_multiply.c \
				$(SRC_DIR)/matrix3d/matrix3d_subtract.c \
				$(SRC_DIR)/matrix3d/matrix3d_transform.c \
				$(SRC_DIR)/matrix3d/matrix3d_transpose.c \

SRCS			+= $(SRC_DIR)/matrix4d/matrix4d_add.c \
				$(SRC_DIR)/matrix4d/matrix4d_determinant.c \
				$(SRC_DIR)/matrix4d/matrix4d_identity.c \
				$(SRC_DIR)/matrix4d/matrix4d_inverse.c \
				$(SRC_DIR)/matrix4d/matrix4d_multiply.c \
				$(SRC_DIR)/matrix4d/matrix4d_rotate_x.c \
				$(SRC_DIR)/matrix4d/matrix4d_rotate_y.c \
				$(SRC_DIR)/matrix4d/matrix4d_rotate_z.c \
				$(SRC_DIR)/matrix4d/matrix4d_scalar_multiply.c \
				$(SRC_DIR)/matrix4d/matrix4d_scaling.c \
				$(SRC_DIR)/matrix4d/subtract.c \
				$(SRC_DIR)/matrix4d/matrix4d_transform.c \
				$(SRC_DIR)/matrix4d/matrix4d_translation.c \
				$(SRC_DIR)/matrix4d/matrix4d_transpose.c \

SRCS			+= $(SRC_DIR)/misc/lerp.c \
				$(SRC_DIR)/misc/maprange.c \
				$(SRC_DIR)/misc/normalize.c \

SRCS			+= $(SRC_DIR)/vec2d/vec2_add.c \
				$(SRC_DIR)/vec2d/vec2_angle.c \
				$(SRC_DIR)/vec2d/vec2_clamp.c \
				$(SRC_DIR)/vec2d/vec2_distance.c \
				$(SRC_DIR)/vec2d/vec2_div_scalar.c \
				$(SRC_DIR)/vec2d/vec2_div.c \
				$(SRC_DIR)/vec2d/vec2_dot_product.c \
				$(SRC_DIR)/vec2d/vec2_lerp.c \
				$(SRC_DIR)/vec2d/vec2_magnitude.c \
				$(SRC_DIR)/vec2d/vec2_mult_scalar.c \
				$(SRC_DIR)/vec2d/vec2_mult.c \
				$(SRC_DIR)/vec2d/vec2_normalise.c \
				$(SRC_DIR)/vec2d/vec2_perpendicular.c \
				$(SRC_DIR)/vec2d/vec2_project.c \
				$(SRC_DIR)/vec2d/vec2_reflect.c \
				$(SRC_DIR)/vec2d/vec2_rotate.c \
				$(SRC_DIR)/vec2d/vec2_sub.c \

SRCS			+= $(SRC_DIR)/vec3d/vec3_add.c \
				$(SRC_DIR)/vec3d/vec3_angle.c \
				$(SRC_DIR)/vec3d/vec3_clamp.c \
				$(SRC_DIR)/vec3d/vec3_distance.c \
				$(SRC_DIR)/vec3d/vec3_div_scalar.c \
				$(SRC_DIR)/vec3d/vec3_div.c \
				$(SRC_DIR)/vec3d/vec3_dot_product.c \
				$(SRC_DIR)/vec3d/vec3_lerp.c \
				$(SRC_DIR)/vec3d/vec3_magnitude.c \
				$(SRC_DIR)/vec3d/vec3_mult_scalar.c \
				$(SRC_DIR)/vec3d/vec3_mult.c \
				$(SRC_DIR)/vec3d/vec3_normalise.c \
				$(SRC_DIR)/vec3d/vec3_perpendicular.c \
				$(SRC_DIR)/vec3d/vec3_project.c \
				$(SRC_DIR)/vec3d/vec3_reflect.c \
				$(SRC_DIR)/vec3d/vec3_rotate.c \
				$(SRC_DIR)/vec3d/vec3_sub.c \

SRCS			+= $(SRC_DIR)/vec4d/vec4_add.c \
				$(SRC_DIR)/vec4d/vec4_angle.c \
				$(SRC_DIR)/vec4d/vec4_clamp.c \
				$(SRC_DIR)/vec4d/vec4_cross.c \
				$(SRC_DIR)/vec4d/vec4_distance.c \
				$(SRC_DIR)/vec4d/vec4_dot_product.c \
				$(SRC_DIR)/vec4d/vec4_lerp.c \
				$(SRC_DIR)/vec4d/vec4_magnitude.c \
				$(SRC_DIR)/vec4d/vec4_minor.c \
				$(SRC_DIR)/vec4d/vec4_mult.c \
				$(SRC_DIR)/vec4d/vec4_normalise.c \
				$(SRC_DIR)/vec4d/vec4_project.c \
				$(SRC_DIR)/vec4d/vec4_reflect.c \
				$(SRC_DIR)/vec4d/vec4_rotate.c \
				$(SRC_DIR)/vec4d/vec4_scalar_mult.c \
				$(SRC_DIR)/vec4d/vec4_sub.c \

OBJS			:= ${SRCS:.c=.o}

MAIN			:= $(SRC_DIR)/main.c

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)

.c.o:
		$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

clean:
		rm -rf $(OBJS)

fclean: clean

		rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
