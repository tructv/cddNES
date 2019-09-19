#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float2 texel_offset;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   texel_offset c0       1
//

    vs_3_0
    def c1, 0, 1, 0, 0
    dcl_position v0
    dcl_texcoord v1
    dcl_position o0
    dcl_texcoord o1.xy
    add o0.xy, c0, v0
    mov o0.zw, c1.xyxy
    mov o1.xy, v1

// approximately 3 instruction slots used
#endif

const BYTE VS[] =
{
      0,   3, 254, 255, 254, 255, 
     33,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  87,   0, 
      0,   0,   0,   3, 254, 255, 
      1,   0,   0,   0,  28,   0, 
      0,   0,   0, 137,   0,   0, 
     80,   0,   0,   0,  48,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0,  64,   0, 
      0,   0,   0,   0,   0,   0, 
    116, 101, 120, 101, 108,  95, 
    111, 102, 102, 115, 101, 116, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   2,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 118, 115,  95,  51, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  49,  48,  46,  49, 
      0, 171,  81,   0,   0,   5, 
      1,   0,  15, 160,   0,   0, 
      0,   0,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   0, 128,   1,   0, 
     15, 144,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 224,  31,   0,   0,   2, 
      5,   0,   0, 128,   1,   0, 
      3, 224,   2,   0,   0,   3, 
      0,   0,   3, 224,   0,   0, 
    228, 160,   0,   0, 228, 144, 
      1,   0,   0,   2,   0,   0, 
     12, 224,   1,   0,  68, 160, 
      1,   0,   0,   2,   1,   0, 
      3, 224,   1,   0, 228, 144, 
    255, 255,   0,   0
};