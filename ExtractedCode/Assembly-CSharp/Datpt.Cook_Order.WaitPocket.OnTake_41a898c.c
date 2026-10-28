// rea decompile_all
// name: Datpt.Cook_Order.WaitPocket$$OnTake
// address: 0x41a898c
// body: available
// range: 0x41a898c-0x41a8d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a8d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_WaitPocket__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,long *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09516895 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_09186bf8);
    FUN_03f5c2a4(&DAT_091bb170);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_0918c980);
    FUN_03f5c2a4(&DAT_091defa0);
    FUN_03f5c2a4(&DAT_091defa8);
    DAT_09516895 = 1;
  }
  if (param_6 == (long *)0x0) {
LAB_041a8a70:
    uVar1 = 0;
  }
  else {
    lVar2 = *param_6;
    if ((*(byte *)(lVar2 + 0x130) < *(byte *)(DAT_09186bf8 + 0x130)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09186bf8 + 0x130) * 8 + -8) !=
        DAT_09186bf8)) {
      if ((*(byte *)(lVar2 + 0x130) < *(byte *)(DAT_09186bf0 + 0x130)) ||
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09186bf0 + 0x130) * 8 + -8) !=
          DAT_09186bf0)) goto LAB_041a8a70;
      piVar4 = (int *)(param_5 + 0x3c);
      if (*piVar4 < 1) {
        *(int *)(param_5 + 0x38) = (int)param_6[0x11];
      }
      else if (*(int *)(param_5 + 0x38) != (int)param_6[0x11]) goto LAB_041a8a70;
      if (*(long *)(param_5 + 0x40) == 0) {
LAB_041a8d84:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_061a19e4(*(long *)(param_5 + 0x40),param_6,DAT_091bb170);
      *piVar4 = *piVar4 + 1;
      lVar2 = UnityEngine_Component__get_transform(param_6,0);
      if (lVar2 == 0) goto LAB_041a8d84;
      UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(param_5 + 0x28),0);
      (**(code **)(*param_6 + 0x428))(param_6,0,*(undefined8 *)(*param_6 + 0x430));
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_041a8d84;
      uVar5 = UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_041a8d84;
      uVar7 = param_2;
      uVar8 = param_3;
      uVar6 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x20),0);
      (**(code **)(*param_6 + 0x3c8))
                (uVar5,param_2,param_3,uVar6,uVar7,uVar8,param_4,0x3e4ccccd,param_6,
                 *(undefined8 *)(*param_6 + 0x3d0));
      uVar1 = UnityEngine_Component__get_transform(param_6,0);
      DG_Tweening_ShortcutExtensions__DOScale(0x3f000000,0x3e4ccccd,uVar1,0);
      lVar2 = *(long *)(param_5 + 0x30);
      uVar1 = System_Int32__ToString(piVar4,0);
      if (lVar2 == 0) goto LAB_041a8d84;
      UnityEngine_TextMesh__set_text(lVar2,uVar1,0);
      uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
      puVar3 = &DAT_091defa8;
    }
    else {
      piVar4 = (int *)(param_5 + 0x3c);
      if (*piVar4 < 1) {
        *(int *)(param_5 + 0x38) = (int)param_6[0x11];
      }
      else if (*(int *)(param_5 + 0x38) != (int)param_6[0x11]) goto LAB_041a8a70;
      if (*(long *)(param_5 + 0x40) == 0) goto LAB_041a8d84;
      FUN_061a19e4(*(long *)(param_5 + 0x40),param_6,DAT_091bb170);
      *piVar4 = *piVar4 + 1;
      lVar2 = UnityEngine_Component__get_transform(param_6,0);
      if (lVar2 == 0) goto LAB_041a8d84;
      UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(param_5 + 0x28),0);
      (**(code **)(*param_6 + 0x428))(param_6,0,*(undefined8 *)(*param_6 + 0x430));
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_041a8d84;
      uVar5 = UnityEngine_Transform__get_position(*(long *)(param_5 + 0x20),0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_041a8d84;
      uVar7 = param_2;
      uVar8 = param_3;
      uVar6 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x20),0);
      (**(code **)(*param_6 + 0x3c8))
                (uVar5,param_2,param_3,uVar6,uVar7,uVar8,param_4,0x3e4ccccd,param_6,
                 *(undefined8 *)(*param_6 + 0x3d0));
      uVar1 = UnityEngine_Component__get_transform(param_6,0);
      DG_Tweening_ShortcutExtensions__DOScale(0x3f400000,0x3e4ccccd,uVar1,0);
      lVar2 = *(long *)(param_5 + 0x30);
      uVar1 = System_Int32__ToString(piVar4,0);
      if (lVar2 == 0) goto LAB_041a8d84;
      UnityEngine_TextMesh__set_text(lVar2,uVar1,0);
      uVar1 = thunk_FUN_03f9944c(DAT_0918c148);
      puVar3 = &DAT_091defa0;
    }
    DG_Tweening_TweenCallback___ctor(uVar1,param_5,*puVar3,0);
    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar1,0);
    uVar1 = 1;
  }
  return uVar1;
}

