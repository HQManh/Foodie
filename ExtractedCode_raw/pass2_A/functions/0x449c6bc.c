// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$CompleteReadyTransfers
// address: 0x449c6bc
// body: available
// range: 0x449c6bc-0x449c843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449c824 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__CompleteReadyTransfers(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_095181be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b23f8);
    FUN_03f5c2a4(&DAT_0917e138);
    FUN_03f5c2a4(&DAT_091e6c28);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181be = 1;
  }
  iVar7 = 500;
  do {
    CookingGraph_Execution_CookingExecution__AdvanceDepartures(param_1);
    lVar4 = *(long *)(param_1 + 0x38);
    if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
    lVar5 = puVar3[7];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
      }
      uVar6 = *puVar3;
      lVar5 = thunk_FUN_03f9944c(DAT_0917e138);
      FUN_05d78cfc(lVar5,uVar6,DAT_091e6c28,0);
      plVar1 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x38);
      *plVar1 = lVar5;
      thunk_FUN_03f5d7b8(plVar1,lVar5);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = FUN_057e1328(lVar4,lVar5,DAT_091b23f8);
    if (lVar4 == 0) {
      return;
    }
    CookingGraph_Execution_CookingExecution__CompleteTransfer
              (param_1,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(lVar4 + 0x10));
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar6 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_09210d68);
  System_InvalidOperationException___ctor(uVar6,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c6470);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar2);
}

