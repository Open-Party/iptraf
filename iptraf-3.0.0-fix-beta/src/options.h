
struct OPTIONS {
    unsigned int color:1,
        logging:1,
        revlook:1, servnames:1, promisc:1, mac:1, dummy:9;
    unsigned int actmode;
    unsigned int timeout;
    unsigned int logspan;
    unsigned int updrate;
    unsigned int closedint;
};

#define ACTIVITY_MODE_KBITS  0
#define ACTIVITY_MODE_KBYTES 1
#define ACTIVITY_MODE_MBITS  2
#define ACTIVITY_MODE_MBYTES 3
#define ACTIVITY_MODE_GBITS  4
#define ACTIVITY_MODE_GBYTES 5
#define ACTIVITY_MODE_MAX    6          /* ACTIVITY_MODE_GBYTES + 1 */
#define DEFAULT_UPDATE_DELAY 50000      /* usec screen delay if update rate 0 */
#define HOSTMON_UPDATE_DELAY 100000
