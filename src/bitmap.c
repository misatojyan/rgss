#include "ruby.h"

VALUE rgss_cBitmap;

void Init_Bitmap(void)
{
    rgss_cBitmap = rb_define_class("Bitmap")
}
