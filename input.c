#include "ruby.h"

VALUE rgss_mInput;

void Init_Input(void)
{
    rgss_mInput = rb_define_module("Input");
}
