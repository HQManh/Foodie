// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$OnTake
// address: 0x41c0634
// body: available
// range: 0x41c0634-0x41c0a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c0a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  undefined4 uVar15;
  
  if ((DAT_09516996 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cad8);
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_091ac7d8);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091f0130);
    FUN_03f5c2a4(&DAT_091948f8);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516996 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_091948f8);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_4);
    lVar6 = DAT_09186bf0;
    if (param_5 == (long *)0x0) {
      param_5 = (long *)0x0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_09186bf0 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09186bf0) {
          plVar12 = (long *)0x0;
        }
      }
      *(long **)(lVar4 + 0x10) = plVar12;
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        param_5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
        param_5 = (long *)0x0;
      }
    }
    plVar12 = (long *)(lVar4 + 0x10);
    thunk_FUN_03f5d7b8(plVar12,param_5);
    if ((*plVar12 == 0) || (*(int *)(param_4 + 0xe0) <= *(int *)(param_4 + 0x100))) {
      return 0;
    }
    if (*(long *)(param_4 + 0x108) != 0) {
      uVar5 = FUN_06f340e0(*(long *)(param_4 + 0x108),*(undefined4 *)(*plVar12 + 0x88),DAT_0919cad8)
      ;
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      plVar13 = (long *)*plVar12;
      lVar6 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
      if (lVar6 != 0) {
        uVar15 = UnityEngine_Transform__get_position(lVar6,0);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        if (plVar13 != (long *)0x0) {
          puVar9 = *(undefined4 **)(DAT_091898c0 + 0xb8);
          (**(code **)(*plVar13 + 0x3c8))
                    (uVar15,param_2,param_3,*puVar9,puVar9[1],puVar9[2],puVar9[3],0x3e4ccccd,plVar13
                     ,*(undefined8 *)(*plVar13 + 0x3d0));
          lVar6 = DAT_091ac7d8;
          lVar7 = *plVar12;
          if ((lVar7 != 0) && (lVar10 = *(long *)(param_4 + 0x120), lVar10 != 0)) {
            lVar11 = *(long *)(lVar10 + 0x10);
            uVar15 = *(undefined4 *)(lVar7 + 0x88);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar15;
              }
              else {
                FUN_05799adc(lVar10,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar7 = *plVar12;
                if (lVar7 == 0) goto LAB_041c0a04;
              }
              uVar8 = Datpt_Cook_Order_ItemMovingBase__get_TF(lVar7,0);
              DG_Tweening_ShortcutExtensions__DOScale(0,0x3ecccccd,uVar8,0);
              if (0 < *(int *)(param_4 + 0xe4)) {
                iVar14 = 0;
                do {
                  lVar6 = *(long *)(param_4 + 0xe8);
                  if (lVar6 == 0) goto LAB_041c0a04;
                  iVar3 = *(int *)(param_4 + 0x100) + *(int *)(param_4 + 0xe0) * iVar14;
                  if (*(int *)(lVar6 + 0x18) <= iVar3) break;
                  lVar6 = FUN_057e0998(lVar6,iVar3,DAT_091b10b0);
                  if (lVar6 == 0) goto LAB_041c0a04;
                  UnityEngine_Transform__get_position(lVar6,0);
                  if ((*plVar12 == 0) || (*(long *)(param_4 + 0xe8) == 0)) goto LAB_041c0a04;
                  Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__GenerateItem
                            (param_4,*(undefined4 *)(*plVar12 + 0x88),
                             *(undefined8 *)(param_4 + 0xd0),
                             *(int *)(*(long *)(param_4 + 0xe8) + 0x18) - iVar3);
                  iVar14 = iVar14 + 1;
                } while (iVar14 < *(int *)(param_4 + 0xe4));
              }
              MoreMountains_NiceVibrations_MMVibrationManager__Haptic(5,0);
              uVar8 = DAT_0918c148;
              *(int *)(param_4 + 0x100) = *(int *)(param_4 + 0x100) + 1;
              uVar8 = thunk_FUN_03f9944c(uVar8);
              DG_Tweening_TweenCallback___ctor(uVar8,lVar4,DAT_091f0130,0);
              if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar8,0);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_041c0a04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

