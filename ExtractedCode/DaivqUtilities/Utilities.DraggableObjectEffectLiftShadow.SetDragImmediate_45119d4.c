// rea decompile_all
// name: Utilities.DraggableObjectEffectLiftShadow$$SetDragImmediate
// address: 0x45119d4
// body: available
// range: 0x45119d4-0x4511c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4511c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectEffectLiftShadow__SetDragImmediate(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_0951853b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951853b = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    fVar7 = *(float *)(param_1 + 0x60);
    if (DAT_09515faa == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515faa = '\x01';
    }
    if ((*(long *)(param_1 + 0x50) == 0) || (lVar3 == 0)) goto LAB_04511c80;
    fVar4 = *(float *)(*(long *)(param_1 + 0x50) + 0x18);
    uVar6 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
    UnityEngine_Transform__set_localPosition
              ((float)uVar2 + (float)uVar6 * fVar4,
               (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar6 >> 0x20) * fVar4,
               fVar7 + *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * fVar4,lVar3,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_04511c80;
    fVar7 = (float)UnityEngine_Random__Range
                             (*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x24),0x3f800000,0);
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_04511c80;
    fVar8 = *(float *)(*(long *)(param_1 + 0x50) + 0x20);
    fVar5 = (float)UnityEngine_Random__get_value(0);
    lVar3 = *(long *)(param_1 + 0x38);
    local_50 = 0;
    fVar4 = -(fVar7 * fVar8);
    if (0.5 < fVar5) {
      fVar4 = fVar7 * fVar8;
    }
    local_48 = (*(float *)(param_1 + 100) + fVar4) * 0.017453292;
    UnityEngine_Quaternion__Internal_FromEulerRad(&local_50,0);
    if (lVar3 == 0) goto LAB_04511c80;
    UnityEngine_Transform__set_localRotation(lVar3,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_04511c80;
    fVar7 = *(float *)(*(long *)(param_1 + 0x50) + 0x1c);
    UnityEngine_Transform__set_localScale
              (fVar7 * *(float *)(param_1 + 0x68),fVar7 * *(float *)(param_1 + 0x6c),
               *(float *)(param_1 + 0x70) * fVar7,*(long *)(param_1 + 0x30),0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_04511c80;
    fVar7 = *(float *)(*(long *)(param_1 + 0x50) + 0x28);
    UnityEngine_Transform__set_localScale
              (fVar7 * *(float *)(param_1 + 0x74),fVar7 * *(float *)(param_1 + 0x78),
               *(float *)(param_1 + 0x7c) * fVar7,*(long *)(param_1 + 0x48),0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (((*(long *)(param_1 + 0x40) == 0) ||
        (UnityEngine_SpriteRenderer__get_color(*(long *)(param_1 + 0x40),0),
        *(long *)(param_1 + 0x50) == 0)) || (*(long *)(param_1 + 0x40) == 0)) {
LAB_04511c80:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_SpriteRenderer__set_color(*(long *)(param_1 + 0x40),0);
  }
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  return;
}

