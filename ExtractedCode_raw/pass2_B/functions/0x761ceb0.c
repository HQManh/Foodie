// rea decompile_all
// name: System.Threading.CancellationTokenSource$$CancelAfter
// address: 0x761ceb0
// body: available
// range: 0x761ceb0-0x761d017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761d00c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761d010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761d014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_CancellationTokenSource__CancelAfter(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09522102 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_0918be00);
    DAT_09522102 = 1;
  }
  System_Threading_CancellationTokenSource__ThrowIfDisposed(param_1);
  if (param_2 < -1) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921f688);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c4890);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar3);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  thunk_FUN_03f6a5cc();
  if (iVar1 < 2) {
    plVar4 = (long *)(param_1 + 0x38);
    lVar5 = *plVar4;
    thunk_FUN_03f6a5cc();
    if (lVar5 == 0) {
      if (*(int *)(DAT_09182368 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = *(undefined8 *)(*(long *)(DAT_09182368 + 0xb8) + 0x18);
      lVar5 = thunk_FUN_03f9944c(DAT_0918be00);
      System_Threading_Timer___ctor(lVar5,uVar6,param_1,0xffffffff,0xffffffff,0);
      thunk_FUN_03f6a5cc();
      lVar2 = FUN_03f955cc(plVar4,lVar5,0);
      if (lVar2 != 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Threading_Timer__Dispose(lVar5,0);
      }
    }
    lVar5 = *plVar4;
    thunk_FUN_03f6a5cc();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Threading_Timer__Change(lVar5,param_2,0xffffffff,0);
  }
  return;
}

