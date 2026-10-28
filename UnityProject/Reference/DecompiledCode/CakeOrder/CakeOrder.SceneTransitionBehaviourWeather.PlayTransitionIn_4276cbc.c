// rea decompile_all
// name: CakeOrder.SceneTransitionBehaviourWeather$$PlayTransitionIn
// address: 0x4276cbc
// body: available
// range: 0x4276cbc-0x42772e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42772dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42772e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SceneTransitionBehaviourWeather__PlayTransitionIn
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_60;
  long *local_58;
  long *local_48;
  
  if ((DAT_09517063 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0919fba0);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091ef868);
    FUN_03f5c2a4(&DAT_09194230);
    FUN_03f5c2a4(&DAT_0918cf58);
    FUN_03f5c2a4(&DAT_09218aa8);
    FUN_03f5c2a4(&DAT_09225708);
    FUN_03f5c2a4(&DAT_09225710);
    DAT_09517063 = 1;
  }
  local_48 = (long *)0x0;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  lVar3 = thunk_FUN_03f9944c(DAT_09194230);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_3);
    lVar4 = *(long *)(param_2 + 0xd0);
    if (lVar4 != 0) {
      DG_Tweening_TweenExtensions__Kill(lVar4,0,0);
    }
    lVar4 = UnityEngine_Component__get_gameObject(param_2,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      lVar4 = *(long *)(param_2 + 0x70);
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          lVar14 = 0;
          do {
            if (uVar1 <= (uint)lVar14) goto LAB_042772e0;
            plVar5 = *(long **)(lVar4 + 0x20 + lVar14 * 8);
            if (plVar5 == (long *)0x0) goto LAB_042772dc;
            (**(code **)(*plVar5 + 0x2c8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x2d0));
            uVar1 = *(uint *)(lVar4 + 0x18);
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < (int)uVar1);
        }
        lVar4 = *(long *)(param_2 + 0x88);
        if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
          lVar14 = 0;
          do {
            if (uVar1 <= (uint)lVar14) goto LAB_042772e0;
            lVar6 = *(long *)(lVar4 + 0x20 + lVar14 * 8);
            if (lVar6 == 0) goto LAB_042772dc;
            UnityEngine_UI_Image__set_fillAmount(0,lVar6,0);
            uVar1 = *(uint *)(lVar4 + 0x18);
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < (int)uVar1);
        }
        if (*(long *)(param_2 + 0x28) == 0) {
          uVar12 = 0;
          *(undefined1 *)(param_2 + 0xe0) = 0;
          *(undefined4 *)(param_2 + 0xd8) = 0;
        }
        else {
          uVar7 = FUN_06fd9fbc(*(long *)(param_2 + 0x28),DAT_09218aa8,&local_48,DAT_0919fba0);
          if ((((uVar7 & 1) == 0) || (local_48 == (long *)0x0)) || (*local_48 != DAT_09535400)) {
            bVar11 = 0;
            bVar2 = false;
          }
          else {
            pcVar9 = (char *)thunk_FUN_03f99594();
            bVar11 = 1;
            bVar2 = *pcVar9 != '\0';
          }
          *(byte *)(param_2 + 0xe0) = bVar11 & bVar2;
          if (((*(long *)(param_2 + 0x28) == 0) ||
              (uVar7 = FUN_06fd9fbc(*(long *)(param_2 + 0x28),DAT_09225710,&local_58,DAT_0919fba0),
              (uVar7 & 1) == 0)) || ((local_58 == (long *)0x0 || (*local_58 != DAT_0918cf58)))) {
            uVar12 = 0;
          }
          else {
            puVar10 = (undefined4 *)thunk_FUN_03f99594();
            uVar12 = *puVar10;
          }
          *(undefined4 *)(param_2 + 0xd8) = uVar12;
          if (((*(long *)(param_2 + 0x28) == 0) ||
              (uVar7 = FUN_06fd9fbc(*(long *)(param_2 + 0x28),DAT_09225708,&local_60,DAT_0919fba0),
              (uVar7 & 1) == 0)) || ((local_60 == (long *)0x0 || (*local_60 != DAT_0918cf58)))) {
            uVar12 = 0;
          }
          else {
            puVar10 = (undefined4 *)thunk_FUN_03f99594();
            uVar12 = *puVar10;
          }
        }
        *(undefined4 *)(param_2 + 0xdc) = uVar12;
        lVar4 = CakeOrder_SceneTransitionBehaviourWeather__GetVisualByWeather
                          (param_2,*(undefined4 *)(param_2 + 0xd8));
        if ((lVar4 != 0) && (plVar5 = *(long **)(param_2 + 0x90), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x2a8))
                    (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                     *(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),plVar5,
                     *(undefined8 *)(*plVar5 + 0x2b0));
          if ((*(char *)(param_2 + 0xe0) == '\0') || (lVar4 = *(long *)(param_2 + 0x38), lVar4 != 0)
             ) {
            lVar14 = *(long *)(param_2 + 0x80);
            if ((lVar14 != 0) && (uVar1 = *(uint *)(lVar14 + 0x18), 0 < (int)uVar1)) {
              uVar13 = *(undefined8 *)(lVar4 + 0x10);
              lVar4 = 0;
              do {
                if (uVar1 <= (uint)lVar4) {
LAB_042772e0:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar6 = *(long *)(lVar14 + 0x20 + lVar4 * 8);
                if (lVar6 == 0) goto LAB_042772dc;
                UnityEngine_UI_Image__set_sprite(lVar6,uVar13,0);
                uVar1 = *(uint *)(lVar14 + 0x18);
                lVar4 = lVar4 + 1;
              } while ((int)lVar4 < (int)uVar1);
            }
            if (*(int *)(DAT_09183190 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar13 = DG_Tweening_DOTween__Sequence(0);
            uVar8 = DG_Tweening_DOTweenModuleUI__DOFade
                              (0x3f800000,param_1,*(undefined8 *)(param_2 + 0xa0),0);
            uVar8 = FUN_04d95e8c(uVar8,*(undefined4 *)(param_2 + 0xa8),DAT_091dbe80);
            uVar13 = DG_Tweening_TweenSettingsExtensions__Join(uVar13,uVar8,0);
            uVar8 = *(undefined8 *)(param_2 + 0x58);
            if (DAT_09515ce8 == '\0') {
              FUN_03f5c2a4(&DAT_0918cb68);
              DAT_09515ce8 = '\x01';
            }
            uVar8 = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                              (**(undefined4 **)(DAT_0918cb68 + 0xb8),
                               (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],param_1,uVar8,0,0);
            uVar8 = FUN_04d95e8c(uVar8,*(undefined4 *)(param_2 + 100),DAT_091dbe90);
            uVar13 = DG_Tweening_TweenSettingsExtensions__Join(uVar13,uVar8,0);
            *(undefined8 *)(param_2 + 0xd0) = uVar13;
            thunk_FUN_03f5d7b8((long *)(param_2 + 0xd0),uVar13);
            if (*(char *)(param_2 + 0xe0) != '\0') {
              lVar4 = *(long *)(param_2 + 0x38);
              if (lVar4 == 0) goto LAB_042772dc;
              uVar8 = *(undefined8 *)(param_2 + 0xd0);
              uVar13 = DG_Tweening_DOTweenModuleUI__DOColor
                                 (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                                  *(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                                  param_1,*(undefined8 *)(param_2 + 0x90),0);
              uVar13 = FUN_04d95e8c(uVar13,*(undefined4 *)(param_2 + 0xa8),DAT_091dbe70);
              DG_Tweening_TweenSettingsExtensions__Join(uVar8,uVar13,0);
            }
            uVar13 = FUN_04d9656c(*(undefined8 *)(param_2 + 0xd0),1,DAT_091dc030);
            uVar8 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar8,lVar3,DAT_091ef868,0);
            uVar13 = FUN_04d956bc(uVar13,uVar8,DAT_091dbd18);
            FUN_04d8dd74(uVar13,DAT_091dbcc0);
            uVar13 = *(undefined8 *)(param_2 + 0x48);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
            if ((uVar7 & 1) != 0) {
              lVar3 = *(long *)(DAT_091b48d0 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042772dc;
              CakeOrder_AudioManagerCakeOrder__PlaySfx
                        (0x3f800000,**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_2 + 0x48),3,0);
            }
            return;
          }
        }
      }
    }
  }
LAB_042772dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

