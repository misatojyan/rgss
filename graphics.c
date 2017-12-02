#include "ruby.h"

VALUE rgss_mGraphics;

void Init_Graphics(void)
{
    rgss_mGraphics = rb_define_module("Graphics");
}
