// rea decompile_all
// name: Utilities.GeometryUtilities$$IntersectLineSegments2D
// address: 0x450751c
// body: available
// range: 0x450751c-0x450771f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_GeometryUtilities__IntersectLineSegments2D
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,undefined8 *param_9)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_7 = param_7 - param_5;
  param_8 = param_8 - param_6;
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  fVar7 = param_8 * param_3 - param_7 * param_4;
  if ((DAT_095184ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_095184ec = 1;
  }
  param_5 = param_5 - param_1;
  param_6 = param_6 - param_2;
  if (**(float **)(DAT_09187e98 + 0xb8) <= ABS(fVar7)) {
    fVar2 = (param_8 * param_5 - param_7 * param_6) / fVar7;
    fVar7 = (param_4 * param_5 - param_3 * param_6) / fVar7;
    uVar4 = NEON_umaxv(CONCAT26(-(ushort)((short)((ushort)(byte)~-(0.0 <= fVar7) << 0xf) < 0),
                                CONCAT24(-(ushort)((short)((ushort)(byte)~-(0.0 <= fVar2) << 0xf) <
                                                  0),
                                         CONCAT22(-(ushort)((short)((ushort)(byte)~-(fVar7 <= 1.0)
                                                                   << 0xf) < 0),
                                                  -(ushort)((short)((ushort)(byte)~-(fVar2 <= 1.0)
                                                                   << 0xf) < 0)))),2);
    if ((uVar4 & 1) == 0) {
LAB_045076fc:
      uVar1 = 1;
      uVar3 = CONCAT44(param_2 + param_4 * fVar2,param_1 + param_3 * fVar2);
      goto LAB_04507708;
    }
  }
  else if (ABS(param_4 * param_5 - param_3 * param_6) < **(float **)(DAT_09187e98 + 0xb8)) {
    fVar7 = param_3 * param_3 + param_4 * param_4;
    fVar5 = param_3 * param_7 + param_4 * param_8;
    fVar2 = param_5 * (param_3 / fVar7) + param_6 * (param_4 / fVar7);
    fVar6 = fVar2 + fVar5 / fVar7;
    fVar7 = fVar2;
    if (0.0 <= fVar5) {
      fVar7 = fVar6;
      fVar6 = fVar2;
    }
    if ((fVar6 <= 1.0) && (0.0 <= fVar7)) {
      fVar2 = 0.0;
      if (0.0 <= fVar6) {
        fVar2 = fVar6;
      }
      fVar6 = 1.0;
      if (fVar7 <= 1.0) {
        fVar6 = fVar7;
      }
      fVar2 = fVar2 + (fVar6 - fVar2) * 0.5;
      goto LAB_045076fc;
    }
  }
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  uVar1 = 0;
  uVar3 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
LAB_04507708:
  *param_9 = uVar3;
  return uVar1;
}

