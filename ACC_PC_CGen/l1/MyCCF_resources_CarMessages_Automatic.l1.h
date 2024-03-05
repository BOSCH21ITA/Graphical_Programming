/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_MYCCF_RESOURCES_CARMESSAGES_AUTOMATIC
#define ESDL_L1_MYCCF_RESOURCES_CARMESSAGES_AUTOMATIC


/* structure for instance variables */
struct L1_MyCCF_resources_CarMessages_Automatic_Obj {
    ASDObjectHeader objectHeader;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_v;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_power;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_brake;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_steering;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_bearing;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_x;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_y;
    scalarWrapper_Obj* MyCCF_resources_CarMessages_time;
} L1_MyCCF_resources_CarMessages_Automatic_Class;

extern L1_MyCCF_resources_CarMessages_Automatic_Class L1_MyCCF_resources_CarMessages_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_MyCCF_resources_CarMessages_Automatic_Obj* initInstance_L1_MyCCF_resources_CarMessages_Automatic(void);

#endif /* ESDL_L1_MYCCF_RESOURCES_CARMESSAGES_AUTOMATIC */
