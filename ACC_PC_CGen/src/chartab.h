#ifndef _ASD_CHARTAB_H_
#define _ASD_CHARTAB_H_



/*-----------------------------------------------------------------------------
 *    Enumeration Type Definitions
 *----------------------------------------------------------------------------*/


/* definition of State Machine Enumeration type: "MyCCF_myCar_ACC_enum" (derived from class "MyCCF_myCar_ACC") */
/* typedef not provided, base type "uint8" used instead (code generation option "Generation of enums" not set to "Enumeration") */

/*-----------------------------------------------------------------------------
 *    OneD Characteristic Table Type Definitions
 *----------------------------------------------------------------------------*/

/* definition of characteristic table type: 'CharTable1D_float32_128_float32_128' */
struct CharTable1D_float32_128_float32_128 {
   uint16 xSize;
   float32 xDist [128];
   float32 values [128];
};


/* definition of characteristic table type: 'CharTable1D_float32_6_float32_6' */
struct CharTable1D_float32_6_float32_6 {
   uint16 xSize;
   float32 xDist [6];
   float32 values [6];
};



/*-----------------------------------------------------------------------------
 *    TwoD Characteristic Table Type Definitions
 *----------------------------------------------------------------------------*/

/* definition of characteristic table type: 'CharTable2D_float32_6_float32_6_float32_36' */
struct CharTable2D_float32_6_float32_6_float32_36 {
   uint16 xSize;
   uint16 ySize;
   float32 xDist [6];
   float32 yDist [6];
   float32 values [6 * 6];
};



#endif /* _ASD_CHARTAB_H_ */
