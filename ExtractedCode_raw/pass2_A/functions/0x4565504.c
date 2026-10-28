// rea decompile_all
// name: DG.Tweening.Plugins.QuaternionPlugin$$SetFrom
// address: 0x4565504
// body: available
// range: 0x4565504-0x4565647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4565644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_QuaternionPlugin__SetFrom
               (float param_1,float param_2,float param_3,undefined4 param_4,undefined8 param_5,
               long param_6,uint param_7,uint param_8)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float extraout_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  
  local_50 = 0;
  local_48 = 0;
  if ((param_8 & 1) == 0) {
    if (param_6 == 0) goto LAB_04565644;
    fVar3 = *(float *)(param_6 + 0x130);
    fVar4 = *(float *)(param_6 + 0x134);
    fVar6 = *(float *)(param_6 + 0x138);
  }
  else {
    if ((param_6 == 0) || (lVar1 = *(long *)(param_6 + 0x170), lVar1 == 0)) goto LAB_04565644;
    fVar4 = param_2;
    fVar6 = param_3;
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    local_50 = CONCAT44(fVar4,uVar2);
    local_48 = CONCAT44(param_4,fVar6);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_50,0);
    fVar4 = fVar4 * 57.29578;
    fVar6 = fVar6 * 57.29578;
    param_5 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    param_1 = param_1 + extraout_s0;
    param_2 = param_2 + fVar4;
    param_3 = param_3 + fVar6;
    fVar3 = *(float *)(param_6 + 0x130) + extraout_s0;
    fVar4 = fVar4 + *(float *)(param_6 + 0x134);
    fVar6 = fVar6 + *(float *)(param_6 + 0x138);
    *(float *)(param_6 + 0x130) = fVar3;
    *(float *)(param_6 + 0x134) = fVar4;
    *(float *)(param_6 + 0x138) = fVar6;
  }
  fVar5 = param_2;
  fVar7 = param_3;
  uVar2 = DG_Tweening_Plugins_QuaternionPlugin__GetEulerValForCalculations
                    (param_1,param_2,param_3,fVar3,fVar4,fVar6,param_5,param_6);
  *(undefined4 *)(param_6 + 0x124) = uVar2;
  *(float *)(param_6 + 0x128) = fVar5;
  *(float *)(param_6 + 300) = fVar7;
  if ((param_7 & 1) != 0) {
    lVar1 = *(long *)(param_6 + 0x178);
    local_38 = param_3 * 0.017453292;
    _local_40 = CONCAT44(param_2 * 0.017453292,param_1 * 0.017453292);
    UnityEngine_Quaternion__Internal_FromEulerRad(&local_40,0);
    if (lVar1 == 0) {
LAB_04565644:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}

