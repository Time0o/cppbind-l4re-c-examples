#include <assert.h>
#include <stdlib.h>

#include <l4/re/c/debug.h>
#include <l4/re/env.h>

#include <l4/sys/types.h>

int
main(void)
{
  l4re_env_t *env = l4re_env();

  l4_cap_idx_t mem_alloc = env->mem_alloc;
  assert(l4_is_valid_cap(mem_alloc));

  l4re_debug_obj_debug(mem_alloc, 0);

  l4_cap_idx_t rm = env->rm;
  assert(l4_is_valid_cap(rm));

  l4re_debug_obj_debug(rm, 0);

  return EXIT_SUCCESS;
}
