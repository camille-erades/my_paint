/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** framebuffer_create.c
*/

#include "../include/my.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t * framebuffer = malloc(sizeof(framebuffer_t));
    framebuffer->height = height;
    framebuffer->width = width;
    framebuffer->pixels = malloc(width * height * sizeof(sfColor));
    return framebuffer;
}
