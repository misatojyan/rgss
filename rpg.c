#include "ruby.h"

VALUE rgss_mRPG;

void Init_Input(void)
{
    rgss_mRPG = rb_define_module("RPG");
}
