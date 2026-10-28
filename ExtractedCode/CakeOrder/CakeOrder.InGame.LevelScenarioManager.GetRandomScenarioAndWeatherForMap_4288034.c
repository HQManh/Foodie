// rea decompile_all
// name: CakeOrder.InGame.LevelScenarioManager$$GetRandomScenarioAndWeatherForMap
// address: 0x4288034
// body: available
// range: 0x4288034-0x42888f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42888e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42888e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42888f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CakeOrder_InGame_LevelScenarioManager__GetRandomScenarioAndWeatherForMap
          (long param_1,ulong param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong extraout_x1;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar16 = param_2;
  if ((DAT_09517152 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c08e8);
    FUN_03f5c2a4(&DAT_091c0558);
    FUN_03f5c2a4(&DAT_09192400);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0400);
    FUN_03f5c2a4(&DAT_091c8fa0);
    FUN_03f5c2a4(&DAT_091c8fb0);
    FUN_03f5c2a4(&DAT_091adac0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b1d10);
    FUN_03f5c2a4(&DAT_091adab8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b1d08);
    FUN_03f5c2a4(&DAT_091b1d18);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091adac8);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091adad0);
    FUN_03f5c2a4(&DAT_091b1d20);
    FUN_03f5c2a4(&DAT_0917d0b8);
    FUN_03f5c2a4(&DAT_0917c4c8);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189a90);
    FUN_03f5c2a4(&DAT_091beeb8);
    FUN_03f5c2a4(&DAT_09205a58);
    FUN_03f5c2a4(&DAT_09205bc0);
    FUN_03f5c2a4(&DAT_09205828);
    DAT_09517152 = 1;
    uVar16 = extraout_x1;
  }
  local_80 = 0;
  local_78 = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar16;
  auVar22 = auVar9 << 0x40;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_042888e0;
  auVar22 = FUN_06fd9fbc(*(long *)(param_1 + 0x58),param_2,&local_78,DAT_091a0400);
  if ((auVar22._0_8_ & 1) == 0) {
LAB_04288210:
    lVar11 = thunk_FUN_03f9944c(DAT_09192400);
    auVar22 = System_Object___ctor(lVar11,0);
    uVar12 = DAT_0917cce8;
    if (lVar11 == 0) goto LAB_042888e0;
    *(int *)(lVar11 + 0x10) = param_4;
    *(int *)(lVar11 + 0x14) = param_5;
    uVar12 = thunk_FUN_03f9944c(uVar12);
    FUN_057e0400(uVar12,DAT_091b0558);
    *(undefined8 *)(lVar11 + 0x18) = uVar12;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x18),uVar12);
    uVar12 = thunk_FUN_03f9944c(DAT_0917d0b8);
    FUN_0579924c(uVar12,DAT_091b1d08);
    *(undefined8 *)(lVar11 + 0x20) = uVar12;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x20),uVar12);
    uVar12 = thunk_FUN_03f9944c(DAT_0917c4c8);
    FUN_0579924c(uVar12,DAT_091adab8);
    *(undefined8 *)(lVar11 + 0x28) = uVar12;
    auVar22 = thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x28),uVar12);
    local_78 = lVar11;
    if (param_3 == 0) goto LAB_042888e0;
    uVar1 = *(uint *)(param_3 + 0x18);
    if (0 < (int)uVar1) {
      uVar21 = 0;
      do {
        if (uVar1 <= uVar21) goto LAB_042888e4;
        lVar11 = *(long *)(param_3 + (long)(int)uVar21 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_042888e0;
        if ((*(int *)(lVar11 + 0x10) <= param_4) ||
           ((0 < *(int *)(lVar11 + 0x14) && (*(int *)(lVar11 + 0x14) <= param_5)))) {
          iVar20 = *(int *)(lVar11 + 0x18);
          if (iVar20 == 2) {
            uVar12 = *(undefined8 *)(lVar11 + 0x20);
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar22 = FUN_04aaf4a8(uVar12,&local_80,DAT_091c8fa0);
            if ((auVar22._0_8_ & 1) == 0) {
              auVar22 = FUN_03f5c394(DAT_09180318,2);
              plVar15 = auVar22._0_8_;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = auVar22._8_8_;
              auVar22 = auVar4 << 0x40;
              if (plVar15 != (long *)0x0) {
                lVar11 = *(long *)(lVar11 + 0x20);
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) {
LAB_042888e8:
                  uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar12,0);
                }
                if ((int)plVar15[3] != 0) {
                  plVar15[4] = lVar11;
                  thunk_FUN_03f5d7b8(plVar15 + 4,lVar11);
                  if ((param_2 != 0) &&
                     (lVar11 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar11 == 0)) goto LAB_042888e8;
                  if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                    plVar15[5] = param_2;
                    thunk_FUN_03f5d7b8(plVar15 + 5,param_2);
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar19 = &DAT_09205828;
                    goto LAB_04288680;
                  }
                }
                goto LAB_042888e4;
              }
              goto LAB_042888e0;
            }
            if (local_78 == 0) goto LAB_042888e0;
            lVar11 = *(long *)(local_78 + 0x28);
            auVar22._8_8_ = auVar22._8_8_;
            auVar22._0_8_ = lVar11;
            if (lVar11 == 0) goto LAB_042888e0;
            iVar20 = *(int *)(lVar11 + 0x1c);
            lVar14 = *(long *)(lVar11 + 0x10);
            plVar15 = &DAT_091adac0;
            uVar10 = (undefined4)local_80;
LAB_04288474:
            auVar22._8_4_ = uVar10;
            auVar22._0_8_ = lVar11;
            auVar22._12_4_ = 0;
            lVar13 = *plVar15;
            *(int *)(lVar11 + 0x1c) = iVar20 + 1;
            if (lVar14 == 0) goto LAB_042888e0;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar10;
            }
            else {
              auVar22 = FUN_05799adc(lVar11,uVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          else if (iVar20 == 1) {
            uVar12 = *(undefined8 *)(lVar11 + 0x20);
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar22 = FUN_04aaf4a8(uVar12,(long)&local_80 + 4,DAT_091c8fb0);
            if ((auVar22._0_8_ & 1) != 0) {
              if (local_78 != 0) {
                lVar11 = *(long *)(local_78 + 0x20);
                auVar22._8_8_ = auVar22._8_8_;
                auVar22._0_8_ = lVar11;
                if (lVar11 != 0) {
                  iVar20 = *(int *)(lVar11 + 0x1c);
                  lVar14 = *(long *)(lVar11 + 0x10);
                  plVar15 = &DAT_091b1d10;
                  uVar10 = local_80._4_4_;
                  goto LAB_04288474;
                }
              }
              goto LAB_042888e0;
            }
            auVar22 = FUN_03f5c394(DAT_09180318,2);
            plVar15 = auVar22._0_8_;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = auVar22._8_8_;
            auVar22 = auVar3 << 0x40;
            if (plVar15 == (long *)0x0) goto LAB_042888e0;
            lVar11 = *(long *)(lVar11 + 0x20);
            if ((lVar11 != 0) &&
               (lVar14 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0))
            goto LAB_042888e8;
            if ((int)plVar15[3] == 0) goto LAB_042888e4;
            plVar15[4] = lVar11;
            thunk_FUN_03f5d7b8(plVar15 + 4,lVar11);
            if ((param_2 != 0) &&
               (lVar11 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0))
            goto LAB_042888e8;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_042888e4;
            plVar15[5] = param_2;
            thunk_FUN_03f5d7b8(plVar15 + 5,param_2);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar19 = &DAT_09205bc0;
LAB_04288680:
            auVar22 = UnityEngine_Debug__LogWarningFormat(*puVar19,plVar15,0);
          }
          else if (iVar20 == 0) {
            auVar22 = FUN_04ee582c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar11 + 0x20),
                                   DAT_091c0558);
            lVar14 = DAT_091b0570;
            if (auVar22._0_4_ < 0) {
              auVar22 = FUN_03f5c394(DAT_09180318,2);
              plVar15 = auVar22._0_8_;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = auVar22._8_8_;
              auVar22 = auVar5 << 0x40;
              if (plVar15 != (long *)0x0) {
                lVar11 = *(long *)(lVar11 + 0x20);
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_042888e8;
                if ((int)plVar15[3] != 0) {
                  plVar15[4] = lVar11;
                  thunk_FUN_03f5d7b8(plVar15 + 4,lVar11);
                  if ((param_2 != 0) &&
                     (lVar11 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar11 == 0)) goto LAB_042888e8;
                  if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                    plVar15[5] = param_2;
                    thunk_FUN_03f5d7b8(plVar15 + 5,param_2);
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar19 = &DAT_09205a58;
                    goto LAB_04288680;
                  }
                }
                goto LAB_042888e4;
              }
              goto LAB_042888e0;
            }
            if (local_78 == 0) goto LAB_042888e0;
            lVar13 = *(long *)(local_78 + 0x18);
            auVar22._8_8_ = auVar22._8_8_;
            auVar22._0_8_ = lVar13;
            if (lVar13 == 0) goto LAB_042888e0;
            lVar18 = *(long *)(lVar13 + 0x10);
            uVar12 = *(undefined8 *)(lVar11 + 0x20);
            auVar22._8_8_ = uVar12;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_042888e0;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              puVar19 = (undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
              *puVar19 = uVar12;
              auVar22 = thunk_FUN_03f5d7b8(puVar19);
            }
            else {
              auVar22 = FUN_057e0c68(lVar13,uVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar1 = *(uint *)(param_3 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar1);
    }
    auVar22 = FUN_04978a14(*(undefined8 *)(param_1 + 0x58),param_2,local_78,DAT_091c08e8);
    if (local_78 == 0) goto LAB_042888e0;
  }
  else {
    if (local_78 == 0) goto LAB_042888e0;
    if ((*(int *)(local_78 + 0x10) != param_4) || (*(int *)(local_78 + 0x14) != param_5))
    goto LAB_04288210;
  }
  if (*(long *)(local_78 + 0x18) == 0) goto LAB_042888e0;
  if (*(int *)(*(long *)(local_78 + 0x18) + 0x18) < 1) {
    lVar11 = *(long *)(param_1 + 0x38);
    if (lVar11 == 0) goto LAB_042888e0;
    if (*(int *)(lVar11 + 0x18) == 0) {
LAB_042888e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar12 = *(undefined8 *)(lVar11 + 0x20);
  }
  else {
    plVar15 = (long *)thunk_FUN_03f9944c(DAT_09189a90);
    auVar22 = System_Random___ctor(plVar15,param_5,0);
    if (((local_78 == 0) || (*(long *)(local_78 + 0x18) == 0)) || (plVar15 == (long *)0x0))
    goto LAB_042888e0;
    auVar22 = (**(code **)(*plVar15 + 0x198))
                        (plVar15,0,*(undefined4 *)(*(long *)(local_78 + 0x18) + 0x18),
                         *(undefined8 *)(*plVar15 + 0x1a0));
    if (local_78 == 0) goto LAB_042888e0;
    uVar16 = auVar22._0_8_ & 0xffffffff;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    auVar22 = auVar6 << 0x40;
    if (*(long *)(local_78 + 0x18) == 0) goto LAB_042888e0;
    auVar22 = FUN_057e0998(*(long *)(local_78 + 0x18),uVar16,DAT_091b0610);
    uVar12 = auVar22._0_8_;
    if (local_78 == 0) goto LAB_042888e0;
  }
  if (*(long *)(local_78 + 0x20) == 0) goto LAB_042888e0;
  if (*(int *)(*(long *)(local_78 + 0x20) + 0x18) < 1) {
    uVar16 = 0;
  }
  else {
    plVar15 = (long *)thunk_FUN_03f9944c(DAT_09189a90);
    auVar22 = System_Random___ctor(plVar15,param_5,0);
    if (((local_78 == 0) || (*(long *)(local_78 + 0x20) == 0)) || (plVar15 == (long *)0x0))
    goto LAB_042888e0;
    auVar22 = (**(code **)(*plVar15 + 0x198))
                        (plVar15,0,*(undefined4 *)(*(long *)(local_78 + 0x20) + 0x18),
                         *(undefined8 *)(*plVar15 + 0x1a0));
    if (local_78 == 0) goto LAB_042888e0;
    uVar16 = auVar22._0_8_ & 0xffffffff;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    auVar22 = auVar7 << 0x40;
    if (*(long *)(local_78 + 0x20) == 0) goto LAB_042888e0;
    auVar22 = FUN_057997e4(*(long *)(local_78 + 0x20),uVar16,DAT_091b1d20);
    if (local_78 == 0) goto LAB_042888e0;
    uVar16 = auVar22._0_8_ & 0xffffffff;
  }
  if (*(long *)(local_78 + 0x28) != 0) {
    if (*(int *)(*(long *)(local_78 + 0x28) + 0x18) < 1) {
      uVar10 = 0;
LAB_0428889c:
      local_70 = 0;
      uStack_68 = 0;
      FUN_066ed420(&local_70,uVar12,uVar16,uVar10,DAT_091beeb8);
      auVar2._8_8_ = uStack_68;
      auVar2._0_8_ = local_70;
      return auVar2;
    }
    plVar15 = (long *)thunk_FUN_03f9944c(DAT_09189a90);
    auVar22 = System_Random___ctor(plVar15,param_5,0);
    if (((local_78 != 0) && (*(long *)(local_78 + 0x28) != 0)) && (plVar15 != (long *)0x0)) {
      auVar22 = (**(code **)(*plVar15 + 0x198))
                          (plVar15,0,*(undefined4 *)(*(long *)(local_78 + 0x28) + 0x18),
                           *(undefined8 *)(*plVar15 + 0x1a0));
      if (local_78 != 0) {
        uVar17 = auVar22._0_8_ & 0xffffffff;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        auVar22 = auVar8 << 0x40;
        if (*(long *)(local_78 + 0x28) != 0) {
          uVar10 = FUN_057997e4(*(long *)(local_78 + 0x28),uVar17,DAT_091adad0);
          goto LAB_0428889c;
        }
      }
    }
  }
LAB_042888e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar22._0_8_,auVar22._8_8_);
}

