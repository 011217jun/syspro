#include <stdio.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
int main()
{ 
   printf("my user ID : %d(%s) \n", getuid(), getpwuid(getuid())->pw_name);
   printf("my Uhyo user ID : %d(%s) \n", geteuid(), getpwuid(geteuid())->pw_name);
   printf("my group ID : %d(%s) \n", getgid(), getgrgid(getgid())->gr_name);
   printf("my Uhyo group ID : %d(%s) \n", getegid(), getgrgid(getegid())->gr_name);
}

