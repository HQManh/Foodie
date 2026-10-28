// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineFill$$Stop
// address: 0x410d10c
// body: available
// range: 0x410d10c-0x410d27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410d268 to 0x410c204 AnhPD.FoodOrder.GroupViewSpineFill$$Rest (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410d278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineFill__Stop(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095161cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095161cb = 1;
  }
  AnhPD_FoodOrder_GroupViewSpineFill__StopLoop(param_1);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_1 + 0x20),0);
      if (lVar4 != 0) {
        Spine_AnimationState__ClearTrack(lVar4,0,0);
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar4 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_1 + 0x20),0);
        if (lVar4 != 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0410d278;
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          uVar2 = System_String__IsNullOrEmpty(uVar6,0);
          uVar5 = 0;
          if ((uVar2 & 1) == 0) {
            if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0410d278;
            uVar5 = Spine_SkeletonData__FindSkin(*(long *)(lVar4 + 0x10),uVar6,0);
          }
          Spine_Skeleton__SetSkin(lVar4,uVar5,0);
          Spine_Skeleton__SetToSetupPose(lVar4,0);
        }
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x15c) = 0x3f800000;
          Spine_Unity_SkeletonAnimation__Update(0,lVar4,0);
          plVar3 = *(long **)(param_1 + 0x20);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
            AnhPD_FoodOrder_GroupViewSpineFill__Rest(param_1);
            return;
          }
        }
      }
    }
  }
LAB_0410d278:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

