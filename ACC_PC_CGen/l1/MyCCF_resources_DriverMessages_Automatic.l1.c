/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#define ESDL_TYPES_H
#undef INCLUDE_ASCET_SE_INTPOL
#include "a_basdef.h"
#include "MyCCF_resources_DriverMessages_Automatic.l1.h"
#include "MyCCF_resources_DriverMessages_Automatic.h"


static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    ((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_MyCCF_resources_DriverMessages_Automatic_Obj* L1_MyCCF_resources_DriverMessages_Automatic_Instance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_MyCCF_resources_DriverMessages_Automatic_ClassHeader = {
    0, 0, 0, 7, &_ObjectMethodList, &_ClassMethodList
};
L1_MyCCF_resources_DriverMessages_Automatic_Class L1_MyCCF_resources_DriverMessages_Automatic_ClassObj = {{1, {&L1_MyCCF_resources_DriverMessages_Automatic_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_L1_MyCCF_resources_DriverMessages_Automatic = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_MyCCF_resources_DriverMessages_Automatic (L1_MyCCF_resources_DriverMessages_Automatic_Class* _ASCET_class)
{
    _ASCET_class->MyCCF_resources_DriverMessages_brake = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_brake), sizeof(float32), ASD_VARIABLE);
    _ASCET_class->MyCCF_resources_DriverMessages_power = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_power), sizeof(float32), ASD_VARIABLE);
    _ASCET_class->MyCCF_resources_DriverMessages_on = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_on), sizeof(uint8), ASD_VARIABLE);
    _ASCET_class->MyCCF_resources_DriverMessages_display = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_display), sizeof(uint8), ASD_VARIABLE);
    _ASCET_class->MyCCF_resources_DriverMessages_increment = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_increment), sizeof(uint8), ASD_VARIABLE);
    _ASCET_class->MyCCF_resources_DriverMessages_decrement = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_decrement), sizeof(uint8), ASD_VARIABLE);
    _ASCET_class->MyCCF_resources_DriverMessages_soll = initInstance_scalarWrapper((uint32)&(MyCCF_resources_DriverMessages_soll), sizeof(float32), ASD_VARIABLE);
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_MyCCF_resources_DriverMessages_Automatic_Obj* initInstance_L1_MyCCF_resources_DriverMessages_Automatic(void)
{
    struct L1_MyCCF_resources_DriverMessages_Automatic_Obj* L1_Instance = NULL;
    /* for first time also static fields shall be initialized */
    if (!initialized_L1_MyCCF_resources_DriverMessages_Automatic) {
        initialized_L1_MyCCF_resources_DriverMessages_Automatic = true;
        initClass_L1_MyCCF_resources_DriverMessages_Automatic(&(L1_MyCCF_resources_DriverMessages_Automatic_ClassObj));
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_MyCCF_resources_DriverMessages_Automatic);
    L1_MyCCF_resources_DriverMessages_Automatic_Instance = L1_Instance;
    return L1_Instance;
}
