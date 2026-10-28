// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReleaseQueueHolds
// address: 0x445ef80
// body: available
// range: 0x445ef80-0x445f3f7 inclusive
// range: 0x445f3fc-0x445f3ff inclusive
// range: 0x445f44c-0x445f4b3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445f3f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445f3fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445f4ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445f4b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ReleaseQueueHolds(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09518036 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091caf60);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091cb628);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_09179420);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091b25b8);
    FUN_03f5c2a4(&DAT_091b25c0);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    FUN_03f5c2a4(&DAT_091e7950);
    FUN_03f5c2a4(&DAT_091e7958);
    FUN_03f5c2a4(&DAT_091e7b18);
    FUN_03f5c2a4(&DAT_0918f328);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518036 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f328);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass118_0___ctor(lVar1,0);
  if (*(long *)(param_1 + 0xf0) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xf0) + 0x18) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      uVar2 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar7 = puVar6[0x69];
      if (lVar7 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar9 = *puVar6;
        lVar7 = thunk_FUN_03f9944c(DAT_09178730);
        FUN_05322d94(lVar7,uVar9,DAT_091e7950,0);
        lVar4 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar4 + 0x348) = lVar7;
        thunk_FUN_03f5d7b8(lVar4 + 0x348,lVar7);
      }
      uVar2 = FUN_04b0cafc(uVar2,lVar7,DAT_091cb460);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar7 = puVar6[0x6a];
      if (lVar7 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar9 = *puVar6;
        lVar7 = thunk_FUN_03f9944c(DAT_09178748);
        FUN_05323c00(lVar7,uVar9,DAT_091e7958,0);
        lVar4 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar4 + 0x350) = lVar7;
        thunk_FUN_03f5d7b8(lVar4 + 0x350,lVar7);
      }
      uVar2 = FUN_04af73b4(uVar2,lVar7,DAT_091ca398);
      uVar9 = thunk_FUN_03f9944c(DAT_09179e20);
      FUN_053e1208(uVar9,uVar2,DAT_091a8300);
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = uVar9;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),uVar9);
        uVar9 = *(undefined8 *)(param_1 + 0xf0);
        uVar2 = thunk_FUN_03f9944c(DAT_09179420);
        FUN_05322d94(uVar2,lVar1,DAT_091e7b18,0);
        uVar2 = FUN_04b0cafc(uVar9,uVar2,DAT_091cb628);
        lVar1 = FUN_04b049e4(uVar2,DAT_091caf60);
        if (lVar1 != 0) {
          uVar5 = *(ulong *)(lVar1 + 0x18);
          if (uVar5 == 0) {
            return;
          }
          if (0 < (int)uVar5) {
            uVar8 = 0;
            uVar5 = uVar5 & 0xffffffff;
            do {
              if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*(long *)(param_1 + 0xf0) == 0) goto LAB_0445f4ac;
              lVar7 = *(long *)(lVar1 + uVar8 * 8 + 0x20);
              FUN_057e2274(*(long *)(param_1 + 0xf0),lVar7,DAT_091b25b8);
              if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_0445f4ac;
              FUN_056aec8c(&local_98,*(long *)(lVar7 + 0x10),DAT_091aaa00);
              local_80 = local_98;
              local_98 = 0;
              puStack_78 = puStack_90;
              local_70 = local_88;
              puStack_90 = &local_80;
              while (uVar3 = FUN_07188168(&local_80,DAT_091a1f50), uVar5 = local_70,
                    (uVar3 & 1) != 0) {
                if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = FUN_057e0998(*(long *)(param_1 + 0x80),local_70 & 0xffffffff,DAT_091aa7e0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_057e09ec(lVar7,uVar5 >> 0x20,0,DAT_091b25a0);
              }
              FUN_07188164(&local_80,DAT_091a1f48);
              uVar5 = (ulong)*(uint *)(lVar1 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)*(uint *)(lVar1 + 0x18));
          }
          CookingGraph_CookingLevelSimulation__Gravity(param_1);
          uVar2 = DAT_091f5700;
          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
          *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
          CookingGraph_CookingLevelSimulation__Emit(param_1,1,0xffffffff,uVar2,0);
          return;
        }
      }
    }
  }
LAB_0445f4ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

