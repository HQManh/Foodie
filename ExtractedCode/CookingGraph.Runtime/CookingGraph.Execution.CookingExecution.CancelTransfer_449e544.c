// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$CancelTransfer
// address: 0x449e544
// body: available
// range: 0x449e544-0x449e6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449e6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_Execution_CookingExecution__CancelTransfer(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095181c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_091b23f8);
    FUN_03f5c2a4(&DAT_091b2408);
    FUN_03f5c2a4(&DAT_0917e138);
    FUN_03f5c2a4(&DAT_091e6d38);
    FUN_03f5c2a4(&DAT_0918ef68);
    DAT_095181c3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918ef68);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    uVar2 = thunk_FUN_03f9944c(DAT_0917e138);
    FUN_05d78cfc(uVar2,lVar1,DAT_091e6d38,0);
    if (lVar3 != 0) {
      lVar1 = FUN_057e1328(lVar3,uVar2,DAT_091b23f8);
      if (lVar1 == 0) {
LAB_0449e6a0:
        return lVar1 != 0;
      }
      CookingGraph_Execution_CookingExecution__RemoveSource(param_1,lVar1);
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_057e2274(*(long *)(param_1 + 0x38),lVar1,DAT_091b2408);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_053e19f4(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x18),DAT_091a8330);
          CookingGraph_Execution_CookingExecution__PruneWaves(param_1);
          uStack_48 = *(undefined8 *)(lVar1 + 0x50);
          local_50 = *(undefined8 *)(lVar1 + 0x48);
          local_40 = *(undefined8 *)(lVar1 + 0x58);
          CookingGraph_Execution_CookingExecution__Emit
                    (param_1,8,&local_50,*(undefined8 *)(lVar1 + 0x10));
          goto LAB_0449e6a0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

