#ifndef _STM32_H_
#define _STM32_H_
/* some useful macros for the bitfield manipulation here */
/* modify bitfield */
#define BMD(reg, msk, val)     (reg) = (((reg) & ~(msk)) | (val))
/* set bitfield */
#define BST(reg, bits)         (reg) = ((reg) | (bits))
/* clear bitfield */
#define BCL(reg, bits)         (reg) = ((reg) & ~(bits))
/* wait until bitfield set */
#define WBS(reg, bits)         while((reg) & (bits) == 0)
/* wait until bitfield clear */
#define WBC(reg, bits)         while((reg) & (bits) != 0)
/* wait for bitfield value */
#define WVL(reg, msk, val)     while(((reg) & (msk)) != (val))

#if defined(STM32F0)
    #include "STM32F0xx/Include/stm32f0xx.h"
#elif defined(STM32F1)
    #include "STM32F1xx/Include/stm32f1xx.h"
#elif defined(STM32F2)
    #include "STM32F2xx/Include/stm32f2xx.h"
#elif defined(STM32F3)
    #include "STM32F3xx/Include/stm32f3xx.h"
#elif defined(STM32F4)
    #include "STM32F4xx/Include/stm32f4xx.h"
#elif defined(STM32F7)
    #include "STM32F7xx/Include/stm32f7xx.h"
#elif defined(STM32L0)
    #include "STM32L0xx/Include/stm32l0xx.h"
#elif defined(STM32L1)
    #include "STM32L1xx/Include/stm32l1xx.h"
#elif defined(STM32L4)
    #include "STM32L1xx/Include/stm32l4xx.h"
#else
    #error "STM32 family not defined"
#endif


#endif // _STM32_H_
