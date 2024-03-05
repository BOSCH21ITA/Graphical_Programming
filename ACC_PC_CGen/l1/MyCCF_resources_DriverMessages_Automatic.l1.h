/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_MYCCF_RESOURCES_DRIVERMESSAGES_AUTOMATIC
#define ESDL_L1_MYCCF_RESOURCES_DRIVERMESSAGES_AUTOMATIC


/* structure for instance variables */
struct L1_MyCCF_resources_DriverMessages_Automatic_Obj {
    ASDObjectHeader objectHeader;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_brake;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_power;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_on;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_display;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_increment;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_decrement;
    scalarWrapper_Obj* MyCCF_resources_DriverMessages_soll;
} L1_MyCCF_resources_DriverMessages_Automatic_Class;

extern L1_MyCCF_resources_DriverMessages_Automatic_Class L1_MyCCF_resources_DriverMessages_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_MyCCF_resources_DriverMessages_Automatic_Obj* initInstance_L1_MyCCF_resources_DriverMessages_Automatic(void);

#endif /* ESDL_L1_MYCCF_RESOURCES_DRIVERMESSAGES_AUTOMATIC */
