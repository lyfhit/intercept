#ifndef  TC_COMBINE_INCLUDED
#define  TC_COMBINE_INCLUDED

#if (TC_COMBINED)
void buffer_and_snd(int fd, msg_server_t *msg);
void send_buffered_packets(void);
#endif


#endif /* TC_COMBINE_INCLUDED */

