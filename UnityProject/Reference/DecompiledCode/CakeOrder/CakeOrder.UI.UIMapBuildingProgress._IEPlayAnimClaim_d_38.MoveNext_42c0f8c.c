// rea decompile_all
// name: CakeOrder.UI.UIMapBuildingProgress.<IEPlayAnimClaim>d__38$$MoveNext
// address: 0x42c0f8c
// body: available
// range: 0x42c0f8c-0x42c10eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c10e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_UI_UIMapBuildingProgress_<IEPlayAnimClaim>d__38__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_0951731e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_0951731e = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x60) == 0)) ||
         (lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar5 + 0x60),0),
         lVar2 == 0)) goto LAB_042c10e8;
      *(undefined4 *)(lVar2 + 0x6c) = 0x3f800000;
      CakeOrder_UI_UIMapBuildingProgress__TriggerClaim(lVar5);
    }
LAB_042c10cc:
    return iVar1 == 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar5 != 0) && (lVar2 = *(long *)(lVar5 + 0x60), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x28c) = 1;
    lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar2,0);
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar5 + 0x60);
      *(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(lVar5 + 0x84);
      if ((lVar4 != 0) &&
         (lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar4,0), lVar2 != 0)) {
        Spine_AnimationState__SetAnimation(lVar2,0,*(undefined8 *)(lVar5 + 0x70),0,0);
        if ((*(long *)(lVar5 + 0x60) != 0) &&
           (lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar5 + 0x60),0),
           lVar2 != 0)) {
          Spine_AnimationState__AddAnimation(0,lVar2,0,*(undefined8 *)(lVar5 + 0x78),1,0);
          uVar6 = *(undefined4 *)(lVar5 + 0x80);
          uVar3 = thunk_FUN_03f9944c(DAT_0918ce98);
          UnityEngine_WaitForSecondsRealtime___ctor(uVar6,uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
          *(undefined4 *)(param_1 + 0x10) = 1;
          goto LAB_042c10cc;
        }
      }
    }
  }
LAB_042c10e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

