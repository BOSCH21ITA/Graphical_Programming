/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_MYCCF_MYCAR_MYDRIVE_3_AUTOMATIC
#define ESDL_L1_MYCCF_MYCAR_MYDRIVE_3_AUTOMATIC

#include "MyCCF_myCar_MyTurn_Automatic.l1.h"

/* structure for instance variables */
struct L1_MyCCF_myCar_myDrive_3_Automatic_Obj {
    ASDObjectHeader objectHeader;
    charTable1Wrapper_Obj* BrakeMomentum;
    columnDirCharTable2Wrapper_Obj* EngineMomentum;
    charTable1Wrapper_Obj* AirFriction;
    charTable1Wrapper_Obj* Landscape;
    scalarWrapper_Obj* h;
    scalarWrapper_Obj* dh;
    scalarWrapper_Obj* ds;
    scalarWrapper_Obj* momentum;
    scalarWrapper_Obj* dist;
    scalarWrapper_Obj* TrackSize;
    scalarWrapper_Obj* v;
    struct L1_MyCCF_myCar_MyTurn_Automatic_Obj* MyTurn_instance;
    scalarWrapper_Obj* x;
    scalarWrapper_Obj* y;
    scalarWrapper_Obj* bearing;
    const struct MyCCF_myCar_myDrive_3_Automatic * esdl_model_ref;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
} L1_MyCCF_myCar_myDrive_3_Automatic_Class;

extern L1_MyCCF_myCar_myDrive_3_Automatic_Class L1_MyCCF_myCar_myDrive_3_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_MyCCF_myCar_myDrive_3_Automatic_Obj* initInstance_L1_MyCCF_myCar_myDrive_3_Automatic(const struct MyCCF_myCar_myDrive_3_Automatic* self);

#endif /* ESDL_L1_MYCCF_MYCAR_MYDRIVE_3_AUTOMATIC */
