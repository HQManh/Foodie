// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.CreamOnBeachOrder$$OnTake
// address: 0x41c59d4
// body: available
// range: 0x41c59d4-0x41c616f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c6004 to 0x41a2488 Datpt.Cook_Order.ItemIdleBase$$OnTake (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c6168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c616c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_CreamOnBeach_CreamOnBeachOrder__OnTake
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  if ((DAT_095169d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182918);
    FUN_03f5c2a4(&DAT_091cb170);
    FUN_03f5c2a4(&DAT_091a2af8);
    FUN_03f5c2a4(&DAT_091a2b00);
    FUN_03f5c2a4(&DAT_091a2b08);
    FUN_03f5c2a4(&DAT_091a80c0);
    FUN_03f5c2a4(&DAT_091a80d0);
    FUN_03f5c2a4(&DAT_09186a48);
    FUN_03f5c2a4(&DAT_091ac7d8);
    FUN_03f5c2a4(&DAT_091ac7d0);
    FUN_03f5c2a4(&DAT_0917c0d8);
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091e81e0);
    FUN_03f5c2a4(&DAT_091e81e8);
    FUN_03f5c2a4(&DAT_091e81f0);
    FUN_03f5c2a4(&DAT_091e81f8);
    FUN_03f5c2a4(&DAT_0918f818);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169d0 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f818);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_4);
    lVar4 = DAT_09182918;
    if (param_5 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      plVar11 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(DAT_09182918 + 0x130);
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09182918) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(lVar3 + 0x10) = plVar11;
      if (*(byte *)(*param_5 + 0x130) < bVar1) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = param_5;
        if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
          plVar11 = (long *)0x0;
        }
      }
    }
    plVar12 = (long *)(lVar3 + 0x10);
    thunk_FUN_03f5d7b8(plVar12,plVar11);
    lVar4 = DAT_09186a48;
    if (*plVar12 == 0) {
      if (param_5 == (long *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = 0;
        plVar11 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(DAT_09186a48 + 0x130);
        if (*(byte *)(*param_5 + 0x130) < bVar1) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = param_5;
          if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09186a48) {
            plVar11 = (long *)0x0;
          }
        }
        *(long **)(lVar3 + 0x20) = plVar11;
        if (*(byte *)(*param_5 + 0x130) < bVar1) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = param_5;
          if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
            plVar11 = (long *)0x0;
          }
        }
      }
      plVar12 = (long *)(lVar3 + 0x20);
      thunk_FUN_03f5d7b8(plVar12,plVar11);
      if (*plVar12 == 0) {
        uVar5 = Datpt_Cook_Order_ItemIdleBase__OnTake(param_4,param_5,0);
        return uVar5;
      }
      lVar4 = Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
      if (lVar4 != 0) {
        Datpt_Cook_Order_LevelControlCookOrder__DespawnHighlight(lVar4,0);
        plVar11 = (long *)*plVar12;
        lVar4 = Datpt_Cook_Order_ItemIdleBase__get_TF(param_4,0);
        if (lVar4 != 0) {
          uVar13 = UnityEngine_Transform__get_position(lVar4,0);
          if (DAT_09515ed5 == '\0') {
            FUN_03f5c2a4(&DAT_091898c0);
            DAT_09515ed5 = '\x01';
          }
          if (plVar11 != (long *)0x0) {
            puVar8 = *(undefined4 **)(DAT_091898c0 + 0xb8);
            (**(code **)(*plVar11 + 0x3c8))
                      (uVar13,param_2,param_3,*puVar8,puVar8[1],puVar8[2],puVar8[3],0x3e4ccccd,
                       plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
            if (*plVar12 != 0) {
              uVar5 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar12,0);
              DG_Tweening_ShortcutExtensions__DOScale(0x3f000000,0x3ecccccd,uVar5,0);
              lVar4 = Datpt_Cook_Order_SoundControl__get_Ins();
              if (lVar4 != 0) {
                FUN_04d59cfc(lVar4,5,0,DAT_091d96f0);
                uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e81f0,0);
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                Datpt_Utilities__DelayedCallScaled(0x3ecccccd,uVar5,0);
                if (*plVar12 != 0) {
                  uVar6 = Datpt_Cook_Order_CreamOnBeach_CreamOnBeachOrder__CheckOrder
                                    (param_4,*(undefined8 *)(*plVar12 + 0xf8));
                  if ((uVar6 & 1) != 0) {
                    MoreMountains_NiceVibrations_MMVibrationManager__Haptic(5,0);
                    uVar5 = DAT_0918c148;
                    *(undefined1 *)(param_4 + 0x50) = 1;
                    uVar5 = thunk_FUN_03f9944c(uVar5);
                    puVar10 = &DAT_091e81f8;
LAB_041c610c:
                    DG_Tweening_TweenCallback___ctor(uVar5,lVar3,*puVar10,0);
                    if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    Datpt_Utilities__DelayedCallScaled(0x3ecccccd,uVar5,0);
                    return 1;
                  }
                  lVar3 = *(long *)(param_4 + 0x48);
                  if (lVar3 != 0) {
                    (**(code **)(lVar3 + 0x18))
                              (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                  }
                  MoreMountains_NiceVibrations_MMVibrationManager__Haptic(3,0);
                  plVar11 = (long *)Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
                  if ((*plVar12 != 0) &&
                     (uVar5 = FUN_04b087f8(*(undefined8 *)(*plVar12 + 0xf8),DAT_091cb170),
                     plVar11 != (long *)0x0)) {
                    (**(code **)(*plVar11 + 0x378))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x380))
                    ;
                    if ((*plVar12 != 0) && (lVar3 = *(long *)(*plVar12 + 0xf8), lVar3 != 0)) {
                      FUN_053dcb58(&local_78,lVar3,DAT_091a80c0);
                      while( true ) {
                        uVar7 = FUN_071aecdc(&local_78,DAT_091a2b00);
                        uVar6 = local_68;
                        if ((uVar7 & 1) == 0) {
                          FUN_071aecd8(&local_78,DAT_091a2af8);
                          return 1;
                        }
                        lVar3 = Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
                        if (lVar3 == 0) break;
                        Datpt_Cook_Order_LevelControlCookOrder__ReturnIngreToDic
                                  (0x3f000000,lVar3,uVar6 & 0xffffffff,0);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar4 = Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
      if (lVar4 != 0) {
        Datpt_Cook_Order_LevelControlCookOrder__DespawnHighlight(lVar4,0);
        plVar11 = (long *)*plVar12;
        lVar4 = Datpt_Cook_Order_ItemIdleBase__get_TF(param_4,0);
        if (lVar4 != 0) {
          uVar13 = UnityEngine_Transform__get_position(lVar4,0);
          if (DAT_09515ed5 == '\0') {
            FUN_03f5c2a4(&DAT_091898c0);
            DAT_09515ed5 = '\x01';
          }
          if (plVar11 != (long *)0x0) {
            puVar8 = *(undefined4 **)(DAT_091898c0 + 0xb8);
            (**(code **)(*plVar11 + 0x3c8))
                      (uVar13,param_2,param_3,*puVar8,puVar8[1],puVar8[2],puVar8[3],0x3e4ccccd,
                       plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
            if (*plVar12 != 0) {
              uVar5 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar12,0);
              DG_Tweening_ShortcutExtensions__DOScale(0x3f000000,0x3ecccccd,uVar5,0);
              lVar4 = Datpt_Cook_Order_SoundControl__get_Ins();
              if (lVar4 != 0) {
                FUN_04d59cfc(lVar4,5,0,DAT_091d96f0);
                uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e81e0,0);
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                Datpt_Utilities__DelayedCallScaled(0x3ecccccd,uVar5,0);
                if (*(int *)(param_4 + 0x80) == 0) {
                  if (*(long *)(param_4 + 0x78) == 0) goto LAB_041c6168;
                  if (*(int *)(*(long *)(param_4 + 0x78) + 0x20) == 0) {
                    MoreMountains_NiceVibrations_MMVibrationManager__Haptic(5,0);
                    uVar5 = DAT_0918c148;
                    *(undefined1 *)(param_4 + 0x50) = 1;
                    uVar5 = thunk_FUN_03f9944c(uVar5);
                    puVar10 = &DAT_091e81e8;
                    goto LAB_041c610c;
                  }
                }
                lVar3 = *(long *)(param_4 + 0x48);
                if (lVar3 != 0) {
                  (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                }
                MoreMountains_NiceVibrations_MMVibrationManager__Haptic(3,0);
                plVar11 = (long *)Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
                lVar4 = thunk_FUN_03f9944c(DAT_0917c0d8);
                FUN_0579924c(lVar4,DAT_091ac7d0);
                lVar3 = DAT_091ac7d8;
                if (lVar4 != 0) {
                  lVar9 = *(long *)(lVar4 + 0x10);
                  uVar13 = *(undefined4 *)(param_4 + 0x70);
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (lVar9 != 0) {
                    uVar2 = *(uint *)(lVar4 + 0x18);
                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar13;
                    }
                    else {
                      FUN_05799adc(lVar4,uVar13,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    if (plVar11 != (long *)0x0) {
                      (**(code **)(*plVar11 + 0x378))
                                (plVar11,lVar4,*(undefined8 *)(*plVar11 + 0x380));
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
LAB_041c6168:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

