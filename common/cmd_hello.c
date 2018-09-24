#include <common.h>
#include <command.h>

int do_hello(cmd_tbl_t * cmdtp, int flag, int argc, char * const argv[])
{
    printf("hello uboot\n\n");
}

U_BOOT_CMD(
    hello,
    1,
    1,
    do_hello,
    "this is a demo command",
    "\n    - this is a demo long help\n"
);

