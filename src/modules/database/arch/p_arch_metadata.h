

#ifndef P_LKRG_DATABASE_SUBMODULE_ARCH_H
#define P_LKRG_DATABASE_SUBMODULE_ARCH_H

#ifdef CONFIG_X86

/*
 * x86/amd64 CPU specific data
 */
#include "x86/p_x86_metadata.h"
#include "x86/p_switch_idt/p_switch_idt.h"

#elif defined(CONFIG_ARM)
/*
 * ARM CPU specific data
 */
#include "arm/p_arm_metadata.h"

#elif defined(CONFIG_ARM64)
/*
 * ARM64 CPU specific data
 */
#include "arm64/p_arm64_metadata.h"

#endif

extern void p_dump_CPU_metadata(void *_p_arg);

int p_register_arch_metadata(void);
int p_unregister_arch_metadata(void);

#endif
