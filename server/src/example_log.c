#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <l4/re/c/log.h>
#include <l4/re/env.h>

int
main(void)
{
  l4re_log_print("l4re_log_print\n");
  l4re_log_printn("l4re_log_printn\n", strlen("l4re_log_printn\n"));

  l4re_env_t *env = l4re_env();
  l4re_log_print_srv(env->log, "l4re_log_print_srv\n");
  l4re_log_printn_srv(env->log, "l4re_log_printn_srv\n", strlen("l4re_log_printn_srv\n"));

  return EXIT_SUCCESS;
}
