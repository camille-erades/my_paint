/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** framebuffer_destroy.c
*/

#include "../include/my.h"

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}
