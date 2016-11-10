/*
  Copyright 2006-2016 Detlef Urban <onkel@paraair.de>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef TASCAM_ALSA_H
#define TASCAM_ALSA_H

#include <alsa/asoundlib.h>

#define __USE_MISC

#include <pthread.h>
#include <unistd.h>
#include <mqueue.h>

extern int cardnum;

int get_alsa_cardnum();
int open_device();
void close_device();


//void setInteger(const char* name, int channel, int value);
//int getInteger(const char* name);

snd_hctl_elem_t* get_ctrl_elem(const char* name, int index);
int setElemInteger(snd_hctl_elem_t *elem, int value);

int getIntegers(snd_hctl_elem_t *elem, int vals[], int count);

float getMeterFloat(int index);

#endif /* TASCAM_ALSA_H */

