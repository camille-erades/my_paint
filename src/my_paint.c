/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-my_paint-camille.erades
** File description:
** my_paint.c
*/

#include "../include/my.h"

int main(void)
{
    pri_v val;
    prepare_all(&val);
    window(&val);
    destroy_all(&val);
    return 0;
}
