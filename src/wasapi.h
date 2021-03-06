#ifndef HYPERSONIK_WASAPI_H
#define HYPERSONIK_WASAPI_H

#include <winerror.h>
#include <mmreg.h>

#include "snd-service.h"

struct wasapi;

HRESULT wasapi_alloc(struct wasapi **out);
void wasapi_free(struct wasapi *wasapi);
HRESULT wasapi_start(struct wasapi *wasapi);
HRESULT wasapi_snd_client_alloc(
        struct wasapi *wasapi,
        struct snd_client **out);
const WAVEFORMATEX *wasapi_get_sys_format(const struct wasapi *wasapi);
HRESULT wasapi_stop(struct wasapi *wasapi);

#endif
