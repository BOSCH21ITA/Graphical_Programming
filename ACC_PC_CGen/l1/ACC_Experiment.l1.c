/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#define ESDL_TYPES_H
#undef INCLUDE_ASCET_SE_INTPOL
#include "a_basdef.h"
#include "ACC_Experiment.l1.h"
#include "ACC_Experiment.init.h"
#include "programId_ACC_Experiment.h"

/* L1 protocol function to get program ID */
static uint8 *_L1_getPid (ASDObject *self, uint8 *_ASCET_data)
{
    uint8 defineFlag = true;
    uint32 pid = UNIQUE_PROGRAM_ID;
    addScalar (_ASCET_data, (uint8 *)&pid, sizeof(uint32));
    addScalar (_ASCET_data, (uint8 *)&defineFlag, sizeof(defineFlag));
    return (_ASCET_data);
}

/* L1 protocol function to non-volitile data ID */
static uint8 *_L1_getNVid(ASDObject *self, uint8 *_ASCET_data)
{
    uint8 defineFlag = true;
    uint32 nvid = 0;
    addScalar (_ASCET_data, (uint8 *)&nvid, sizeof(nvid));
    addScalar (_ASCET_data, (uint8 *)&defineFlag, sizeof(defineFlag));
    return (_ASCET_data);
}

static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    _L1_getPid,
    _L1_getNVid
};

/* for singleton components create an L1 instance here */
static struct L1_ACC_Experiment_Obj* L1_ACC_Experiment_Instance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_ACC_Experiment_ClassHeader = {
    0, 2, 0, 5, &_ObjectMethodList, &_ClassMethodList
};
L1_ACC_Experiment_Class L1_ACC_Experiment_ClassObj = {{1, {&L1_ACC_Experiment_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_L1_ACC_Experiment = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_ACC_Experiment (L1_ACC_Experiment_Class* _ASCET_class)
{
    _ASCET_class->MyCCF_myCar_myCar = initInstance_L1_MyCCF_myCar_myCar_Automatic();
    _ASCET_class->MyCCF_myCar_Driver = initInstance_L1_MyCCF_myCar_Driver_Automatic();
    _ASCET_class->MyCCF_myCar_Control = initInstance_L1_MyCCF_myCar_Control_Automatic();
    _ASCET_class->MyCCF_resources_CarMessages = initInstance_L1_MyCCF_resources_CarMessages_Automatic();
    _ASCET_class->MyCCF_resources_DriverMessages = initInstance_L1_MyCCF_resources_DriverMessages_Automatic();
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_ACC_Experiment_Obj* initInstance_L1_ACC_Experiment(void)
{
    struct L1_ACC_Experiment_Obj* L1_Instance = NULL;
    /* for first time also static fields shall be initialized */
    if (!initialized_L1_ACC_Experiment) {
        initialized_L1_ACC_Experiment = true;
        initClass_L1_ACC_Experiment(&(L1_ACC_Experiment_ClassObj));
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_ACC_Experiment);
    L1_ACC_Experiment_Instance = L1_Instance;
    return L1_Instance;
}
