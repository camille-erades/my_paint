/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** my_put_pixel.c
*/

#include "../include/my.h"

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
unsigned int y, sfColor color)
{
    unsigned int i = ((y * framebuffer->width) + x) * sizeof(sfColor);
    framebuffer->pixels[i + 0] = color.r;
    framebuffer->pixels[i + 1] = color.g;
    framebuffer->pixels[i + 2] = color.b;
    framebuffer->pixels[i + 3] = color.a;
}
