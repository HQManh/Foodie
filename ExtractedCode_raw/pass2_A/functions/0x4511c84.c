// rea decompile_all
// name: Utilities.DraggableObjectEffectLiftShadow$$SetNormalImmediate
// address: 0x4511c84
// body: available
// range: 0x4511c84-0x4511e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4511e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectEffectLiftShadow__SetNormalImmediate(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  float local_28;
  
  if ((DAT_0951853d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951853d = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04511e3c;
    UnityEngine_Transform__set_localPosition
              (*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
               *(undefined4 *)(param_1 + 0x60),*(long *)(param_1 + 0x28),0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    local_30 = 0;
    local_28 = *(float *)(param_1 + 100) * 0.017453292;
    UnityEngine_Quaternion__Internal_FromEulerRad(&local_30,0);
    if (lVar3 == 0) goto LAB_04511e3c;
    UnityEngine_Transform__set_localRotation(lVar3,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_04511e3c;
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x70),*(long *)(param_1 + 0x30),0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_04511e3c;
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x7c),*(long *)(param_1 + 0x48),0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      UnityEngine_SpriteRenderer__get_color(*(long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0x40) != 0) {
        UnityEngine_SpriteRenderer__set_color(*(long *)(param_1 + 0x40),0);
        goto LAB_04511e14;
      }
    }
LAB_04511e3c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04511e14:
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  return;
}

