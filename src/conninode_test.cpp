#include "conninode.cpp"

local_addr *local_addrs = NULL;
bool bughuntmode = false;

int main() {
 /* if (!addprocinfo("testfiles/proc_net_tcp")) {
    std::cerr << "Failed to load testfiles/proc_net_tcp" << std::endl;
    return 1;
  }
  if (!addprocinfo("testfiles/proc_net_tcp_big")) {
    std::cerr << "Failed to load testfiles/proc_net_tcp_big" << std::endl;
    return 2;
  }

#if !defined(__APPLE__) && !defined(__FreeBSD__)
  if (!addprocinfo("/proc/net/tcp")) {
    std::cerr << "Failed to load /proc/net/tcp" << std::endl;
    return 3;
  }
#endif*/


  if (!addprocinfo("/proc/net/tcp")) {
    std::cout << "Error: couldn't open /proc/net/tcp\n";
    exit(0);
  }
  addprocinfo("/proc/net/tcp6");

    printConninode();

   if (!addprocinfo("/proc/net/udp")) {
      std::cout << "Error: couldn't open /proc/net/udp\n";
      exit(0);
    }
    addprocinfo("/proc/net/udp6");


    printConninode()

  return 0;
}
