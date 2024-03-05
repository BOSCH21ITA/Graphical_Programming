/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#define ESDL_TYPES_H
#undef INCLUDE_ASCET_SE_INTPOL
#include "a_basdef.h"
#include "MyCCF_myCar_Driver_Automatic.l1.h"
#include "MyCCF_myCar_Driver_Automatic_private.h"
#include "MyCCF_myCar_Driver_Automatic.h"


static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    ((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_MyCCF_myCar_Driver_Automatic_Obj* L1_MyCCF_myCar_Driver_Automatic_Instance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_MyCCF_myCar_Driver_Automatic_ClassHeader = {
    0, 0, 2, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_MyCCF_myCar_Driver_Automatic_Class L1_MyCCF_myCar_Driver_Automatic_ClassObj = {{1, {&L1_MyCCF_myCar_Driver_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_MyCCF_myCar_Driver_Automatic_Obj* initInstance_L1_MyCCF_myCar_Driver_Automatic(void)
{
    struct L1_MyCCF_myCar_Driver_Automatic_Obj* L1_Instance = NULL;

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_MyCCF_myCar_Driver_Automatic);
    L1_Instance->controlACC = initInstance_scalarWrapper((uint32)&(controlACC_VAL), sizeof(uint8), ASD_PARAMETER);
    L1_Instance->brake = initInstance_scalarWrapper((uint32)&(brake_VAL), sizeof(float32), ASD_PARAMETER);
    L1_MyCCF_myCar_Driver_Automatic_Instance = L1_Instance;
    return L1_Instance;
}
