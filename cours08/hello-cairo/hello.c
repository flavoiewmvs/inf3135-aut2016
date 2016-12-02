#include <cairo.h>
#include "color.h"
#include <string.h>
int main (int argc, char *argv[]) {
  //      struct Color color = Color_colorFromName(argv[1]);
    struct Color color;
    char couleurs[4][8];
    cairo_surface_t *surface = cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 100, 20*16);
    cairo_t *cr = cairo_create (surface);
    strcpy(couleurs[0],"black");  
    strcpy(couleurs[1],"red");     
    strcpy(couleurs[2],"green"); 
    strcpy(couleurs[3],"blue");   
   int i =0;
    cairo_select_font_face (cr, "serif", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
    cairo_show_text (cr, "");
    for (i=0;i<=3;++i){
        color = Color_colorFromName(couleurs[i]);
        cairo_set_source_rgb (cr, color.r, color.g , color.b );
        cairo_move_to (cr, 10.0, (i+1)*20.0);
        cairo_show_text (cr, "Hello, world");
    }    
    cairo_destroy (cr);
    cairo_surface_write_to_png (surface, "hello.png");
    cairo_surface_destroy (surface);
    return 0;
}
