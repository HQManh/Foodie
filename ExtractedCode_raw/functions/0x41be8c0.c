// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.Skew$$OnTake
// address: 0x41be8c0
// body: available
// range: 0x41be8c0-0x41bec4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41bec48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_Level_SimpleBBQ_Skew__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,long *param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_09516981 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cad8);
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_091ac7d8);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091f00f8);
    FUN_03f5c2a4(&DAT_091948d0);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516981 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_091948d0);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
LAB_041bec48:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar3 + 0x18) = param_5;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_5);
  lVar5 = DAT_09186bf0;
  if ((*(char *)(param_5 + 0x111) == '\0') && (*(char *)(param_5 + 0x110) == '\0')) {
    if (param_6 == (long *)0x0) {
      param_6 = (long *)0x0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_09186bf0 + 0x130);
      if (*(byte *)(*param_6 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = param_6;
        if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09186bf0) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(lVar3 + 0x10) = plVar7;
      if (*(byte *)(*param_6 + 0x130) < bVar1) {
        param_6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        param_6 = (long *)0x0;
      }
    }
    plVar7 = (long *)(lVar3 + 0x10);
    thunk_FUN_03f5d7b8(plVar7,param_6);
    if ((*plVar7 != 0) && (*(int *)(param_5 + 0x100) < *(int *)(param_5 + 0xe0))) {
      if (*(long *)(param_5 + 0x108) != 0) {
        uVar4 = FUN_06f340e0(*(long *)(param_5 + 0x108),*(undefined4 *)(*plVar7 + 0x88),DAT_0919cad8
                            );
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        plVar8 = (long *)*plVar7;
        lVar5 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_5,0);
        if (lVar5 != 0) {
          uVar10 = UnityEngine_Transform__get_position(lVar5,0);
          uVar12 = param_2;
          uVar13 = param_3;
          uVar11 = FUN_041ca738(0);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x3c8))
                      (uVar10,param_2,param_3,uVar11,uVar12,uVar13,param_4,0x3e4ccccd,plVar8,
                       *(undefined8 *)(*plVar8 + 0x3d0));
            if ((*plVar7 != 0) && (*(long *)(param_5 + 0x120) != 0)) {
              FUN_039b2b84(*(long *)(param_5 + 0x120),*(undefined4 *)(*plVar7 + 0x88),DAT_091ac7d8);
              if (*plVar7 != 0) {
                uVar6 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar7,0);
                DG_Tweening_ShortcutExtensions__DOScale(0,0x3ecccccd,uVar6,0);
                if (0 < *(int *)(param_5 + 0xe4)) {
                  iVar9 = 0;
                  do {
                    lVar5 = *(long *)(param_5 + 0xe8);
                    if (lVar5 == 0) goto LAB_041bec48;
                    iVar2 = *(int *)(param_5 + 0x100) + *(int *)(param_5 + 0xe0) * iVar9;
                    if (*(int *)(lVar5 + 0x18) <= iVar2) break;
                    lVar5 = FUN_057e0998(lVar5,iVar2,DAT_091b10b0);
                    if (lVar5 == 0) goto LAB_041bec48;
                    UnityEngine_Transform__get_position(lVar5,0);
                    if ((*plVar7 == 0) || (*(long *)(param_5 + 0xe8) == 0)) goto LAB_041bec48;
                    Datpt_Cook_Order_Level_SimpleBBQ_Skew__GenerateItem
                              (param_5,*(undefined4 *)(*plVar7 + 0x88),
                               *(undefined8 *)(param_5 + 0xd0),
                               *(int *)(*(long *)(param_5 + 0xe8) + 0x18) - iVar2);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < *(int *)(param_5 + 0xe4));
                }
                MoreMountains_NiceVibrations_MMVibrationManager__Haptic(5,0);
                uVar6 = DAT_0918c148;
                *(int *)(param_5 + 0x100) = *(int *)(param_5 + 0x100) + 1;
                uVar6 = thunk_FUN_03f9944c(uVar6);
                DG_Tweening_TweenCallback___ctor(uVar6,lVar3,DAT_091f00f8,0);
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar6,0);
                return 1;
              }
            }
          }
        }
      }
      goto LAB_041bec48;
    }
  }
  return 0;
}

