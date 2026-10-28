// rea decompile_all
// name: System.Threading.CancellationTokenSource$$CreateLinkedTokenSource
// address: 0x761df40
// body: available
// range: 0x761df40-0x761e097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761dfec to 0x761db20 System.Threading.CancellationTokenSource$$CreateLinkedTokenSource (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x761e018 to 0x761de74 System.Threading.CancellationTokenSource$$CreateLinkedTokenSource (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x761e094 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Threading_CancellationTokenSource__CreateLinkedTokenSource(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_0952210c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_0918eb20);
    DAT_0952210c = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_092240b0);
    System_ArgumentNullException___ctor(uVar3,uVar2,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(DAT_09182368 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource(uVar2);
      return uVar2;
    }
    if (iVar1 == 2) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09182368 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource(uVar2,uVar3);
      return uVar2;
    }
    if (iVar1 != 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_0918eb20);
      System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource___ctor(uVar2,param_1);
      return uVar2;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_09208cb8);
    System_ArgumentException___ctor(uVar3,uVar2,0);
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c48a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

