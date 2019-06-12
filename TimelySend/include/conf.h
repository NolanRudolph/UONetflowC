#ifndef CONF_H
#define CONF_H
#include <stdio.h>
#include <stdlib.h>
#include <netinet/ether.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <netinet/igmp.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <sys/socket.h>

void configure_ETHER(struct ether_header *ether, char *dst, char *src);
void configure_IP(struct ip *ip, unsigned short int version, unsigned \
		short int tos, char *src, char *dst, unsigned short int proto);
void configure_ICMP(struct icmp *icmp, unsigned short int type, \
					unsigned short int code);
void configure_IGMP(struct igmp *igmp, unsigned short int type, \
					unsigned short int code);
void configure_TCP(struct tcphdr *tcp, unsigned short int source, \
				   unsigned short int dest);
void configure_UDP(struct udphdr *udp, unsigned short int source, \
				   unsigned short int dest);

#endif 