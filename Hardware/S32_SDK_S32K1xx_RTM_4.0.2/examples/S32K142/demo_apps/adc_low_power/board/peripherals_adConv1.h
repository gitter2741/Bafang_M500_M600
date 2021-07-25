/***********************************************************************************************************************
 * This file was generated by the S32 Config Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef adConv1_H
#define adConv1_H

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The global macro will be used in function call of the module.
 *
 */
/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "adc_driver.h"

/*******************************************************************************
 * Definitions 
 ******************************************************************************/

/*Device instance number */
#define INST_ADCONV1  (0U)

/*******************************************************************************
 * Global variables 
 ******************************************************************************/

/* User configurations */

/* Converter configuration 0 */
extern const adc_converter_config_t adConv1_ConvConfig0;

/* Converter configuration 1 */
extern const adc_converter_config_t adConv1_ConvConfig1;

/* Converter configuration 2 */
extern const adc_converter_config_t adConv1_ConvConfig2;

/* Converter configuration 3 */
extern const adc_converter_config_t adConv1_ConvConfig3;

/* Hw Compare configuration 0 */
extern const adc_compare_config_t adConv1_HwCompConfig0;

/* Channel configuration 0 */
extern const adc_chan_config_t adConv1_ChnConfig0;

/* Channel configuration 1 */
extern const adc_chan_config_t adConv1_ChnConfig1;

/* Channel configuration 2 */
extern const adc_chan_config_t adConv1_ChnConfig2;

/* Channel configuration 3 */
extern const adc_chan_config_t adConv1_ChnConfig3;



#endif /* adConv1_H */