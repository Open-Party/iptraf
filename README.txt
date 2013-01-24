SOURCE:
- http://iptraf.seul.org/
- ftp://iptraf.seul.org/pub/iptraf/iptraf-3.0.0.tar.gz


NOTICE:
- iptraf need "libncurses5-dev" (my platform is debian "squeeze", apt-get install it)
- why don't fix from iptraf-ng ? (https://fedorahosted.org/iptraf-ng/)
-- iptraf-ng changes code indent and bad indent
-- iptraf-ng changes some code/file structure


TODO:
- Original 'IP traffic monitor' with 'TCP only' and 'UDP only'.
- Show PID/Program Username (ref: netstat -tup)
- UI: Press v/V to change activity mode immediately.


DONE:
- Configure->Activity mode, add 'mbits/s' 'mbytes/s' 'gbits/s' 'gbytes/s'.
- UI: Press v/V to change activity mode immediately:
  - IP traffic monitor
  - General interface statistics

TEST:
- TBD
