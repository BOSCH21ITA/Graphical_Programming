/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#define ESDL_TYPES_H
#undef INCLUDE_ASCET_SE_INTPOL
#include "a_basdef.h"
#include "MyCCF_myCar_ACC_Automatic.l1.h"
#include "MyCCF_myCar_ACC_Automatic_private.h"
#include "MyCCF_myCar_ACC_Automatic.h"


static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    ((void *)0)
};

/* L1 class descriptor */
static ASDClassHeader L1_MyCCF_myCar_ACC_Automatic_ClassHeader = {
    0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_MyCCF_myCar_ACC_Automatic_Class L1_MyCCF_myCar_ACC_Automatic_ClassObj = {{1, {&L1_MyCCF_myCar_ACC_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_MyCCF_myCar_ACC_Automatic_Obj* initInstance_L1_MyCCF_myCar_ACC_Automatic(const struct MyCCF_myCar_ACC_Automatic* self)
{
    struct L1_MyCCF_myCar_ACC_Automatic_Obj* L1_Instance = NULL;

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_MyCCF_myCar_ACC_Automatic);
    L1_Instance->brake = initInstance_scalarWrapper((uint32)&(brake_VAL), sizeof(float32), ASD_VARIABLE);
    L1_Instance->on = initInstance_scalarWrapper((uint32)&(on_VAL), sizeof(uint8), ASD_VARIABLE);
    L1_Instance->accOn = initInstance_scalarWrapper((uint32)&(accOn_VAL), sizeof(uint8), ASD_VARIABLE);
    L1_Instance->sm = initInstance_scalarWrapper((uint32)&(sm_VAL), sizeof(uint8), ASD_VARIABLE);
    L1_Instance->esdl_model_ref = self;
    return L1_Instance;
}
