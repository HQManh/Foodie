// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CloseMoments
// address: 0x4442134
// body: available
// range: 0x4442134-0x4442503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44424fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4442500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__CloseMoments(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if ((DAT_09517ff3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e508);
    FUN_03f5c2a4(&DAT_0919f1c8);
    FUN_03f5c2a4(&DAT_0919e520);
    FUN_03f5c2a4(&DAT_0919e530);
    FUN_03f5c2a4(&DAT_0919f1e0);
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091caed0);
    FUN_03f5c2a4(&DAT_091cb4f0);
    FUN_03f5c2a4(&DAT_09178c20);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091e7610);
    FUN_03f5c2a4(&DAT_091e7d08);
    FUN_03f5c2a4(&DAT_0918f480);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09517ff3 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f480);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass20_0___ctor(lVar2,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_06fd811c(*(long *)(param_1 + 0x18),DAT_0919f1e0);
    lVar4 = FUN_04b049e4(uVar3,DAT_091caed0);
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar8 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar8) goto LAB_044424fc;
          uVar3 = *(undefined8 *)(lVar4 + 0x20 + uVar8 * 8);
          uVar6 = CookingGraph_CookingLevelSimulation__MomentInFlight(param_1,uVar3);
          if ((uVar6 & 1) == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_04442500;
            FUN_06fd9970(*(long *)(param_1 + 0x18),uVar3,DAT_0919f1c8);
            *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
            *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
          }
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar1 = FUN_06f53068(*(long *)(param_1 + 0x10),DAT_0919e520);
        if (iVar1 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x178) != 0) {
          uVar3 = CookingGraph_Execution_CookingExecution__get_Transfers
                            (*(long *)(param_1 + 0x178),0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar4 = puVar7[8];
          if (lVar4 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar9 = *puVar7;
            lVar4 = thunk_FUN_03f9944c(DAT_09178748);
            FUN_05323c00(lVar4,uVar9,DAT_091e7610,0);
            plVar5 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x40);
            *plVar5 = lVar4;
            thunk_FUN_03f5d7b8(plVar5,lVar4);
          }
          uVar3 = FUN_04af73b4(uVar3,lVar4,DAT_091ca398);
          uVar9 = thunk_FUN_03f9944c(DAT_09179e20);
          FUN_053e1208(uVar9,uVar3,DAT_091a8300);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x10) = uVar9;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),uVar9);
            if (*(long *)(param_1 + 0x10) != 0) {
              uVar3 = FUN_06f53078(*(long *)(param_1 + 0x10),DAT_0919e530);
              lVar4 = *(long *)(lVar2 + 0x18);
              if (lVar4 == 0) {
                lVar4 = thunk_FUN_03f9944c(DAT_09178c20);
                FUN_05317590(lVar4,lVar2,DAT_091e7d08,0);
                *(long *)(lVar2 + 0x18) = lVar4;
                thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),lVar4);
              }
              uVar3 = FUN_04b0c7f8(uVar3,lVar4,DAT_091cb4f0);
              lVar2 = FUN_04b0473c(uVar3,DAT_091cae38);
              if (lVar2 != 0) {
                if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
                  return;
                }
                uVar8 = 0;
                uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
                do {
                  if (uVar6 <= uVar8) {
LAB_044424fc:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (*(long *)(param_1 + 0x10) == 0) break;
                  FUN_06f54860(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar2 + 0x20 + uVar8 * 8),
                               DAT_0919e508);
                  uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
                  uVar8 = uVar8 + 1;
                  if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar8) {
                    return;
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
LAB_04442500:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

