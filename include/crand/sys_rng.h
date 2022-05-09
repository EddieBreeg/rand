#ifndef RAND_H
#define RAND_H

// writes n random bytes in out, using an external non deterministic entropy source
// Returns: 0 on success, 1 on failure
#ifdef __cplusplus
namespace crand{
#endif

int randomize(void *out, unsigned long n);

#ifdef __cplusplus
}
#endif
#endif