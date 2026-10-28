// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SimpleBBQOrder$$OnTake
// address: 0x41bbeb8
// body: available
// range: 0x41bbeb8-0x41bc337 inclusive
// range: 0x41bc378-0x41bc47f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41bc334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc45c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc464 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc46c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bc47c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041bc32c) */
/* WARNING: Removing unreachable block (ram,0x041bc330) */
/* WARNING: Removing unreachable block (ram,0x041bc460) */
/* WARNING: Removing unreachable block (ram,0x041bc3a0) */
/* WARNING: Removing unreachable block (ram,0x041bc478) */

undefined4 Datpt_Cook_Order_Level_SimpleBBQ_SimpleBBQOrder__OnTake(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  
  if ((DAT_09516972 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a4370);
    FUN_03f5c2a4(&DAT_091a4378);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a4380);
    FUN_03f5c2a4(&DAT_091b0178);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_091891a0);
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbec0);
    FUN_03f5c2a4(&DAT_091f0038);
    FUN_03f5c2a4(&DAT_091f0040);
    FUN_03f5c2a4(&DAT_091947d0);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516972 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091947d0);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) {
LAB_041bc45c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar2 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_1);
  lVar3 = DAT_091891a0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (param_2 == (long *)0x0) {
      param_2 = (long *)0x0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_091891a0 + 0x130);
      if (*(byte *)(*param_2 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = param_2;
        if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091891a0) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(lVar2 + 0x10) = plVar8;
      if (*(byte *)(*param_2 + 0x130) < bVar1) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        param_2 = (long *)0x0;
      }
    }
    plVar8 = (long *)(lVar2 + 0x10);
    thunk_FUN_03f5d7b8(plVar8,param_2);
    if (*plVar8 != 0) {
      lVar3 = Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns();
      if (lVar3 != 0) {
        Datpt_Cook_Order_LevelControlCookOrder__DespawnHighlight(lVar3,0);
        if (*plVar8 != 0) {
          uVar4 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar8,0);
          lVar3 = Datpt_Cook_Order_ItemIdleBase__get_TF(param_1,0);
          if (lVar3 != 0) {
            UnityEngine_Transform__get_position(lVar3,0);
            uVar4 = DG_Tweening_ShortcutExtensions__DOJump(uVar4,1,0,0);
            FUN_04d95e8c(uVar4,6,DAT_091dbec0);
            if (*plVar8 != 0) {
              uVar4 = Datpt_Cook_Order_ItemMovingBase__get_TF(*plVar8,0);
              DG_Tweening_ShortcutExtensions__DOScale(0,0x3e800000,uVar4,0);
              lVar3 = Datpt_Cook_Order_SoundControl__get_Ins();
              if (lVar3 != 0) {
                FUN_04d59cfc(lVar3,5,0,DAT_091d96f0);
                uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091f0038,0);
                if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                Datpt_Utilities__DelayedCallScaled(0x3e800000,uVar4,0);
                uVar5 = Datpt_Cook_Order_Level_SimpleBBQ_SimpleBBQOrder__CheckOrder(param_1,*plVar8)
                ;
                if ((uVar5 & 1) != 0) {
                  MoreMountains_NiceVibrations_MMVibrationManager__Haptic(5,0);
                  uVar4 = DAT_0918c148;
                  *(undefined1 *)(param_1 + 0x50) = 1;
                  uVar4 = thunk_FUN_03f9944c(uVar4);
                  DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091f0040,0);
                  if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  Datpt_Utilities__DelayedCallScaled(0x3e800000,uVar4,0);
                  return 1;
                }
                lVar2 = *(long *)(param_1 + 0x48);
                if (lVar2 != 0) {
                  (**(code **)(lVar2 + 0x18))
                            (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
                }
                MoreMountains_NiceVibrations_MMVibrationManager__Haptic(3,0);
                if ((*plVar8 != 0) && (lVar2 = *(long *)(*plVar8 + 0xf8), lVar2 != 0)) {
                  FUN_057e185c(&local_a8,lVar2,DAT_091b0178);
                  puStack_68 = puStack_a0;
                  local_70 = local_a8;
                  local_60 = local_98;
                  while (uVar6 = FUN_071bd28c(&local_70,DAT_091a4378), uVar5 = local_60,
                        (uVar6 & 1) != 0) {
                    plVar7 = (long *)Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns
                                               ();
                    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    (**(code **)(*plVar7 + 0x378))
                              (plVar7,*(undefined8 *)(uVar5 + 0x120),
                               *(undefined8 *)(*plVar7 + 0x380));
                    if (*(long *)(uVar5 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_0579a6a8(&local_a8,*(long *)(uVar5 + 0x120),DAT_091ac7f8);
                    local_90 = local_a8;
                    local_a8 = 0;
                    puStack_88 = puStack_a0;
                    local_80 = local_98;
                    puStack_a0 = &local_90;
                    while (uVar6 = FUN_071aef5c(&local_90,DAT_091a2b18), uVar5 = local_80,
                          (uVar6 & 1) != 0) {
                      lVar2 = Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns
                                        ();
                      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      Datpt_Cook_Order_LevelControlCookOrder__ReturnIngreToDic
                                (0x3f000000,lVar2,uVar5 & 0xffffffff,0);
                    }
                    FUN_071aef58(&local_90,DAT_091a2b10);
                  }
                  FUN_071bd288(&local_70,DAT_091a4370);
                  plVar7 = (long *)Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns
                                             ();
                  if ((*plVar8 != 0) && (plVar7 != (long *)0x0)) {
                    (**(code **)(*plVar7 + 0x378))
                              (plVar7,*(undefined8 *)(*plVar8 + 0xf0),
                               *(undefined8 *)(*plVar7 + 0x380));
                    if ((*plVar8 != 0) && (lVar2 = *(long *)(*plVar8 + 0xf0), lVar2 != 0)) {
                      FUN_0579a6a8(&local_a8,lVar2,DAT_091ac7f8);
                      local_80 = local_98;
                      puStack_88 = puStack_a0;
                      local_90 = local_a8;
                      local_a8 = 0;
                      puStack_a0 = &local_90;
                      while( true ) {
                        uVar6 = FUN_071aef5c(&local_90,DAT_091a2b18);
                        uVar5 = local_80;
                        if ((uVar6 & 1) == 0) {
                          FUN_071aef58(&local_90,DAT_091a2b10);
                          return 1;
                        }
                        lVar2 = Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns
                                          ();
                        if (lVar2 == 0) break;
                        Datpt_Cook_Order_LevelControlCookOrder__ReturnIngreToDic
                                  (0x3f800000,lVar2,uVar5 & 0xffffffff,0);
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
      goto LAB_041bc45c;
    }
  }
  return 0;
}

