// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.CreamMachine$$OnTake
// address: 0x41c4678
// body: available
// range: 0x41c4678-0x41c4ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c4850 to 0x41a2488 Datpt.Cook_Order.ItemIdleBase$$OnTake (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c4ad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_CreamOnBeach_CreamMachine__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  byte bVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_095169c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09181f70);
    FUN_03f5c2a4(&DAT_09182918);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091e81c8);
    FUN_03f5c2a4(&DAT_091e81d0);
    FUN_03f5c2a4(&DAT_091e81d8);
    FUN_03f5c2a4(&DAT_0918f810);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169c5 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f810);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) goto LAB_041c4ad4;
  *(long *)(lVar3 + 0x10) = param_4;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_4);
  if (param_5 == (long *)0x0) {
    *(undefined8 *)(lVar3 + 0x18) = 0;
    plVar10 = (long *)0x0;
  }
  else {
    lVar6 = *param_5;
    bVar8 = *(byte *)(lVar6 + 0x130);
    if (((*(byte *)(DAT_09182918 + 0x130) <= bVar8) &&
        (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09182918 + 0x130) * 8 + -8) ==
         DAT_09182918)) && ((int)param_5[0x11] == *(int *)(param_4 + 0x30))) {
      uVar4 = Datpt_Cook_Order_CreamOnBeach_CreamMachine__get_isHaveBaseCone(param_4);
      if ((uVar4 & 1) == 0) {
        plVar10 = (long *)(param_4 + 0x48);
        *plVar10 = (long)param_5;
        thunk_FUN_03f5d7b8(plVar10,param_5);
        lVar6 = *plVar10;
        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar5,lVar3,DAT_091e81c8,0);
        if (lVar6 != 0) {
          Datpt_Cook_Order_IngredientItem__add_OnCancelInterractEvent(lVar6,uVar5,0);
          if (*(long *)(param_4 + 0x28) == 0) goto LAB_041c4ad4;
          uVar12 = UnityEngine_Transform__get_position(*(long *)(param_4 + 0x28),0);
          if (DAT_09515ed5 == '\0') {
            FUN_03f5c2a4(&DAT_091898c0);
            DAT_09515ed5 = '\x01';
          }
          puVar7 = *(undefined4 **)(DAT_091898c0 + 0xb8);
          (**(code **)(*param_5 + 0x3c8))
                    (uVar12,param_2,param_3,*puVar7,puVar7[1],puVar7[2],puVar7[3],0x3e4ccccd,param_5
                     ,*(undefined8 *)(*param_5 + 0x3d0));
          uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e81d0,0);
          if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = 0x3ecccccd;
          goto LAB_041c4988;
        }
        goto LAB_041c4ad4;
      }
      lVar6 = *param_5;
      bVar8 = *(byte *)(lVar6 + 0x130);
    }
    lVar2 = DAT_09181f70;
    bVar1 = *(byte *)(DAT_09181f70 + 0x130);
    if (bVar8 < bVar1) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = param_5;
      if (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09181f70) {
        plVar10 = (long *)0x0;
      }
    }
    *(long **)(lVar3 + 0x18) = plVar10;
    if (*(byte *)(*param_5 + 0x130) < bVar1) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = param_5;
      if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar10 = (long *)0x0;
      }
    }
  }
  plVar9 = (long *)(lVar3 + 0x18);
  thunk_FUN_03f5d7b8(plVar9,plVar10);
  plVar10 = (long *)*plVar9;
  if ((plVar10 == (long *)0x0) || (*(char *)(param_4 + 0x54) != '\0')) {
    uVar5 = Datpt_Cook_Order_ItemIdleBase__OnTake(param_4,param_5,0);
    return uVar5;
  }
  lVar6 = plVar10[0x1b];
  *(undefined1 *)(param_4 + 0x54) = 1;
  *(int *)(param_4 + 0x50) = (int)lVar6;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar11 = UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    puVar7 = *(undefined4 **)(DAT_091898c0 + 0xb8);
    uVar12 = 0x3e4ccccd;
    (**(code **)(*plVar10 + 0x3c8))
              (uVar11,param_2,param_3,*puVar7,puVar7[1],puVar7[2],puVar7[3],0x3e4ccccd,plVar10,
               *(undefined8 *)(*plVar10 + 0x3d0));
    if (*plVar9 != 0) {
      uVar5 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar9,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      puVar7 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      DG_Tweening_ShortcutExtensions__DOScale(*puVar7,puVar7[1],puVar7[2],0x3e4ccccd,uVar5,0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e81d8,0);
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
LAB_041c4988:
      Datpt_Utilities__DelayedCallScaled(uVar12,uVar5,0);
      return 1;
    }
  }
LAB_041c4ad4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

