// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.IceCream$$OnTake
// address: 0x41c6740
// body: available
// range: 0x41c6740-0x41c6b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c6b5c to 0x41aebd8 Datpt.Cook_Order.ItemMovingBase$$OnTake (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c6b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_CreamOnBeach_IceCream__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x1;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((DAT_095169da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a80a8);
    FUN_03f5c2a4(&DAT_091a80b8);
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_091ac178);
    FUN_03f5c2a4(&DAT_091ac180);
    FUN_03f5c2a4(&DAT_0917df90);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091eb420);
    FUN_03f5c2a4(&DAT_091eb428);
    FUN_03f5c2a4(&DAT_09191580);
    FUN_03f5c2a4(&DAT_091eb438);
    FUN_03f5c2a4(&DAT_09191588);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169da = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191580);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_4);
    lVar5 = DAT_09186bf0;
    if (param_5 == (long *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      plVar8 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(DAT_09186bf0 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09186bf0) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(lVar2 + 0x10) = plVar8;
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
          plVar8 = (long *)0x0;
        }
      }
    }
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),plVar8);
    lVar5 = *(long *)(lVar2 + 0x10);
    if (lVar5 == 0) {
LAB_041c6b38:
      uVar4 = Datpt_Cook_Order_ItemMovingBase__OnTake(param_4,param_5,0);
      return uVar4;
    }
    if (*(long *)(param_4 + 0xf8) != 0) {
      uVar3 = FUN_053dc698(*(long *)(param_4 + 0xf8),*(undefined4 *)(lVar5 + 0x88),DAT_091a80b8);
      if ((uVar3 & 1) != 0) goto LAB_041c6b38;
      lVar5 = *(long *)(param_4 + 0xd8);
      uVar4 = thunk_FUN_03f9944c(DAT_0917df90);
      FUN_05d75f50(uVar4,lVar2,DAT_091eb420,0);
      if (lVar5 != 0) {
        uVar3 = FUN_0574b624(lVar5,uVar4,DAT_091ac178);
        if ((uVar3 & 1) == 0) goto LAB_041c6b38;
        lVar5 = thunk_FUN_03f9944c(DAT_09191588);
        System_Object___ctor(lVar5,0);
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 0x18);
          *plVar8 = lVar2;
          thunk_FUN_03f5d7b8(plVar8,lVar2);
          if (((*plVar8 != 0) && (lVar2 = *(long *)(*plVar8 + 0x10), lVar2 != 0)) &&
             (*(long *)(param_4 + 0xf8) != 0)) {
            FUN_053dd1d4(*(long *)(param_4 + 0xf8),*(undefined4 *)(lVar2 + 0x88),DAT_091a80a8);
            lVar2 = *(long *)(param_4 + 0xd8);
            lVar9 = *plVar8;
            uVar4 = thunk_FUN_03f9944c(DAT_0917df90);
            FUN_05d75f50(uVar4,lVar9,DAT_091eb428,0);
            if (lVar2 != 0) {
              FUN_0574b648(lVar2,uVar4,DAT_091ac180);
              plVar7 = (long *)(lVar5 + 0x10);
              *plVar7 = extraout_x1;
              thunk_FUN_03f5d7b8(plVar7);
              if (*plVar7 != 0) {
                lVar2 = UnityEngine_GameObject__get_transform(*plVar7,0);
                if ((*plVar8 != 0) && (lVar2 != 0)) {
                  plVar7 = *(long **)(*plVar8 + 0x10);
                  uVar10 = UnityEngine_Transform__get_position(lVar2,0);
                  if (DAT_09515ed5 == '\0') {
                    FUN_03f5c2a4(&DAT_091898c0);
                    DAT_09515ed5 = '\x01';
                  }
                  if (plVar7 != (long *)0x0) {
                    puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
                    (**(code **)(*plVar7 + 0x3c8))
                              (uVar10,param_2,param_3,*puVar6,puVar6[1],puVar6[2],puVar6[3],
                               0x3e4ccccd,plVar7,*(undefined8 *)(*plVar7 + 0x3d0));
                    if ((*plVar8 != 0) && (lVar2 = *(long *)(*plVar8 + 0x10), lVar2 != 0)) {
                      uVar4 = Datpt_Cook_Order_ItemMovingBase__get_TF(lVar2,0);
                      DG_Tweening_ShortcutExtensions__DOScale(0x3f000000,0x3ecccccd,uVar4,0);
                      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                      DG_Tweening_TweenCallback___ctor(uVar4,lVar5,DAT_091eb438,0);
                      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      Datpt_Utilities__DelayedCallScaled(0x3ecccccd,uVar4,0);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

