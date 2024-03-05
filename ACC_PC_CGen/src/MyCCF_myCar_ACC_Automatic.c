/******************************************************************************
 * DISCLAIMER
 * This code has been generated by ASCET-DEVELOPER Community Edition.
 * It shall be used only in projects for non commercial use.
 * See license terms and conditions under https://www.etas.com/en/products/download_center.php.
 ******************************************************************************/

/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER Community Edition 7.9.0
 * CODE GENERATOR:..............6.4.7
 * COMPONENT:...................MyCCF.myCar.ACC
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "MyCCF_myCar_ACC_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define accOn_VAL (self->MyCCF_myCar_ACC_Automatic_RAM->accOn)
#define brake_VAL (self->MyCCF_myCar_ACC_Automatic_RAM->brake)
#define on_VAL (self->MyCCF_myCar_ACC_Automatic_RAM->on)
#define sm_VAL (self->MyCCF_myCar_ACC_Automatic_RAM->sm)

/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/


/* definition of label "Braking" from enumeration "MyCCF_myCar_ACC_enum" */
#define Braking 1U
/* definition of label "Off" from enumeration "MyCCF_myCar_ACC_enum" */
#define Off 0U
/* definition of label "On" from enumeration "MyCCF_myCar_ACC_enum" */
#define On 2U


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'MyCCF_myCar_ACC_Automatic_aCCStatemachineTrigger'
 * ----------------------------------------------------------------------------
 * model name:...................................'aCCStatemachineTrigger'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void MyCCF_myCar_ACC_Automatic_aCCStatemachineTrigger ( const struct MyCCF_myCar_ACC_Automatic * self)
{
   switch (sm_VAL)
   {
      case Braking:
         if (brake_VAL == 0.0F)
         {
            accOn_VAL = false;
            sm_VAL = Off;
            break;
         } /* end if */
         break;
      case On:
         if (brake_VAL > 0.0F)
         {
            accOn_VAL = false;
            sm_VAL = Braking;
            break;
         } /* end if */
         break;
      case Off:
      default:
         if (brake_VAL > 0.0F)
         {
            accOn_VAL = false;
            sm_VAL = Braking;
            break;
         } /* end if */
         if (on_VAL)
         {
            accOn_VAL = true;
            sm_VAL = On;
            break;
         } /* end if */
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'MyCCF_myCar_ACC_Automatic_aCCStatemachineTrigger'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



