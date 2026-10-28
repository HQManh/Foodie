// rea decompile_all
// name: CakeOrder.BaseUI.UITabIconSpineState$$Update
// address: 0x42da7dc
// body: available
// range: 0x42da7dc-0x42da92b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42da928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UITabIconSpineState__Update(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  if ((DAT_095173f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7810);
    FUN_03f5c2a4(&DAT_091b7808);
    FUN_03f5c2a4(&DAT_091b7818);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095173f9 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_042da928:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x50);
      if (((*(ulong *)(param_1 + 0x4c) & 0xff) == 0) ||
         (iVar1 != (int)(*(ulong *)(param_1 + 0x4c) >> 0x20))) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_042da928;
        uVar2 = Spine_Unity_SkeletonGraphic__get_IsValid(*(long *)(param_1 + 0x28),0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_042da928;
          lVar3 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(param_1 + 0x28),0);
          if (lVar3 != 0) {
            local_28 = 0;
            FUN_05c30b18(&local_28,iVar1,DAT_091b7808);
            *(undefined8 *)(param_1 + 0x4c) = local_28;
            if (iVar1 == 1) {
              CakeOrder_BaseUI_UITabIconSpineState__PlaySelected();
            }
            else {
              CakeOrder_BaseUI_UITabIconSpineState__PlayNormal(param_1,lVar3);
            }
          }
        }
      }
    }
  }
  return;
}

