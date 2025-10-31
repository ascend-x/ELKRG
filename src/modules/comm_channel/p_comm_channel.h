

#ifndef P_LKRG_COMM_CHANNEL_SYSCTL_H
#define P_LKRG_COMM_CHANNEL_SYSCTL_H

extern struct ctl_table p_lkrg_sysctl_base[];
extern struct ctl_table p_lkrg_sysctl_table[];

int p_register_comm_channel(void);
void p_deregister_comm_channel(void);

#endif
