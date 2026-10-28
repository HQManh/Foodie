// rea decompile_all
// name: DG.Tweening.Plugins.Core.SpecialPluginsUtils$$SetLookAt
// address: 0x4565df4
// body: available
// range: 0x4565df4-0x4565f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4565f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_Plugins_Core_SpecialPluginsUtils__SetLookAt
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  
  if ((DAT_09518874 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09518874 = 1;
  }
  local_58 = 0;
  local_50 = 0;
  if ((param_4 != 0) && (plVar2 = *(long **)(param_4 + 0x48), plVar2 != (long *)0x0)) {
    if ((*(byte *)(DAT_0918c010 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) ==
        DAT_0918c010)) {
      fVar4 = *(float *)(param_4 + 0x130);
      fVar5 = *(float *)(param_4 + 0x134);
      fVar6 = *(float *)(param_4 + 0x138);
      local_3c = (float)UnityEngine_Transform__get_position(plVar2,0);
      fStack_38 = fVar5 - param_2;
      local_34 = fVar6 - param_3;
      iVar1 = *(int *)(param_4 + 0x14c);
      if (iVar1 == 2) {
        local_3c = 0.0;
      }
      else {
        local_3c = fVar4 - local_3c;
        if (iVar1 == 4) {
          fStack_38 = 0.0;
        }
        else if (iVar1 == 8) {
          local_34 = 0.0;
        }
      }
      local_48 = *(undefined8 *)(param_4 + 0x150);
      fVar6 = *(float *)(param_4 + 0x158);
      local_40 = fVar6;
      fVar4 = local_34;
      fVar5 = fStack_38;
      uVar3 = UnityEngine_Quaternion__Internal_LookRotation(&local_3c,&local_48,0);
      local_58 = CONCAT44(fVar4,uVar3);
      local_50 = CONCAT44(fVar5,fVar6);
      fVar5 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_58,0);
      fVar4 = fVar4 * 57.29578;
      fVar6 = fVar6 * 57.29578;
      uVar3 = UnityEngine_Quaternion__Internal_MakePositive(fVar5 * 57.29578,0);
      *(undefined4 *)(param_4 + 0x130) = uVar3;
      *(float *)(param_4 + 0x134) = fVar4;
      *(float *)(param_4 + 0x138) = fVar6;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

