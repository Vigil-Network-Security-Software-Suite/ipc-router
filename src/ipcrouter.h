#ifndef IPCROUTER_H
#define IPCROUTER_H 
typedef int pid_t;


typedef struct{
  unsigned int prog_id;
  pid_t pid;
} vns3_prog;

typedef struct{
  long msg_type;
  char mesg_text[256];
} ipc_msg;

#define IPCP_V_IDS 0x76696473
#define IPCP_KEY_V_IDS "key-vigil"
#define IPCP_N_LOG 0x6e6c6f67
#define IPCP_KEY_NLOG "key-nlog"
#define IPCP_VRMC  0x76726d63
#define IPCP_KEY_VRMC "key-vrmc"
// #define IPCP_VLCONSOLE

#endif