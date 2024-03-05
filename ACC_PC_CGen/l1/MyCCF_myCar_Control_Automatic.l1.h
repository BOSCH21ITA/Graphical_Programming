/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_MYCCF_MYCAR_CONTROL_AUTOMATIC
#define ESDL_L1_MYCCF_MYCAR_CONTROL_AUTOMATIC

#include "MyCCF_myCar_ACC_Automatic.l1.h"

/* structure for instance variables */
struct L1_MyCCF_myCar_Control_Automatic_Obj {
    ASDObjectHeader objectHeader;
    struct L1_MyCCF_myCar_ACC_Automatic_Obj* ACC_instance;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
} L1_MyCCF_myCar_Control_Automatic_Class;

extern L1_MyCCF_myCar_Control_Automatic_Class L1_MyCCF_myCar_Control_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_MyCCF_myCar_Control_Automatic_Obj* initInstance_L1_MyCCF_myCar_Control_Automatic(void);

#endif /* ESDL_L1_MYCCF_MYCAR_CONTROL_AUTOMATIC */
