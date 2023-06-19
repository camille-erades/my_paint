/*
** EPITECH PROJECT, 2022
** solver
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #define _GNU_SOURCE
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Transform.h>
    #include <stddef.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>
    #include <stdlib.h>
    #include "framebuffer.h"
    #include <stdio.h>
    #include <fcntl.h>
    #include <string.h>
    #include <math.h>
    #include <unistd.h>
    typedef struct pri_val {
        sfVideoMode mode;
        sfRenderWindow* wind;
        sfVideoMode mode2;
        sfRenderWindow* windmenu;
        sfTexture* texture;
        sfSprite* sprite;
        sfEvent event;
        framebuffer_t *framebuffer;
        sfVector2i posi;
        sfImage *screen;
        sfColor pencol;
        sfKeyCode key;
        sfRectangleShape* rect;
        sfText* tuto;
        sfFont* font;
        sfRectangleShape* file;
        sfRectangleShape* save;
        sfRectangleShape* new;
        sfRectangleShape* open;
        sfRectangleShape* edit;
        sfRectangleShape* pen;
        sfRectangleShape* eraser;
        sfRectangleShape* colblack;
        sfRectangleShape* colred;
        sfRectangleShape* colgreen;
        sfRectangleShape* colblue;
        sfRectangleShape* shapsqr;
        sfRectangleShape* shaprnd;
        sfRectangleShape* pensizel;
        sfRectangleShape* pensizem;
        sfRectangleShape* help;
        sfRectangleShape* filehider;
        sfRectangleShape* edithider;
        sfRectangleShape* helphider;
        sfText* txtfile;
        sfText* txtsave;
        sfText* txtnew;
        sfText* txtopen;
        sfText* txtedit;
        sfText* txtpen;
        sfText* txteraser;
        sfText* txtshapsqr;
        sfText* txtshaprnd;
        sfText* txtpensizel;
        sfText* txtpensizem;
        sfText* txthelp;
        sfTexture* newtexture;
        sfSprite* newfile;
        int eramod;
        int size;
        char *buffer;
        int fd;
        int filemanstat;
        int editmanstat;
        int helpmanstat;
    } pri_v;
    void change_shape(pri_v *val);
    framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
    void framebuffer_destroy(framebuffer_t *framebuffer);
    void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color);
    void my_brush(pri_v *val);
    void prepare_all(pri_v *val);
    void closed(pri_v *val);
    void window(pri_v *val);
    void destroy_all(pri_v *val);
    void colors(pri_v *val);
    void showsize(pri_v *val);
    void compbrushrect(int i, int j, int v, pri_v *val);
    void compbrushcirc(int i, int j, int v, pri_v *val);
    void showwindmenu(pri_v *val);
    void showwind(pri_v *val);
    void pensize(pri_v *val);
    void newfile(pri_v *val);
    void savefile(pri_v *val);
    void secnewfile(pri_v *val, int i);
    void prepare_flat_all(pri_v *val);
    void prepare_all_buttons(pri_v *val);
    void show_buttons(pri_v *val);
    void init_buttons(pri_v *val);
    void init_buttons_text(pri_v *val);
    void construct_button(sfRectangleShape *button, sfVector2f butposi,
    pri_v *val, sfColor color);
    void construct_button_text(sfText *buttext, sfVector2f butposi,
    pri_v *val, char *txt);
    void prepare_buttons_text(pri_v *val);
    void show_buttons_text(pri_v *val);
    void openfile(pri_v *val);
    int buttons_status(sfRectangleShape* button, pri_v *val);
    void help_hider(pri_v *val);
    void edit_hider(pri_v *val);
    void file_hider(pri_v *val);
    void filebutton(pri_v *val);
    void editbutton(pri_v *val);
    void helpbutton(pri_v *val);
    void destroy_all_button(pri_v *val);
    void destroy_all_text(pri_v *val);
#endif /* !MY_H_ */
