/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/

#ifndef ESDL_L1_MYCCF_MYCAR_MYTURN_AUTOMATIC
#define ESDL_L1_MYCCF_MYCAR_MYTURN_AUTOMATIC


/* structure for instance variables */
struct L1_MyCCF_myCar_MyTurn_Automatic_Obj {
    ASDObjectHeader objectHeader;
    scalarWrapper_Obj* x;
    scalarWrapper_Obj* y;
    scalarWrapper_Obj* bearing;
    scalarWrapper_Obj* D;
    scalarWrapper_Obj* dpi;
    scalarWrapper_Obj* pi;
    const struct MyCCF_myCar_MyTurn_Automatic * esdl_model_ref;
};

/* structure for static/shared variables */
typedef struct {
    ASDObjectHeader objectHeader;
} L1_MyCCF_myCar_MyTurn_Automatic_Class;

extern L1_MyCCF_myCar_MyTurn_Automatic_Class L1_MyCCF_myCar_MyTurn_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_MyCCF_myCar_MyTurn_Automatic_Obj* initInstance_L1_MyCCF_myCar_MyTurn_Automatic(const struct MyCCF_myCar_MyTurn_Automatic* self);

#endif /* ESDL_L1_MYCCF_MYCAR_MYTURN_AUTOMATIC */
