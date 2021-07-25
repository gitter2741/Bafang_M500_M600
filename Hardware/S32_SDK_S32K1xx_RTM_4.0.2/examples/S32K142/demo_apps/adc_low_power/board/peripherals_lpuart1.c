/***********************************************************************************************************************
 * This file was generated by the S32 Configuration Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Configuration Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v9.0
processor: S32K142
package_id: S32K142_LQFP100
mcu_data: s32sdk_s32k1xx_rtm_402
processor_version: 0.0.0
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: c6f0dc65-4367-4230-a391-f3e2380ae1c1
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_lpuart1.h"

/*******************************************************************************
 * lpuart1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'lpuart1'
- type: 'lpuart_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'lpuart'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPUART_1'
- config_sets:
  - lpuart_driver:
    - lpuart_state_name: 'lpuart1_State'
    - lpuart_configuration:
      - 0:
        - name: 'lpuart1_InitConfig0'
        - readonly: 'false'
        - transferType: 'LPUART_USING_INTERRUPTS'
        - baudRate: '115200'
        - parityMode: 'LPUART_PARITY_DISABLED'
        - stopBitCount: 'LPUART_ONE_STOP_BIT'
        - bitCountPerChar: 'LPUART_8_BITS_PER_CHAR'
        - rxDMAChannel: '0'
        - txDMAChannel: '0'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 */
lpuart_state_t lpuart1_State;

lpuart_user_config_t lpuart1_InitConfig0 = {
  .transferType = LPUART_USING_INTERRUPTS,
  .baudRate = 115200UL,
  .parityMode = LPUART_PARITY_DISABLED,
  .stopBitCount = LPUART_ONE_STOP_BIT,
  .bitCountPerChar = LPUART_8_BITS_PER_CHAR,
  .rxDMAChannel = 0UL,
  .txDMAChannel = 0UL
};

