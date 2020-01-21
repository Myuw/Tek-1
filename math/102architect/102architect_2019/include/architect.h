/*
** EPITECH PROJECT, 2019
** 102arch.c
** File description:
** header file for the 102architect bootstrap
*/

#ifndef ARCH_H
#define ARCH_H
#define USAGE_MSG "USAGE\n\
    ./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...\n\n\
DESCRIPTION\n\
    x    abscissa of the original point\n\
    y    ordinate of the original point\n\
\n\
    transfo arg1 [arg2]\n\
    -t i j  translation along vector (i, j)\n\
    -z m n  scaling by factors m (x-axis) and n (y-axis)\n\
    -r d    rotation centered in 0 by a d degree angle\n\
    -s d    reflection over the axis passing through 0 with an inclinaison\n\
            angle of d degrees\n"
#define EXIT_FAILURE 84
#define EXIT_SUCCESS 0

typedef struct vector3 {
    double x;
    double y;
    double z;
} vector3_t;

int mk_translation(int ac, char *av[]);
int mk_scaling(int ac, char *av[]);
int mk_rotation(int ac, char *av[]);
int mk_reflection(int ac, char *av[]);
void print_matrix(double **matrix);
void print_vector_i(double *vector);
void print_vector_f(double *vector);
double *make_homogeneous(double x, double y);
double *transform_matrices(double **matrix, double *vector);
double **mktranslation_matrix(double i, double j);
double **mkscale_matrix(double m, double n);
double **mkrotation_matrix(double t);
double **mkreflection_matrix(double t);
int error_handling(int ac, char **av);
int check_av_3(int ac, char **av);
int check_t(int ac, char **av);
int check_z(int ac, char **av);
int check_r(int ac, char **av);
int check_s(int ac, char **av);
int check_args_r_s(int ac, char **av);
int check_args_t_z(int ac, char **av);

#endif
