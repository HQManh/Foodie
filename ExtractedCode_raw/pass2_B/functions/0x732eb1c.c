// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$SearchAssemblyForConsoleMethods
// address: 0x732eb1c
// body: available
// range: 0x732eb1c-0x732ed5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732ed3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ed5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole__SearchAssemblyForConsoleMethods(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  if ((DAT_0952060c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091712c8);
    FUN_03f5c2a4(&DAT_09182a48);
    FUN_03f5c2a4(&DAT_09183668);
    DAT_0952060c = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(uint *)(lVar4 + 0x18);
  if (0 < (int)uVar3) {
    uVar12 = 0;
    do {
      if (uVar3 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar5 = *(long **)(lVar4 + uVar12 * 8 + 0x20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = (**(code **)(*plVar5 + 0x7d8))(plVar5,0x1a,*(undefined8 *)(*plVar5 + 0x7e0));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar3) {
        uVar11 = 0;
        do {
          uVar7 = DAT_091712c8;
          if (uVar3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5 = *(long **)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar7,uVar7);
          }
          lVar8 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar7,0,*(undefined8 *)(*plVar5 + 0x220));
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar14 = 0;
            uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar9 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar10 = *(long **)(lVar8 + 0x20 + uVar14 * 8);
              if (plVar10 != (long *)0x0) {
                if ((*(byte *)(DAT_09182a48 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_09182a48 + 0x130) * 8
                             + -8) == DAT_09182a48)) {
                  lVar1 = plVar10[2];
                  lVar2 = plVar10[3];
                  lVar13 = plVar10[4];
                  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  IngameDebugConsole_DebugLogConsole__AddCommand(lVar1,lVar2,plVar5,0,lVar13);
                }
              }
              uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          uVar3 = *(uint *)(lVar6 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar3);
      }
      uVar3 = *(uint *)(lVar4 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar3);
  }
  return;
}

