#include<stdio.h>
#include <stdint.h>
struct tcpHeader{
  uint16_t sp;
  uint16_t dp;
  uint32_t sq;
  uint32_t ack;
  uint16_t hl:4;

  uint16_t rb:6;
  uint16_t urg:1;
  uint16_t ack:1;
  uint16_t psh:1;
  uint16_t rst:1;
  uint16_t syn:1;
  uint16_t fin:1;

};