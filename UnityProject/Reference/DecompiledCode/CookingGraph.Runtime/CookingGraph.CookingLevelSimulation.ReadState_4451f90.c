// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReadState
// address: 0x4451f90
// body: available
// range: 0x4451f90-0x4454013 inclusive
// range: 0x4454018-0x44540a7 inclusive
// range: 0x44540e8-0x4454903 inclusive
// range: 0x4454b7c-0x4454d53 inclusive
// range: 0x4454db4-0x4454dc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4453028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4453850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4453d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4454010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44540a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44547f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04453de4) */
/* WARNING: Removing unreachable block (ram,0x04453434) */
/* WARNING: Removing unreachable block (ram,0x04454090) */
/* WARNING: Removing unreachable block (ram,0x044548b8) */
/* WARNING: Removing unreachable block (ram,0x044536d0) */
/* WARNING: Removing unreachable block (ram,0x044538d4) */
/* WARNING: Removing unreachable block (ram,0x044548ec) */

long CookingGraph_CookingLevelSimulation__ReadState(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  char cVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  undefined8 uVar28;
  long *local_1c0;
  long **pplStack_1b8;
  long local_1b0;
  long *local_1a0;
  long **pplStack_198;
  long local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  long **pplStack_158;
  undefined8 local_150;
  undefined8 local_148;
  long **pplStack_140;
  undefined8 local_138;
  long *local_130;
  long **pplStack_128;
  long local_120;
  long *local_110;
  long **pplStack_108;
  long local_100;
  long *local_f8;
  long **pplStack_f0;
  long local_e8;
  long *local_e0;
  long **pplStack_d8;
  long local_d0;
  long *local_c0;
  long **pplStack_b8;
  long local_b0;
  int local_a4;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long **pplStack_78;
  long local_70;
  undefined8 uStack_68;
  
  if ((DAT_0951801e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181e98);
    FUN_03f5c2a4(&DAT_09181ea0);
    FUN_03f5c2a4(&DAT_09181eb0);
    FUN_03f5c2a4(&DAT_09181eb8);
    FUN_03f5c2a4(&DAT_09181ec0);
    FUN_03f5c2a4(&DAT_09181ed0);
    FUN_03f5c2a4(&DAT_09181ee0);
    FUN_03f5c2a4(&DAT_09181ee8);
    FUN_03f5c2a4(&DAT_09181ef0);
    FUN_03f5c2a4(&DAT_09181ef8);
    FUN_03f5c2a4(&DAT_09181f00);
    FUN_03f5c2a4(&DAT_09181f08);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091c9560);
    FUN_03f5c2a4(&DAT_091c9be0);
    FUN_03f5c2a4(&DAT_091ca020);
    FUN_03f5c2a4(&DAT_091caa08);
    FUN_03f5c2a4(&DAT_091ca7f0);
    FUN_03f5c2a4(&DAT_091ca860);
    FUN_03f5c2a4(&DAT_091ca270);
    FUN_03f5c2a4(&DAT_091cab48);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091caf58);
    FUN_03f5c2a4(&DAT_091cb120);
    FUN_03f5c2a4(&DAT_091cb1e8);
    FUN_03f5c2a4(&DAT_091cb1f8);
    FUN_03f5c2a4(&DAT_091cb2d0);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_091cb620);
    FUN_03f5c2a4(&DAT_091a50d8);
    FUN_03f5c2a4(&DAT_091a50e0);
    FUN_03f5c2a4(&DAT_091a50e8);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09179340);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_091782b8);
    FUN_03f5c2a4(&DAT_091793f0);
    FUN_03f5c2a4(&DAT_09178770);
    FUN_03f5c2a4(&DAT_09179410);
    FUN_03f5c2a4(&DAT_091793f8);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917a438);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917aae0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091ab558);
    FUN_03f5c2a4(&DAT_091ab4c0);
    FUN_03f5c2a4(&DAT_091ab580);
    FUN_03f5c2a4(&DAT_091ab4a0);
    FUN_03f5c2a4(&DAT_091ab480);
    FUN_03f5c2a4(&DAT_091ab508);
    FUN_03f5c2a4(&DAT_091ab450);
    FUN_03f5c2a4(&DAT_091ab530);
    FUN_03f5c2a4(&DAT_091ab4e0);
    FUN_03f5c2a4(&DAT_091ab438);
    FUN_03f5c2a4(&DAT_091b24e8);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091b2590);
    FUN_03f5c2a4(&DAT_091b2508);
    FUN_03f5c2a4(&DAT_091ab518);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e78b8);
    FUN_03f5c2a4(&DAT_091e78c0);
    FUN_03f5c2a4(&DAT_091e78c8);
    FUN_03f5c2a4(&DAT_091e78d0);
    FUN_03f5c2a4(&DAT_091e78d8);
    FUN_03f5c2a4(&DAT_091e78e0);
    FUN_03f5c2a4(&DAT_091e7f28);
    FUN_03f5c2a4(&DAT_091e7f30);
    FUN_03f5c2a4(&DAT_091e7f38);
    FUN_03f5c2a4(&DAT_091e7f40);
    FUN_03f5c2a4(&DAT_0918f608);
    FUN_03f5c2a4(&DAT_091e7f48);
    FUN_03f5c2a4(&DAT_0918f610);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091f9f58);
    DAT_0951801e = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  local_a4 = 0;
  local_c0 = (long *)0x0;
  pplStack_b8 = (long **)0x0;
  local_b0 = 0;
  local_e0 = (long *)0x0;
  pplStack_d8 = (long **)0x0;
  local_d0 = 0;
  lVar9 = thunk_FUN_03f9944c(DAT_0918f608);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass90_0___ctor(lVar9,0);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar9 + 0x10),param_1);
    lVar10 = thunk_FUN_03f9944c(DAT_09181eb8);
    CookingGraph_BotGameState___ctor(lVar10,0);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(param_1 + 400);
      if (*(long *)(param_1 + 0x178) != 0) {
        *(float *)(lVar10 + 0x18) = (float)*(double *)(*(long *)(param_1 + 0x178) + 0x80);
        *(bool *)(lVar10 + 0x1c) = *(int *)(param_1 + 0x188) == 0;
        if ((*(long *)(param_1 + 0x180) != 0) &&
           (lVar15 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar15 != 0)) {
          *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(lVar15 + 0x5c);
          uVar5 = CookingGraph_CookingLevelSimulation__get_ActiveProcessCount(param_1);
          *(undefined4 *)(lVar10 + 0x50) = uVar5;
          if (*(long *)(param_1 + 0x178) != 0) {
            iVar6 = CookingGraph_Execution_CookingExecution__get_ActiveMergeCount
                              (*(long *)(param_1 + 0x178),0);
            if (*(long *)(param_1 + 0x178) != 0) {
              iVar7 = CookingGraph_Execution_CookingExecution__get_WaitingTransferCount
                                (*(long *)(param_1 + 0x178),0);
              *(int *)(lVar10 + 0x54) = iVar7 + iVar6;
              lVar15 = DAT_0918f298;
              if (*(long *)(param_1 + 0xa8) != 0) {
                iVar6 = *(int *)(*(long *)(param_1 + 0xa8) + 0x18);
                *(int *)(lVar10 + 0x6c) =
                     (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x198)) - iVar6;
                *(int *)(lVar10 + 0x70) = iVar6;
                uVar24 = *(undefined8 *)(param_1 + 0xf8);
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar15 = DAT_0918f298;
                }
                puVar16 = *(undefined8 **)(lVar15 + 0xb8);
                lVar27 = puVar16[0x44];
                if (lVar27 == 0) {
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    FUN_03f5c424();
                    puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                  }
                  uVar28 = *puVar16;
                  lVar27 = thunk_FUN_03f9944c(DAT_09178bd0);
                  FUN_05315cf4(lVar27,uVar28,DAT_091e78b8,0);
                  lVar15 = *(long *)(DAT_0918f298 + 0xb8);
                  *(long *)(lVar15 + 0x220) = lVar27;
                  thunk_FUN_03f5d7b8(lVar15 + 0x220,lVar27);
                }
                uVar24 = FUN_04aea844(uVar24,lVar27,DAT_091ca020);
                uVar24 = FUN_04b08778(uVar24,DAT_091cb1f8);
                *(undefined8 *)(lVar10 + 0x78) = uVar24;
                thunk_FUN_03f5d7b8();
                lVar15 = FUN_04ae45c0(*(undefined8 *)(param_1 + 0xa0),DAT_091c9be0);
                if (lVar15 == 0) {
                  cVar14 = '\0';
                }
                else {
                  cVar14 = *(char *)(lVar15 + 0x19);
                }
                *(bool *)(lVar10 + 0x68) = cVar14 != '\0';
                plVar11 = (long *)(lVar9 + 0x20);
                *plVar11 = lVar10;
                thunk_FUN_03f5d7b8(plVar11,lVar10);
                lVar10 = *(long *)(param_1 + 0x80);
                if (lVar10 != 0) {
                  iVar6 = 0;
                  do {
                    if (*(int *)(lVar10 + 0x18) <= iVar6) {
                      lVar10 = thunk_FUN_03f9944c(DAT_09179e20);
                      FUN_053e1118(lVar10,DAT_091a82f8);
                      plVar18 = (long *)(lVar9 + 0x18);
                      *plVar18 = lVar10;
                      thunk_FUN_03f5d7b8(plVar18,lVar10);
                      lVar10 = *(long *)(param_1 + 0x90);
                      if (lVar10 != 0) {
                        iVar6 = 0;
                        goto LAB_04452d44;
                      }
                      break;
                    }
                    lVar15 = thunk_FUN_03f9944c(DAT_09181ef8);
                    CookingGraph_BotQueueLaneState___ctor(lVar15,0);
                    lVar10 = DAT_091ab558;
                    if ((*plVar11 == 0) || (lVar27 = *(long *)(*plVar11 + 0x28), lVar27 == 0))
                    break;
                    lVar17 = *(long *)(lVar27 + 0x10);
                    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                    if (lVar17 == 0) break;
                    uVar26 = *(uint *)(lVar27 + 0x18);
                    if (uVar26 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(lVar27 + 0x18) = uVar26 + 1;
                      plVar18 = (long *)(lVar17 + (long)(int)uVar26 * 8 + 0x20);
                      *plVar18 = lVar15;
                      thunk_FUN_03f5d7b8(plVar18,lVar15);
                    }
                    else {
                      FUN_057e0c68(lVar27,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar10 = *(long *)(param_1 + 0x80);
                    if (lVar10 == 0) break;
                    iVar7 = 0;
                    while( true ) {
                      uVar5 = *(undefined4 *)(param_1 + 0x11c);
                      lVar10 = FUN_057e0998(lVar10,iVar6,DAT_091aa7e0);
                      if (lVar10 == 0) goto LAB_04453028;
                      uVar1 = *(undefined4 *)(lVar10 + 0x18);
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      iVar8 = System_Math__Min(uVar5,uVar1,0);
                      if (iVar8 <= iVar7) break;
                      lVar10 = CookingGraph_CookingLevelSimulation__At(param_1,iVar6,iVar7);
                      if (lVar10 != 0) {
                        uVar12 = CookingGraph_CookingLevelSimulation__IsHidden(param_1,iVar6,iVar7);
                        if (lVar15 == 0) goto LAB_04453028;
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar27 = thunk_FUN_03f9944c(DAT_09181ef0);
                        CookingGraph_BotQueueItemState___ctor(lVar27,0);
                        uVar24 = System_Int64__ToString(lVar10 + 0x10,0);
                        if (lVar27 == 0) goto LAB_04453028;
                        *(undefined8 *)(lVar27 + 0x10) = uVar24;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar27 + 0x10),uVar24);
                        bVar4 = *(byte *)(lVar10 + 0x30);
                        *(uint *)(lVar27 + 0x18) = (uint)bVar4;
                        if (bVar4 == 0 && (uVar12 & 1) == 0) {
                          if ((*(long *)(param_1 + 0x78) == 0) ||
                             (lVar19 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar19 == 0))
                          goto LAB_04453028;
                          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar10 + 0x18))
                          goto LAB_044547fc;
                          uVar24 = *(undefined8 *)
                                    (lVar19 + (long)(int)*(uint *)(lVar10 + 0x18) * 8 + 0x20);
                        }
                        else {
                          uVar24 = 0;
                        }
                        *(undefined8 *)(lVar27 + 0x20) = uVar24;
                        thunk_FUN_03f5d7b8();
                        if (*(char *)(lVar10 + 0x30) == '\0') {
                          uVar5 = *(undefined4 *)(lVar10 + 0x28);
                        }
                        else {
                          uVar5 = 1;
                        }
                        *(undefined4 *)(lVar27 + 0x2c) = uVar5;
                        if ((uVar12 & 1) == 0) {
                          iVar8 = (uint)(0 < *(int *)(lVar10 + 0x24)) << 1;
                        }
                        else {
                          iVar8 = 1;
                        }
                        *(int *)(lVar27 + 0x28) = iVar8;
                        lVar10 = DAT_091ab530;
                        if (lVar17 == 0) goto LAB_04453028;
                        lVar19 = *(long *)(lVar17 + 0x10);
                        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                        if (lVar19 == 0) goto LAB_04453028;
                        uVar26 = *(uint *)(lVar17 + 0x18);
                        if (uVar26 < *(uint *)(lVar19 + 0x18)) {
                          *(uint *)(lVar17 + 0x18) = uVar26 + 1;
                          plVar18 = (long *)(lVar19 + (long)(int)uVar26 * 8 + 0x20);
                          *plVar18 = lVar27;
                          thunk_FUN_03f5d7b8(plVar18,lVar27);
                        }
                        else {
                          FUN_057e0c68(lVar17,lVar27,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      lVar10 = *(long *)(param_1 + 0x80);
                      iVar7 = iVar7 + 1;
                      if (lVar10 == 0) goto LAB_04453028;
                    }
                    lVar10 = CookingGraph_CookingLevelSimulation__PlanPick
                                       (param_1,iVar6,0,0,&uStack_68,0);
                    if (lVar10 != 0) {
                      uVar24 = *(undefined8 *)(lVar10 + 0x10);
                      lVar15 = *(long *)(lVar9 + 0x28);
                      if (lVar15 == 0) {
                        lVar15 = thunk_FUN_03f9944c(DAT_091782b8);
                        FUN_0530d910(lVar15,lVar9,DAT_091e7f30,0);
                        *(long *)(lVar9 + 0x28) = lVar15;
                        thunk_FUN_03f5d7b8(lVar9 + 0x28,lVar15);
                      }
                      uVar24 = FUN_04aeee0c(uVar24,lVar15,DAT_091ca270);
                      uVar24 = FUN_04b049e4(uVar24,DAT_091caf58);
                      if (*plVar11 == 0) break;
                      lVar27 = *(long *)(*plVar11 + 0x30);
                      lVar15 = thunk_FUN_03f9944c(DAT_09181ee0);
                      CookingGraph_BotPickupOption___ctor(lVar15,0);
                      if (lVar15 == 0) break;
                      *(int *)(lVar15 + 0x10) = iVar6;
                      lVar17 = CookingGraph_CookingLevelSimulation__At(param_1,iVar6,0);
                      if (lVar17 == 0) break;
                      uVar28 = System_Int64__ToString(lVar17 + 0x10,0);
                      *(undefined8 *)(lVar15 + 0x18) = uVar28;
                      thunk_FUN_03f5d7b8();
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar17 = puVar16[0x45];
                      if (lVar17 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar28 = *puVar16;
                        lVar17 = thunk_FUN_03f9944c(DAT_09179410);
                        FUN_05324070(lVar17,uVar28,DAT_091e78c0,0);
                        lVar19 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar19 + 0x228) = lVar17;
                        thunk_FUN_03f5d7b8(lVar19 + 0x228,lVar17);
                      }
                      uVar28 = FUN_04af8044(uVar24,lVar17,DAT_091ca860);
                      uVar28 = FUN_04b08b78(uVar28,DAT_091cb2d0);
                      *(undefined8 *)(lVar15 + 0x20) = uVar28;
                      thunk_FUN_03f5d7b8();
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar17 = puVar16[0x46];
                      if (lVar17 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar28 = *puVar16;
                        lVar17 = thunk_FUN_03f9944c(DAT_091793f8);
                        FUN_05322d94(lVar17,uVar28,DAT_091e78c8,0);
                        lVar19 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar19 + 0x230) = lVar17;
                        thunk_FUN_03f5d7b8(lVar19 + 0x230,lVar17);
                      }
                      uVar28 = FUN_04b0cafc(uVar24,lVar17,DAT_091cb620);
                      lVar17 = *(long *)(lVar9 + 0x30);
                      if (lVar17 == 0) {
                        lVar17 = thunk_FUN_03f9944c(DAT_091793f0);
                        FUN_05324070(lVar17,lVar9,DAT_091e7f38,0);
                        *(long *)(lVar9 + 0x30) = lVar17;
                        thunk_FUN_03f5d7b8(lVar9 + 0x30,lVar17);
                      }
                      uVar28 = FUN_04afac50(uVar28,lVar17,DAT_091caa08);
                      uVar28 = FUN_04b08b78(uVar28,DAT_091cb1e8);
                      *(undefined8 *)(lVar15 + 0x28) = uVar28;
                      thunk_FUN_03f5d7b8();
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar17 = puVar16[0x47];
                      if (lVar17 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar28 = *puVar16;
                        lVar17 = thunk_FUN_03f9944c(DAT_091793f8);
                        FUN_05322d94(lVar17,uVar28,DAT_091e78d0,0);
                        lVar19 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar19 + 0x238) = lVar17;
                        thunk_FUN_03f5d7b8(lVar19 + 0x238,lVar17);
                      }
                      bVar4 = FUN_04ab6f28(uVar24,lVar17,DAT_091c9560);
                      *(byte *)(lVar15 + 0x30) = bVar4 & 1;
                      *(undefined4 *)(lVar15 + 0x34) = *(undefined4 *)(lVar10 + 0x28);
                      lVar10 = DAT_091ab4e0;
                      if (lVar27 == 0) break;
                      lVar17 = *(long *)(lVar27 + 0x10);
                      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                      if (lVar17 == 0) break;
                      uVar26 = *(uint *)(lVar27 + 0x18);
                      if (uVar26 < *(uint *)(lVar17 + 0x18)) {
                        *(uint *)(lVar27 + 0x18) = uVar26 + 1;
                        plVar18 = (long *)(lVar17 + (long)(int)uVar26 * 8 + 0x20);
                        *plVar18 = lVar15;
                        thunk_FUN_03f5d7b8(plVar18,lVar15);
                      }
                      else {
                        FUN_057e0c68(lVar27,lVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    lVar10 = *(long *)(param_1 + 0x80);
                    iVar6 = iVar6 + 1;
                  } while (lVar10 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_04453028;
LAB_04452d44:
  if (*(int *)(lVar10 + 0x18) <= iVar6) {
    if (*(int *)(param_1 + 0x16c) < 0) goto LAB_04453438;
    lVar15 = *plVar11;
    lVar10 = thunk_FUN_03f9944c(DAT_09181f08);
    CookingGraph_BotSaveMeBagState___ctor(lVar10,0);
    CookingGraph_CookingLevelSimulation__get_BagAddress(&local_f8,param_1);
    pplStack_78 = pplStack_f0;
    local_80 = local_f8;
    local_70 = local_e8;
    uVar24 = CookingGraph_Execution_CookingEndpoint__ToString(&local_80,0);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x10) = uVar24;
      thunk_FUN_03f5d7b8();
      if (lVar15 != 0) {
        plVar20 = (long *)(lVar15 + 0x40);
        *plVar20 = lVar10;
        thunk_FUN_03f5d7b8(plVar20,lVar10);
        lVar10 = *(long *)(param_1 + 0x178);
        CookingGraph_CookingLevelSimulation__get_BagAddress(&local_148,param_1);
        if (lVar10 != 0) {
          pplStack_158 = pplStack_140;
          local_160 = local_148;
          local_150 = local_138;
          uVar24 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar10,&local_160,0);
          lVar10 = *(long *)(lVar9 + 0x38);
          if (lVar10 == 0) {
            lVar10 = thunk_FUN_03f9944c(DAT_09178768);
            FUN_053136a4(lVar10,lVar9,DAT_091e7f40,0);
            *(long *)(lVar9 + 0x38) = lVar10;
            thunk_FUN_03f5d7b8((long *)(lVar9 + 0x38),lVar10);
          }
          plVar20 = (long *)FUN_04b0beec(uVar24,lVar10,DAT_091cb468);
          if (plVar20 != (long *)0x0) {
            lVar10 = *plVar20;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_04453190;
            piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_04453178;
          }
        }
      }
    }
    goto LAB_04453028;
  }
  lVar10 = thunk_FUN_03f9944c(DAT_09181ec0);
  CookingGraph_BotGridCellState___ctor(lVar10,0);
  uVar12 = CookingGraph_CookingLevelSimulation__IsCellUsable(param_1,iVar6);
  if ((uVar12 & 1) == 0) {
LAB_04452dac:
    bVar3 = false;
  }
  else {
    CookingGraph_CookingLevelSimulation__GridAddress(&local_f8,iVar6);
    pplStack_108 = pplStack_f0;
    local_110 = local_f8;
    local_100 = local_e8;
    uVar12 = CookingGraph_CookingLevelSimulation__Occupied(param_1,&local_110);
    if ((uVar12 & 1) != 0) goto LAB_04452dac;
    bVar3 = iVar6 != *(int *)(param_1 + 0x16c);
  }
  if (lVar10 == 0) goto LAB_04453028;
  *(bool *)(lVar10 + 0x14) = bVar3;
  lVar15 = DAT_091ab4a0;
  if (((*plVar11 == 0) || (lVar27 = *(long *)(*plVar11 + 0x38), lVar27 == 0)) ||
     (lVar27 = *(long *)(lVar27 + 0x10), lVar27 == 0)) goto LAB_04453028;
  lVar17 = *(long *)(lVar27 + 0x10);
  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
  if (lVar17 == 0) goto LAB_04453028;
  uVar26 = *(uint *)(lVar27 + 0x18);
  if (uVar26 < *(uint *)(lVar17 + 0x18)) {
    *(uint *)(lVar27 + 0x18) = uVar26 + 1;
    plVar20 = (long *)(lVar17 + (long)(int)uVar26 * 8 + 0x20);
    *plVar20 = lVar10;
    thunk_FUN_03f5d7b8(plVar20,lVar10);
  }
  else {
    FUN_057e0c68(lVar27,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
  }
  if (iVar6 == *(int *)(param_1 + 0x16c)) {
    *(undefined4 *)(lVar10 + 0x10) = 4;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x178);
    CookingGraph_CookingLevelSimulation__GridAddress(&local_f8,iVar6);
    if (lVar15 == 0) goto LAB_04453028;
    pplStack_128 = pplStack_f0;
    local_130 = local_f8;
    local_120 = local_e8;
    uVar24 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar15,&local_130,0);
    lVar15 = FUN_04b0451c(uVar24,DAT_091cadc0);
    if (lVar15 == 0) goto LAB_04453028;
    if (*(long *)(lVar15 + 0x18) != 0) {
      if ((int)*(long *)(lVar15 + 0x18) == 0) {
LAB_044547fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(int *)(lVar15 + 0x2c) == 1) {
        *(undefined4 *)(lVar10 + 0x10) = 3;
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar27 = puVar16[0x48];
        if (lVar27 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar24 = *puVar16;
          lVar27 = thunk_FUN_03f9944c(DAT_09178770);
          FUN_05313d88(lVar27,uVar24,DAT_091e78d8,0);
          lVar17 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar17 + 0x240) = lVar27;
          thunk_FUN_03f5d7b8(lVar17 + 0x240,lVar27);
        }
        uVar5 = FUN_04b02574(lVar15,lVar27,DAT_091cab48);
        *(undefined4 *)(lVar10 + 0x2c) = uVar5;
      }
      else {
        uVar24 = *(undefined8 *)(lVar15 + 0x20);
        uVar26 = *(uint *)(lVar15 + 0x28);
        if (*(int *)(lVar15 + 0x2c) == 2) {
          uVar5 = 5;
        }
        else {
          if (*(long *)(param_1 + 200) == 0) goto LAB_04453028;
          uVar12 = FUN_053e1824(*(long *)(param_1 + 200),uVar24,DAT_091a8318);
          uVar5 = 1;
          if ((uVar12 & 1) == 0) {
            uVar5 = 2;
          }
        }
        *(undefined4 *)(lVar10 + 0x10) = uVar5;
        if (*(long *)(param_1 + 0x178) == 0) goto LAB_04453028;
        uVar12 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                           (*(long *)(param_1 + 0x178),uVar24,0);
        if ((uVar12 & 1) == 0) {
          if ((*(long *)(param_1 + 0x78) == 0) ||
             (lVar15 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar15 == 0)) goto LAB_04453028;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_044547fc;
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar15 + (long)(int)uVar26 * 8 + 0x20);
          thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x18));
          if (*plVar18 == 0) goto LAB_04453028;
          FUN_053e230c(*plVar18,uVar24,DAT_091a8308);
        }
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x90);
  iVar6 = iVar6 + 1;
  if (lVar10 == 0) goto LAB_04453028;
  goto LAB_04452d44;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar23 = piVar23 + 4;
    if (uVar12 == 0) break;
LAB_04453178:
    if (*(long *)(piVar23 + -2) == DAT_0917a480) {
      puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_044531ac;
    }
  }
LAB_04453190:
  puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917a480,0);
LAB_044531ac:
  local_88 = (long *)(*(code *)*puVar16)(plVar20,puVar16[1]);
  pplStack_140 = &local_88;
  local_148 = 0;
  do {
    plVar20 = local_88;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *local_88;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == DAT_09185b10) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_04453220;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185b10,0);
LAB_04453220:
    uVar12 = (*(code *)*puVar16)(plVar20,puVar16[1]);
    plVar20 = local_88;
    if ((uVar12 & 1) == 0) {
      if (local_88 == (long *)0x0) goto LAB_04453438;
      lVar10 = *local_88;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_04453400;
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *local_88;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == DAT_0917ab28) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_0445328c;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ab28,0);
LAB_0445328c:
    (*(code *)*puVar16)(&local_f8,plVar20,puVar16[1]);
    plVar20 = local_f8;
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *(long *)(*plVar11 + 0x40);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar27 = *(long *)(lVar10 + 0x18);
    uVar26 = (uint)pplStack_f0;
    lVar15 = (long)(int)(uint)pplStack_f0;
    lVar10 = thunk_FUN_03f9944c(DAT_09181f00);
    CookingGraph_BotSaveMeBagItemState___ctor(lVar10,0);
    local_90 = plVar20;
    uVar24 = System_Int64__ToString(&local_90,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar10 + 0x10) = uVar24;
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar17 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar17 + lVar15 * 8 + 0x20);
    thunk_FUN_03f5d7b8();
    lVar15 = DAT_091ab580;
    if (lVar27 == 0) {
LAB_04454878:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar17 = *(long *)(lVar27 + 0x10);
    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
    if (lVar17 == 0) goto LAB_04454878;
    uVar26 = *(uint *)(lVar27 + 0x18);
    if (uVar26 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar27 + 0x18) = uVar26 + 1;
      plVar13 = (long *)(lVar17 + (long)(int)uVar26 * 8 + 0x20);
      *plVar13 = lVar10;
      thunk_FUN_03f5d7b8(plVar13,lVar10);
    }
    else {
      FUN_057e0c68(lVar27,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_053e230c(*plVar18,plVar20,DAT_091a8308);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar23 = piVar23 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar23 + -2) == DAT_09185a58) {
      puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0445341c;
    }
  }
LAB_04453400:
  puVar16 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_0445341c:
  (*(code *)*puVar16)(plVar20,puVar16[1]);
LAB_04453438:
  if (*(long *)(param_1 + 0x178) != 0) {
    uVar24 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar10 = puVar16[0x49];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar16 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar28 = *puVar16;
      lVar10 = thunk_FUN_03f9944c(DAT_09178730);
      FUN_05322d94(lVar10,uVar28,DAT_091e78e0,0);
      lVar15 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar15 + 0x248) = lVar10;
      thunk_FUN_03f5d7b8(lVar15 + 0x248,lVar10);
    }
    plVar20 = (long *)FUN_04b0cafc(uVar24,lVar10,DAT_091cb460);
    if (plVar20 != (long *)0x0) {
      lVar10 = *plVar20;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == DAT_0917a478) {
            puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_0445354c;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917a478,0);
LAB_0445354c:
      local_98 = (long *)(*(code *)*puVar16)(plVar20,puVar16[1]);
      pplStack_f0 = &local_98;
      local_f8 = (long *)0x0;
      do {
        plVar20 = local_98;
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *local_98;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == DAT_09185b10) {
              puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_044535c0;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185b10,0);
LAB_044535c0:
        uVar12 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        plVar20 = local_98;
        if ((uVar12 & 1) == 0) {
          if (local_98 == (long *)0x0) goto LAB_044536c4;
          lVar10 = *local_98;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_0445369c;
          piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_04453684;
        }
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *local_98;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == DAT_0917ab20) {
              puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_04453624;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab20,0);
LAB_04453624:
        lVar10 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053e230c(*plVar18,*(undefined8 *)(lVar10 + 0x28),DAT_091a8308);
      } while( true );
    }
  }
  goto LAB_04453028;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar23 = piVar23 + 4;
    if (uVar12 == 0) break;
LAB_04453684:
    if (*(long *)(piVar23 + -2) == DAT_09185a58) {
      puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_044536b8;
    }
  }
LAB_0445369c:
  puVar16 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_044536b8:
  (*(code *)*puVar16)(plVar20,puVar16[1]);
LAB_044536c4:
  if ((*(long *)(param_1 + 0x178) != 0) &&
     (plVar18 = (long *)CookingGraph_Execution_CookingExecution__get_Transfers
                                  (*(long *)(param_1 + 0x178),0), plVar18 != (long *)0x0)) {
    lVar10 = *plVar18;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == DAT_0917a478) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_04453740;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917a478,0);
LAB_04453740:
    plVar18 = (long *)(*(code *)*puVar16)(plVar18,puVar16[1]);
    pplStack_f0 = &local_98;
    local_f8 = (long *)0x0;
    do {
      local_98 = plVar18;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *plVar18;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == DAT_09185b10) {
            puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_044537b4;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_09185b10,0);
LAB_044537b4:
      uVar12 = (*(code *)*puVar16)(plVar18,puVar16[1]);
      plVar18 = local_98;
      if ((uVar12 & 1) == 0) {
        if (local_98 == (long *)0x0) goto LAB_044538c8;
        lVar10 = *local_98;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_044538a0;
        piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_04453888;
      }
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *local_98;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == DAT_0917ab20) {
            puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_04453818;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab20,0);
LAB_04453818:
      lVar10 = (*(code *)*puVar16)(plVar18,puVar16[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_178 = *(undefined8 *)(lVar10 + 0x30);
      local_180 = *(undefined8 *)(lVar10 + 0x28);
      local_170 = *(undefined8 *)(lVar10 + 0x38);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass90_0__<ReadState>g__Commit_0
                (lVar9,&local_180,0);
      plVar18 = local_98;
    } while( true );
  }
  goto LAB_04453028;
LAB_04454018:
  if (local_88 != (long *)0x0) {
    lVar10 = *local_88;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == DAT_09185a58) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_04454078;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_04454078:
    (*(code *)*puVar16)(plVar18,puVar16[1]);
  }
  lVar10 = *(long *)(param_1 + 0x78);
  iVar6 = iVar6 + 1;
  if (lVar10 == 0) goto LAB_04453028;
  goto LAB_04453e1c;
LAB_044547cc:
  uVar26 = uVar26 + 1;
  lVar27 = *(long *)(lVar10 + 0x50);
  if (lVar27 == 0) goto LAB_044547e0;
  goto LAB_04454238;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar23 = piVar23 + 4;
    if (uVar12 == 0) break;
LAB_04453888:
    if (*(long *)(piVar23 + -2) == DAT_09185a58) {
      puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_044538bc;
    }
  }
LAB_044538a0:
  puVar16 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_044538bc:
  (*(code *)*puVar16)(plVar18,puVar16[1]);
LAB_044538c8:
  plVar18 = (long *)CookingGraph_CookingLevelSimulation__get_GridAssemblies(param_1);
  if (plVar18 != (long *)0x0) {
    lVar10 = *plVar18;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == DAT_0917a438) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_0445393c;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917a438,0);
LAB_0445393c:
    plVar18 = (long *)(*(code *)*puVar16)(plVar18,puVar16[1]);
    pplStack_f0 = &local_a0;
    local_f8 = (long *)0x0;
joined_r0x04453954:
    local_a0 = plVar18;
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *plVar18;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == DAT_09185b10) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_044539cc;
        }
        uVar12 = uVar12 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_09185b10,0);
LAB_044539cc:
    uVar12 = (*(code *)*puVar16)(plVar18,puVar16[1]);
    plVar18 = local_a0;
    if ((uVar12 & 1) != 0) {
      if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *local_a0;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == DAT_0917aae0) {
            puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_04453a38;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(local_a0,DAT_0917aae0,0);
LAB_04453a38:
      lVar10 = (*(code *)*puVar16)(plVar18,puVar16[1]);
      local_a4 = 0;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *(long *)(lVar10 + 0x20);
      iVar6 = local_a4;
      do {
        local_a4 = iVar6;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar18 = *(long **)(lVar15 + 0x28);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = *plVar18;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == DAT_0917b310) {
              puVar16 = (undefined8 *)(lVar15 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_04453ab0;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b310,0);
LAB_04453ab0:
        iVar8 = (*(code *)*puVar16)(plVar18,puVar16[1]);
        iVar7 = local_a4;
        plVar18 = local_a0;
        if (iVar8 <= iVar6) goto joined_r0x04453954;
        if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar18 = *(long **)(*(long *)(lVar10 + 0x20) + 0x30);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar15 = *plVar18;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == DAT_0917b498) {
              puVar16 = (undefined8 *)(lVar15 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_04453b24;
            }
            uVar12 = uVar12 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b498,0);
LAB_04453b24:
        uVar12 = (*(code *)*puVar16)(plVar18,iVar7,puVar16[1]);
        iVar6 = local_a4;
        if ((uVar12 & 1) == 0) {
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar18 = *(long **)(*(long *)(lVar10 + 0x20) + 0x38);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar15 = *plVar18;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar23 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == DAT_0917b498) {
                puVar16 = (undefined8 *)(lVar15 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_04453b98;
              }
              uVar12 = uVar12 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b498,0);
LAB_04453b98:
          uVar12 = (*(code *)*puVar16)(plVar18,iVar6,puVar16[1]);
          if ((uVar12 & 1) != 0) goto LAB_04453bac;
        }
        else {
LAB_04453bac:
          if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar27 = *(long *)(*plVar11 + 0x48);
          lVar15 = thunk_FUN_03f9944c(DAT_09181e98);
          CookingGraph_BotCommittedIngredientState___ctor(lVar15,0);
          iVar6 = local_a4;
          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar18 = *(long **)(*(long *)(lVar10 + 0x20) + 0x28);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar17 = *plVar18;
          lVar19 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == DAT_0917b4b0) {
                puVar16 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_04453c4c;
              }
              uVar12 = uVar12 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b4b0,0);
LAB_04453c4c:
          lVar17 = (*(code *)*puVar16)(plVar18,iVar6,puVar16[1]);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar17 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar15 + 0x10) =
               *(undefined8 *)(lVar19 + (long)(int)*(uint *)(lVar17 + 0x10) * 8 + 0x20);
          thunk_FUN_03f5d7b8();
          *(undefined4 *)(lVar15 + 0x18) = 0x3f800000;
          local_90 = *(long **)(lVar10 + 0x18);
          uVar24 = System_Int64__ToString(&local_90,0);
          uVar28 = System_Int32__ToString(&local_a4,0);
          uVar24 = System_String__Concat(uVar24,DAT_091f9f58,uVar28,0);
          *(undefined8 *)(lVar15 + 0x20) = uVar24;
          thunk_FUN_03f5d7b8();
          lVar17 = DAT_091ab438;
          if (lVar27 == 0) {
LAB_044547e4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar19 = *(long *)(lVar27 + 0x10);
          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_044547e4;
          uVar26 = *(uint *)(lVar27 + 0x18);
          if (uVar26 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar27 + 0x18) = uVar26 + 1;
            plVar18 = (long *)(lVar19 + (long)(int)uVar26 * 8 + 0x20);
            *plVar18 = lVar15;
            thunk_FUN_03f5d7b8(plVar18,lVar15);
          }
          else {
            FUN_057e0c68(lVar27,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar15 = *(long *)(lVar10 + 0x20);
        iVar6 = local_a4 + 1;
      } while( true );
    }
    if (local_a0 != (long *)0x0) {
      lVar10 = *local_a0;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == DAT_09185a58) {
            puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_04453dcc;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185a58,0);
LAB_04453dcc:
      (*(code *)*puVar16)(plVar18,puVar16[1]);
    }
    lVar10 = *(long *)(param_1 + 0x78);
    if ((lVar10 != 0) && (lVar15 = *(long *)(lVar10 + 0x20), lVar15 != 0)) {
      for (uVar26 = 0; (int)uVar26 < *(int *)(lVar15 + 0x18); uVar26 = uVar26 + 1) {
        iVar6 = 0;
LAB_04453e1c:
        lVar15 = *(long *)(lVar10 + 0x20);
        if (lVar15 == 0) goto LAB_04453028;
        if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_044547fc;
        lVar27 = *(long *)(lVar15 + (ulong)uVar26 * 8 + 0x20);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_04453028;
        if (iVar6 < *(int *)(lVar27 + 0x1c) + *(int *)(*(long *)(lVar27 + 0x10) + 0x18)) {
          lVar10 = *(long *)(param_1 + 0x178);
          CookingGraph_CookingLevelSimulation__ToolAddress(&local_f8,uVar26,iVar6);
          if (lVar10 != 0) {
            pplStack_198 = pplStack_f0;
            local_1a0 = local_f8;
            local_190 = local_e8;
            plVar18 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar10,&local_1a0,0);
            if (plVar18 != (long *)0x0) {
              lVar10 = *plVar18;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == DAT_0917a480) {
                    puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_04453ef0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar12 != 0);
              }
              puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917a480,0);
LAB_04453ef0:
              plVar18 = (long *)(*(code *)*puVar16)(plVar18,puVar16[1]);
              local_148 = 0;
              pplStack_140 = &local_88;
              do {
                local_88 = plVar18;
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar10 = *plVar18;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == DAT_09185b10) {
                      puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_04453f60;
                    }
                    uVar12 = uVar12 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar12 != 0);
                }
                puVar16 = (undefined8 *)FUN_03f95da8(plVar18,DAT_09185b10,0);
LAB_04453f60:
                uVar12 = (*(code *)*puVar16)(plVar18,puVar16[1]);
                plVar18 = local_88;
                if ((uVar12 & 1) == 0) goto LAB_04454018;
                if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar10 = *local_88;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == DAT_0917ab28) {
                      puVar16 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_04453fcc;
                    }
                    uVar12 = uVar12 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar12 != 0);
                }
                puVar16 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ab28,0);
LAB_04453fcc:
                (*(code *)*puVar16)(&local_f8,plVar18,puVar16[1]);
                pplStack_b8 = pplStack_f0;
                local_c0 = local_f8;
                local_b0 = local_e8;
                pplStack_1b8 = pplStack_f0;
                local_1c0 = local_f8;
                local_1b0 = local_e8;
                CookingGraph_CookingLevelSimulation_<>c__DisplayClass90_0__<ReadState>g__Commit_0
                          (lVar9,&local_1c0,0);
                plVar18 = local_88;
              } while( true );
            }
          }
          goto LAB_04453028;
        }
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        FUN_057e185c(&local_f8,*(long *)(param_1 + 0x98),DAT_091b24e8);
        local_e0 = local_f8;
        local_d0 = local_e8;
        local_f8 = (long *)0x0;
        pplStack_d8 = pplStack_f0;
        pplStack_f0 = &local_e0;
LAB_04454158:
        uVar12 = FUN_071bd28c(&local_e0,DAT_091a50e0);
        lVar10 = local_d0;
        if ((uVar12 & 1) != 0) {
          lVar15 = thunk_FUN_03f9944c(DAT_09181ea0);
          CookingGraph_BotCustomerOrderState___ctor(lVar15,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)(lVar10 + 0x10);
          *(undefined2 *)(lVar15 + 0x14) = *(undefined2 *)(lVar10 + 0x18);
          lVar27 = DAT_091ab450;
          if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar17 = *(long *)(*plVar11 + 0x58);
          if (lVar17 == 0) {
LAB_044548f4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar19 = *(long *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_044548f4;
          uVar26 = *(uint *)(lVar17 + 0x18);
          if (uVar26 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar26 + 1;
            plVar18 = (long *)(lVar19 + (long)(int)uVar26 * 8 + 0x20);
            *plVar18 = lVar15;
            thunk_FUN_03f5d7b8(plVar18,lVar15);
          }
          else {
            FUN_057e0c68(lVar17,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
          }
          if (*(char *)(lVar10 + 0x18) == '\0') {
            lVar27 = *(long *)(lVar10 + 0x50);
            if (lVar27 == 0) {
LAB_044547e0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar26 = 0;
LAB_04454238:
            if ((int)uVar26 < *(int *)(lVar27 + 0x18)) {
              lVar27 = thunk_FUN_03f9944c(DAT_0918f610);
              CookingGraph_CookingLevelSimulation_<>c__DisplayClass90_1___ctor(lVar27,0);
              lVar17 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar10,uVar26);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar18 = (long *)(lVar27 + 0x10);
              *plVar18 = lVar17;
              thunk_FUN_03f5d7b8(plVar18);
              lVar17 = thunk_FUN_03f9944c(DAT_09181eb0);
              CookingGraph_BotDishOrderState___ctor(lVar17,0);
              if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar19 = *(long *)(lVar10 + 0x50);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar19 = *(long *)(lVar19 + (long)(int)uVar26 * 8 + 0x20);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar21 = *(long *)(*(long *)(param_1 + 0x78) + 0x18);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = *(uint *)(lVar19 + 0x10);
              if (*(uint *)(lVar21 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar21 + (long)(int)uVar2 * 8 + 0x20)
              ;
              thunk_FUN_03f5d7b8();
              lVar19 = DAT_091ab480;
              lVar21 = *(long *)(lVar15 + 0x18);
              if (lVar21 != 0) {
                lVar22 = *(long *)(lVar21 + 0x10);
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 != 0) {
                  uVar2 = *(uint *)(lVar21 + 0x18);
                  if (uVar2 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)(lVar21 + 0x18) = uVar2 + 1;
                    plVar20 = (long *)(lVar22 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar20 = lVar17;
                    thunk_FUN_03f5d7b8(plVar20,lVar17);
                  }
                  else {
                    FUN_057e0c68(lVar21,lVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar19 = *plVar18;
                  if (lVar19 == 0) {
LAB_04454828:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar6 = 0;
                  do {
                    plVar20 = *(long **)(lVar19 + 0x28);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar19 = *plVar20;
                    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b310) {
                          puVar16 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_044543d4;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b310,0);
LAB_044543d4:
                    iVar7 = (*(code *)*puVar16)(plVar20,puVar16[1]);
                    if (iVar7 <= iVar6) goto LAB_044547cc;
                    lVar21 = *(long *)(lVar17 + 0x18);
                    lVar19 = thunk_FUN_03f9944c(DAT_09181ed0);
                    CookingGraph_BotOrderSlotState___ctor(lVar19,0);
                    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar20 = *(long **)(*plVar18 + 0x28);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar22 = *plVar20;
                    lVar25 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
                    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b4b0) {
                          puVar16 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_04454470;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b4b0,0);
LAB_04454470:
                    lVar22 = (*(code *)*puVar16)(plVar20,iVar6,puVar16[1]);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(lVar22 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    *(undefined8 *)(lVar19 + 0x10) =
                         *(undefined8 *)(lVar25 + (long)(int)*(uint *)(lVar22 + 0x10) * 8 + 0x20);
                    thunk_FUN_03f5d7b8();
                    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar20 = *(long **)(*plVar18 + 0x30);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar22 = *plVar20;
                    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b498) {
                          puVar16 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_0445450c;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b498,0);
LAB_0445450c:
                    bVar4 = (*(code *)*puVar16)(plVar20,iVar6,puVar16[1]);
                    *(byte *)(lVar19 + 0x18) = bVar4 & 1;
                    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar20 = *(long **)(*plVar18 + 0x38);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar22 = *plVar20;
                    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b498) {
                          puVar16 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_04454580;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b498,0);
LAB_04454580:
                    bVar4 = (*(code *)*puVar16)(plVar20,iVar6,puVar16[1]);
                    *(byte *)(lVar19 + 0x19) = bVar4 & 1;
                    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar20 = *(long **)(*plVar18 + 0x28);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar22 = *plVar20;
                    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b4b0) {
                          puVar16 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_044545f4;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b4b0,0);
LAB_044545f4:
                    lVar22 = (*(code *)*puVar16)(plVar20,iVar6,puVar16[1]);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar20 = *(long **)(lVar22 + 0x28);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar22 = *plVar20;
                    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b378) {
                          puVar16 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_04454664;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b378,0);
LAB_04454664:
                    iVar7 = (*(code *)*puVar16)(plVar20,puVar16[1]);
                    *(bool *)(lVar19 + 0x1a) = iVar7 == 0;
                    if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar20 = *(long **)(*plVar18 + 0x28);
                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar22 = *plVar20;
                    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
                    if (uVar12 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == DAT_0917b4b0) {
                          puVar16 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_044546d8;
                        }
                        uVar12 = uVar12 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)FUN_03f95da8(plVar20,DAT_0917b4b0,0);
LAB_044546d8:
                    lVar22 = (*(code *)*puVar16)(plVar20,iVar6,puVar16[1]);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar25 = *(long *)(lVar27 + 0x18);
                    uVar24 = *(undefined8 *)(lVar22 + 0x28);
                    if (lVar25 == 0) {
                      lVar25 = thunk_FUN_03f9944c(DAT_09178b98);
                      FUN_05315754(lVar25,lVar27,DAT_091e7f48,0);
                      *(long *)(lVar27 + 0x18) = lVar25;
                      thunk_FUN_03f5d7b8(lVar27 + 0x18,lVar25);
                    }
                    bVar4 = FUN_04ab2d14(uVar24,lVar25,DAT_091c9298);
                    *(byte *)(lVar19 + 0x1b) = bVar4 & 1;
                    lVar22 = DAT_091ab4c0;
                    if (lVar21 == 0) {
LAB_044547f8:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar25 = *(long *)(lVar21 + 0x10);
                    *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                    if (lVar25 == 0) goto LAB_044547f8;
                    uVar2 = *(uint *)(lVar21 + 0x18);
                    if (uVar2 < *(uint *)(lVar25 + 0x18)) {
                      *(uint *)(lVar21 + 0x18) = uVar2 + 1;
                      plVar20 = (long *)(lVar25 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar20 = lVar19;
                      thunk_FUN_03f5d7b8(plVar20,lVar19);
                    }
                    else {
                      FUN_057e0c68(lVar21,lVar19,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar19 = *plVar18;
                    iVar6 = iVar6 + 1;
                    if (lVar19 == 0) goto LAB_04454828;
                  } while( true );
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          goto LAB_04454158;
        }
        FUN_039b8750(&local_f8);
        if (*(long *)(param_1 + 0xa0) != 0) {
          FUN_057e185c(&local_f8,*(long *)(param_1 + 0xa0),DAT_091b24e8);
          pplStack_d8 = pplStack_f0;
          local_e0 = local_f8;
          local_d0 = local_e8;
          pplStack_f0 = &local_e0;
          local_f8 = (long *)0x0;
          while (uVar12 = FUN_071bd28c(&local_e0,DAT_091a50e0), lVar10 = local_d0, (uVar12 & 1) != 0
                ) {
            if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(char *)(local_d0 + 0x19) != '\0') break;
            if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar15 = *(long *)(*plVar11 + 0x60);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar27 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar27 + 0x28) <= *(int *)(lVar15 + 0x18)) break;
            lVar27 = thunk_FUN_03f9944c(DAT_09181ee8);
            CookingGraph_BotPreviewOrderState___ctor(lVar27,0);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined4 *)(lVar27 + 0x10) = *(undefined4 *)(lVar10 + 0x10);
            *(undefined1 *)(lVar27 + 0x14) = *(undefined1 *)(lVar10 + 0x18);
            uVar24 = *(undefined8 *)(lVar10 + 0x50);
            lVar10 = *(long *)(lVar9 + 0x40);
            if (lVar10 == 0) {
              lVar10 = thunk_FUN_03f9944c(DAT_09179340);
              FUN_05324070(lVar10,lVar9,DAT_091e7f28,0);
              *(long *)(lVar9 + 0x40) = lVar10;
              thunk_FUN_03f5d7b8(lVar9 + 0x40,lVar10);
            }
            uVar24 = FUN_04af8044(uVar24,lVar10,DAT_091ca7f0);
            uVar24 = FUN_04b08b78(uVar24,DAT_091cb120);
            *(undefined8 *)(lVar27 + 0x18) = uVar24;
            thunk_FUN_03f5d7b8();
            lVar10 = DAT_091ab508;
            lVar17 = *(long *)(lVar15 + 0x10);
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar26 = *(uint *)(lVar15 + 0x18);
            if (uVar26 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar26 + 1;
              plVar18 = (long *)(lVar17 + (long)(int)uVar26 * 8 + 0x20);
              *plVar18 = lVar27;
              thunk_FUN_03f5d7b8(plVar18,lVar27);
            }
            else {
              FUN_057e0c68(lVar15,lVar27,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_039b8750(&local_f8);
          return *plVar11;
        }
      }
    }
  }
LAB_04453028:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

