/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_MYCCF_MYCAR_MYCAR_AUTOMATIC
#define ESDL_L1_MYCCF_MYCAR_MYCAR_AUTOMATIC

#include "MyCCF_myCar_myDrive_3_Automatic.l1.h"

/* structure for instance variables */
struct L1_MyCCF_myCar_myCar_Automatic_Obj {
    ASDObjectHeader objectHeader;
    struct L1_MyCCF_myCar_myDrive_3_Automatic_Obj* myVehicle;
    scalarWrapper_Obj* g;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
} L1_MyCCF_myCar_myCar_Automatic_Class;

extern L1_MyCCF_myCar_myCar_Automatic_Class L1_MyCCF_myCar_myCar_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_MyCCF_myCar_myCar_Automatic_Obj* initInstance_L1_MyCCF_myCar_myCar_Automatic(void);

#endif /* ESDL_L1_MYCCF_MYCAR_MYCAR_AUTOMATIC */
