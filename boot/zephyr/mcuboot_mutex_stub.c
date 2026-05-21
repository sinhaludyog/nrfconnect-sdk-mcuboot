#include <zephyr/kernel.h>

int z_impl_k_mutex_lock(struct k_mutex *mutex, k_timeout_t timeout)
{
    ARG_UNUSED(mutex);
    ARG_UNUSED(timeout);
    return 0;
}

int z_impl_k_mutex_unlock(struct k_mutex *mutex)
{
    ARG_UNUSED(mutex);
    return 0;
}

int z_impl_k_mutex_init(struct k_mutex *mutex)
{
    ARG_UNUSED(mutex);
    return 0;
}