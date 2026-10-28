// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CompleteCustomers
// address: 0x44558f4
// body: available
// range: 0x44558f4-0x4456557 inclusive
// range: 0x445655c-0x4456677 inclusive
// range: 0x445667c-0x4456693 inclusive
// range: 0x44566dc-0x445675f inclusive
// range: 0x4456788-0x445678b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4456554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456740 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445675c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4456788 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04456744) */
/* WARNING: Removing unreachable block (ram,0x04456758) */
/* WARNING: Removing unreachable block (ram,0x044565f8) */

void CookingGraph_CookingLevelSimulation__CompleteCustomers(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined8 local_290;
  long **pplStack_288;
  undefined8 local_280;
  undefined8 local_270;
  long **pplStack_268;
  undefined8 local_260;
  undefined8 local_250;
  long **pplStack_248;
  undefined8 local_240;
  undefined8 local_230;
  long **pplStack_228;
  undefined8 local_220;
  undefined8 local_210;
  long **pplStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  long **pplStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  long **pplStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  long **pplStack_188;
  undefined8 local_180;
  undefined8 local_170;
  long **pplStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  long **pplStack_148;
  undefined8 local_140;
  undefined8 local_130;
  long **pplStack_128;
  undefined8 local_120;
  undefined8 local_110;
  long **pplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  long **pplStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long **local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((DAT_09518020 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c66c8);
    FUN_03f5c2a4(&DAT_0917fda0);
    FUN_03f5c2a4(&DAT_091c9268);
    FUN_03f5c2a4(&DAT_091c9458);
    FUN_03f5c2a4(&DAT_091ca7f8);
    FUN_03f5c2a4(&DAT_091cab48);
    FUN_03f5c2a4(&DAT_091cabd8);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_09178770);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_09179b90);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091b24e0);
    FUN_03f5c2a4(&DAT_091adcd8);
    FUN_03f5c2a4(&DAT_091b24f0);
    FUN_03f5c2a4(&DAT_091b2500);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_091e7618);
    FUN_03f5c2a4(&DAT_091e7620);
    FUN_03f5c2a4(&DAT_091e7630);
    FUN_03f5c2a4(&DAT_091e7f50);
    FUN_03f5c2a4(&DAT_0918f618);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_0920d890);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518020 = 1;
  }
  local_130 = 0;
  pplStack_128 = (long **)0x0;
  local_120 = 0;
  pplStack_148 = (long **)0x0;
  local_140 = 0;
  local_158 = (long *)0x0;
  local_150 = 0;
  uStack_88 = 0;
  local_90 = (long **)0x0;
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar5 = FUN_057e28a4(*(long *)(param_1 + 0x98),DAT_091b2500), lVar5 == 0)) {
LAB_04456714:
    if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (0 < *(int *)(lVar5 + 0x18)) {
      uVar18 = 0;
LAB_04455b58:
      lVar6 = thunk_FUN_03f9944c(DAT_0918f618);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass93_0___ctor(lVar6,0);
      if (lVar6 == 0) goto LAB_04456714;
      *(long *)(lVar6 + 0x18) = param_1;
      thunk_FUN_03f5d7b8((long *)(lVar6 + 0x18),param_1);
      if (*(uint *)(lVar5 + 0x18) <= uVar18) {
LAB_0445672c:
        if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_04456788;
      }
      plVar20 = (long *)(lVar6 + 0x10);
      *plVar20 = *(long *)(lVar5 + uVar18 * 8 + 0x20);
      thunk_FUN_03f5d7b8(plVar20);
      lVar7 = *plVar20;
      if (lVar7 == 0) goto LAB_04456714;
      if (*(char *)(lVar7 + 0x18) == '\0') {
        iVar17 = 0;
        while( true ) {
          lVar10 = *(long *)(lVar7 + 0x50);
          if (lVar10 == 0) goto LAB_04456714;
          if (*(int *)(lVar10 + 0x18) <= iVar17) break;
          if (*(long *)(lVar7 + 0x58) == 0) goto LAB_04456714;
          uVar8 = FUN_053d750c(*(long *)(lVar7 + 0x58),iVar17,DAT_091a82c0);
          if ((uVar8 & 1) == 0) {
            lVar7 = CookingGraph_CookingLevelSimulation__Assembly(param_1,*plVar20,iVar17);
            if (lVar7 == 0) goto LAB_04456714;
            uVar8 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete(lVar7,0);
            if ((uVar8 & 1) != 0) {
              if ((*plVar20 == 0) || (lVar7 = *(long *)(*plVar20 + 0x58), lVar7 == 0))
              goto LAB_04456714;
              FUN_053d8048(lVar7,iVar17,DAT_091a82b0);
              *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
              *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
              *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
            }
          }
          lVar7 = *plVar20;
          iVar17 = iVar17 + 1;
          if (lVar7 == 0) goto LAB_04456714;
        }
        uVar9 = thunk_FUN_03f9944c(DAT_09179b90);
        FUN_05330e2c(uVar9,lVar6,DAT_091e7f50,0);
        uVar9 = FUN_04af8368(lVar10,uVar9,DAT_091ca7f8);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar15 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar6 = puVar15[0x4f];
        if (lVar6 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar15 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar19 = *puVar15;
          lVar6 = thunk_FUN_03f9944c(DAT_09178628);
          FUN_05322d94(lVar6,uVar19,DAT_091e7618,0);
          lVar7 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar7 + 0x278) = lVar6;
          thunk_FUN_03f5d7b8(lVar7 + 0x278,lVar6);
        }
        uVar8 = FUN_04ab300c(uVar9,lVar6,DAT_091c9268);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_04456714;
          FUN_057e2274(*(long *)(param_1 + 0x98),*plVar20,DAT_091b24f0);
          if (*plVar20 == 0) goto LAB_04456714;
          CookingGraph_CookingLevelSimulation__Emit
                    (param_1,5,*(undefined4 *)(*plVar20 + 0x10),DAT_091f5700,0);
          lVar6 = *plVar20;
          if (lVar6 == 0) goto LAB_04456714;
          if (*(double *)(lVar6 + 0x40) <= 1e-08) {
            CookingGraph_CookingLevelSimulation__LeaveCustomer(param_1);
            goto LAB_0445664c;
          }
          *(double *)(lVar6 + 0x48) = *(double *)(lVar6 + 0x40);
          lVar7 = DAT_091b24e0;
          lVar10 = *(long *)(param_1 + 0xa8);
          if (lVar10 == 0) goto LAB_04456714;
          lVar22 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar22 == 0) goto LAB_04456714;
          uVar12 = *(uint *)(lVar10 + 0x18);
          if (uVar12 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar12 + 1;
            plVar20 = (long *)(lVar22 + (long)(int)uVar12 * 8 + 0x20);
            *plVar20 = lVar6;
            thunk_FUN_03f5d7b8(plVar20);
          }
          else {
            FUN_057e0c68(lVar10,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      else {
        CookingGraph_CookingLevelSimulation__StaffAddress(&local_d0);
        pplStack_128 = pplStack_c8;
        local_130 = local_d0;
        local_120 = local_c0;
        if ((*plVar20 == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_04456714;
        uVar8 = FUN_053d750c(*(long *)(param_1 + 0x58),*(undefined4 *)(*plVar20 + 0x10),DAT_091a82c0
                            );
        if ((uVar8 & 1) == 0) {
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_04456714;
          uVar9 = CookingGraph_Execution_CookingExecution__get_Transfers
                            (*(long *)(param_1 + 0x178),0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar15 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar6 = puVar15[0x4c];
          if (lVar6 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar15 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar19 = *puVar15;
            lVar6 = thunk_FUN_03f9944c(DAT_09178730);
            FUN_05322d94(lVar6,uVar19,DAT_091e7620,0);
            lVar7 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar7 + 0x260) = lVar6;
            thunk_FUN_03f5d7b8(lVar7 + 0x260,lVar6);
          }
          uVar8 = FUN_04ab6f28(uVar9,lVar6,DAT_091c9458);
          if ((uVar8 & 1) != 0) goto LAB_0445664c;
          uVar19 = *(undefined8 *)(param_1 + 0xe8);
          uVar9 = thunk_FUN_03f9944c(DAT_09178b98);
          FUN_05315754(uVar9,param_1,DAT_091c66c8,0);
          uVar9 = FUN_04b0c1f0(uVar19,uVar9,DAT_091cb4e8);
          if (*plVar20 == 0) goto LAB_04456714;
          uVar9 = FUN_04b028e0(uVar9,*(undefined4 *)(*plVar20 + 0x14),DAT_091cabd8);
          lVar6 = FUN_04b0462c(uVar9,DAT_091cae30);
          lVar7 = thunk_FUN_03f9944c(DAT_0917bf78);
          FUN_05744974(lVar7,DAT_091ac088);
          if (lVar6 == 0) goto LAB_04456714;
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar8 = 0;
            uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar8) goto LAB_0445672c;
              uVar1 = *(undefined4 *)(lVar6 + uVar8 * 4 + 0x20);
              CookingGraph_CookingLevelSimulation__GridAddress(&local_d0,uVar1);
              pplStack_148 = pplStack_c8;
              local_150 = local_d0;
              local_140 = local_c0;
              if (*(long *)(param_1 + 0x178) == 0) goto LAB_04456714;
              pplStack_168 = pplStack_c8;
              local_170 = local_d0;
              local_160 = local_c0;
              uVar9 = CookingGraph_Execution_CookingExecution__UnitsAt
                                (*(long *)(param_1 + 0x178),&local_170,0);
              lVar10 = FUN_04b0451c(uVar9,DAT_091cadc0);
              if (lVar10 == 0) goto LAB_04456714;
              uVar12 = (uint)*(ulong *)(lVar10 + 0x18);
              uVar13 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
              if (0 < (int)uVar12) {
                uVar21 = 0;
                puVar15 = (undefined8 *)(lVar10 + 0x20);
                do {
                  if (uVar13 <= uVar21) goto LAB_0445672c;
                  if (*(long *)(param_1 + 0x178) == 0) goto LAB_04456714;
                  pplStack_188 = pplStack_148;
                  local_190 = local_150;
                  local_180 = local_140;
                  CookingGraph_Execution_CookingExecution__Consume
                            (*(long *)(param_1 + 0x178),&local_190,*puVar15,0);
                  uVar12 = *(uint *)(lVar10 + 0x18);
                  uVar13 = (ulong)uVar12;
                  uVar21 = uVar21 + 1;
                  puVar15 = puVar15 + 3;
                } while ((long)uVar21 < (long)(int)uVar12);
              }
              if (uVar12 == 0) goto LAB_0445672c;
              uVar2 = *(undefined4 *)(lVar10 + 0x28);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar15 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar22 = puVar15[0x4e];
              if (lVar22 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar15 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar9 = *puVar15;
                lVar22 = thunk_FUN_03f9944c(DAT_09178770);
                FUN_05313d88(lVar22,uVar9,DAT_091e7630,0);
                lVar14 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar14 + 0x270) = lVar22;
                thunk_FUN_03f5d7b8(lVar14 + 0x270,lVar22);
              }
              uVar4 = FUN_04b02574(lVar10,lVar22,DAT_091cab48);
              lVar10 = *(long *)(param_1 + 0x158);
              pplStack_c8 = (long **)0x0;
              local_c0 = 0;
              *(long *)(param_1 + 0x158) = lVar10 + 1;
              local_d0 = 0;
              CookingGraph_Execution_CookingUnit___ctor(&local_d0,lVar10,uVar2,1,uVar4,0);
              uVar9 = local_d0;
              lVar22 = *(long *)(param_1 + 0x178);
              uStack_88 = local_c0;
              local_90 = pplStack_c8;
              lVar10 = FUN_03f5c394(DAT_0917fda0,1);
              if (lVar10 == 0) goto LAB_04456714;
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0445672c;
              *(undefined8 *)(lVar10 + 0x20) = uVar9;
              *(undefined8 *)(lVar10 + 0x30) = uStack_88;
              *(long ***)(lVar10 + 0x28) = local_90;
              if (lVar22 == 0) goto LAB_04456714;
              pplStack_1a8 = pplStack_148;
              local_1b0 = local_150;
              local_1a0 = local_140;
              CookingGraph_Execution_CookingExecution__Produce(lVar22,&local_1b0,lVar10,0);
              pplStack_208 = pplStack_148;
              local_210 = local_150;
              local_200 = local_140;
              pplStack_228 = pplStack_128;
              local_230 = local_130;
              local_220 = local_120;
              local_1c0 = 0;
              uStack_1d8 = 0;
              local_1e0 = 0;
              uStack_1c8 = 0;
              local_1d0 = 0;
              pplStack_1e8 = (long **)0x0;
              local_1f0 = 0;
              CookingGraph_Execution_CookingTransferRequest___ctor
                        (&local_1f0,&local_210,&local_230,uVar9,0);
              if (lVar7 == 0) goto LAB_04456714;
              lVar10 = *(long *)(lVar7 + 0x10);
              uStack_e8 = uStack_1c8;
              local_f0 = local_1d0;
              pplStack_108 = pplStack_1e8;
              local_110 = local_1f0;
              uStack_f8 = uStack_1d8;
              uStack_100 = local_1e0;
              local_e0 = local_1c0;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_04456714;
              uVar12 = *(uint *)(lVar7 + 0x18);
              if (uVar12 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar12 * 0x38;
                *(uint *)(lVar7 + 0x18) = uVar12 + 1;
                *(long ***)(lVar10 + 0x28) = pplStack_1e8;
                *(undefined8 *)(lVar10 + 0x20) = local_1f0;
                *(undefined8 *)(lVar10 + 0x38) = uStack_1d8;
                *(undefined8 *)(lVar10 + 0x30) = local_1e0;
                *(undefined8 *)(lVar10 + 0x48) = uStack_1c8;
                *(undefined8 *)(lVar10 + 0x40) = local_1d0;
                *(undefined8 *)(lVar10 + 0x50) = local_1c0;
                thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
              }
              else {
                pplStack_c8 = pplStack_1e8;
                local_d0 = local_1f0;
                uStack_b8 = uStack_1d8;
                local_c0 = local_1e0;
                uStack_a8 = uStack_1c8;
                local_b0 = local_1d0;
                local_a0 = local_1c0;
                FUN_057452c4(lVar7,&local_d0,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_091ac090 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(param_1 + 0xe8) == 0) goto LAB_04456714;
              FUN_05798784(*(long *)(param_1 + 0xe8),uVar1,DAT_091adcd8);
              uVar8 = uVar8 + 1;
              uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
          if ((*plVar20 == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_04456714;
          FUN_053d8048(*(long *)(param_1 + 0x58),*(undefined4 *)(*plVar20 + 0x10),DAT_091a82b0);
          CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar7,0,0,0,0);
        }
        pplStack_248 = pplStack_128;
        local_250 = local_130;
        local_240 = local_120;
        uVar8 = CookingGraph_CookingLevelSimulation__Incoming(param_1,&local_250);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_04456714;
          pplStack_268 = pplStack_128;
          local_270 = local_130;
          local_260 = local_120;
          plVar11 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                      (*(long *)(param_1 + 0x178),&local_270,0);
          if (plVar11 == (long *)0x0) goto LAB_04456714;
          lVar6 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_0917a480) {
                puVar15 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_04456430;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a480,0);
LAB_04456430:
          local_158 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
          pplStack_108 = &local_158;
          local_110 = 0;
          if (local_158 != (long *)0x0) {
            do {
              plVar11 = local_158;
              lVar6 = *local_158;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == DAT_09185b10) {
                    puVar15 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0445649c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar8 != 0);
              }
              puVar15 = (undefined8 *)FUN_03f95da8(local_158,DAT_09185b10,0);
LAB_0445649c:
              uVar8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
              plVar11 = local_158;
              if ((uVar8 & 1) == 0) goto LAB_0445655c;
              if (local_158 == (long *)0x0) {
                if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_04456788;
              }
              lVar6 = *local_158;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == DAT_0917ab28) {
                    puVar15 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_04456500;
                  }
                  uVar8 = uVar8 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar8 != 0);
              }
              puVar15 = (undefined8 *)FUN_03f95da8(local_158,DAT_0917ab28,0);
LAB_04456500:
              (*(code *)*puVar15)(&local_d0,plVar11,puVar15[1]);
              if (*(long *)(param_1 + 0x178) == 0) {
                if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_04456788;
              }
              pplStack_288 = pplStack_128;
              local_290 = local_130;
              local_280 = local_120;
              CookingGraph_Execution_CookingExecution__Consume
                        (*(long *)(param_1 + 0x178),&local_290,local_d0,0);
              if (local_158 == (long *)0x0) break;
            } while( true );
          }
          if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_04456788;
        }
      }
      goto LAB_0445664c;
    }
LAB_044566dc:
    if (*(long *)(lVar3 + 0x28) == local_78) {
      return;
    }
  }
LAB_04456788:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0445655c:
  if (local_158 != (long *)0x0) {
    lVar6 = *local_158;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09185a58) {
          puVar15 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_044565dc;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar15 = (undefined8 *)FUN_03f95da8(local_158,DAT_09185a58,0);
LAB_044565dc:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  if (*(long *)(param_1 + 0x98) == 0) goto LAB_04456714;
  FUN_057e2274(*(long *)(param_1 + 0x98),*plVar20,DAT_091b24f0);
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  if (*plVar20 == 0) goto LAB_04456714;
  CookingGraph_CookingLevelSimulation__Emit
            (param_1,5,*(undefined4 *)(*plVar20 + 0x10),DAT_0920d890,0);
LAB_0445664c:
  uVar18 = uVar18 + 1;
  if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar18) goto LAB_044566dc;
  goto LAB_04455b58;
}

