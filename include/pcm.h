/****************************************************************************
 *                                                                          *
 *                                pcm.h                                     *
 *                        Digital Audio Interface                           *
 *                                                                          *
 ****************************************************************************/

#define SND_PCM_OPEN_PLAYBACK	(O_WRONLY)
#define SND_PCM_OPEN_RECORD	(O_RDONLY)
#define SND_PCM_OPEN_DUPLEX	(O_RDWR)

#ifdef __cplusplus
extern "C" {
#endif

int snd_pcm_open(void **handle, int card, int device, int mode);
int snd_pcm_close(void *handle);
int snd_pcm_file_descriptor(void *handle);
int snd_pcm_block_mode(void *handle, int enable);
int snd_pcm_info(void *handle, snd_pcm_info_t * info);
int snd_pcm_playback_info(void *handle, snd_pcm_playback_info_t * info);
int snd_pcm_record_info(void *handle, snd_pcm_record_info_t * info);
int snd_pcm_playback_switches(void *handle);
int snd_pcm_playback_switch(void *handle, const char *switch_id);
int snd_pcm_playback_switch_read(void *handle, int switchn, snd_pcm_switch_t * data);
int snd_pcm_playback_switch_write(void *handle, int switchn, snd_pcm_switch_t * data);
int snd_pcm_record_switches(void *handle);
int snd_pcm_record_switch(void *handle, const char *switch_id);
int snd_pcm_record_switch_read(void *handle, int switchn, snd_pcm_switch_t * data);
int snd_pcm_record_switch_write(void *handle, int switchn, snd_pcm_switch_t * data);
int snd_pcm_playback_format(void *handle, snd_pcm_format_t * format);
int snd_pcm_record_format(void *handle, snd_pcm_format_t * format);
int snd_pcm_playback_params(void *handle, snd_pcm_playback_params_t * params);
int snd_pcm_record_params(void *handle, snd_pcm_record_params_t * params);
int snd_pcm_playback_status(void *handle, snd_pcm_playback_status_t * status);
int snd_pcm_record_status(void *handle, snd_pcm_record_status_t * status);
int snd_pcm_drain_playback(void *handle);
int snd_pcm_flush_playback(void *handle);
int snd_pcm_flush_record(void *handle);
int snd_pcm_playback_pause(void *handle, int enable);
int snd_pcm_playback_time(void *handle, int enable);
int snd_pcm_record_time(void *handle, int enable);
ssize_t snd_pcm_write(void *handle, const void *buffer, size_t size);
ssize_t snd_pcm_read(void *handle, void *buffer, size_t size);

#ifdef __cplusplus
}
#endif

#define SND_PCM_LB_OPEN_PLAYBACK	0
#define SND_PCM_LB_OPEN_RECORD		1

#ifdef __cplusplus
extern "C" {
#endif

int snd_pcm_loopback_open(void **handle, int card, int device, int mode);
int snd_pcm_loopback_close(void *handle);
int snd_pcm_loopback_file_descriptor(void *handle);
int snd_pcm_loopback_block_mode(void *handle, int enable);
int snd_pcm_loopback_stream_mode(void *handle, int mode);
int snd_pcm_loopback_format(void *handle, snd_pcm_format_t * format);
ssize_t snd_pcm_loopback_read(void *handle, void *buffer, size_t size);

#ifdef __cplusplus
}
#endif

