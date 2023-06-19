/*
** EPITECH PROJECT, 2022
** cerades
** File description:
** framebuffer.h
*/

#ifndef FRAMEBUFFER_H_
    #define FRAMEBUFFER_H_
    #include <SFML/Graphics.h>
    struct framebuffer {
        int width;
        int height;
        sfUint8 *pixels;
    };
    typedef struct framebuffer framebuffer_t;
    framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
    void framebuffer_destroy(framebuffer_t *framebuffer);
    void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color);
#endif
