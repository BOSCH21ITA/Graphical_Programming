/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_ACC_EXPERIMENT
#define ESDL_L1_ACC_EXPERIMENT

#include "MyCCF_myCar_myCar_Automatic.l1.h"
#include "MyCCF_myCar_Driver_Automatic.l1.h"
#include "MyCCF_myCar_Control_Automatic.l1.h"
#include "MyCCF_resources_CarMessages_Automatic.l1.h"
#include "MyCCF_resources_DriverMessages_Automatic.l1.h"

/* structure for instance variables */
struct L1_ACC_Experiment_Obj {
    ASDObjectHeader objectHeader;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
    struct L1_MyCCF_myCar_myCar_Automatic_Obj* MyCCF_myCar_myCar;
    struct L1_MyCCF_myCar_Driver_Automatic_Obj* MyCCF_myCar_Driver;
    struct L1_MyCCF_myCar_Control_Automatic_Obj* MyCCF_myCar_Control;
    struct L1_MyCCF_resources_CarMessages_Automatic_Obj* MyCCF_resources_CarMessages;
    struct L1_MyCCF_resources_DriverMessages_Automatic_Obj* MyCCF_resources_DriverMessages;
} L1_ACC_Experiment_Class;

extern L1_ACC_Experiment_Class L1_ACC_Experiment_ClassObj;

/* public L1 init function of this component */
extern struct L1_ACC_Experiment_Obj* initInstance_L1_ACC_Experiment(void);

#endif /* ESDL_L1_ACC_EXPERIMENT */
