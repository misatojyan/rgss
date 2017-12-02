#include "ruby.h"

VALUE rgss_mAudio;

void Init_Audio(void)
{
    rgss_mAudio = rb_define_module("Audio");
}
