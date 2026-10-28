// rea decompile_all
// name: Interop.Sys$$StrError
// address: 0x7411168
// body: available
// range: 0x7411168-0x7411263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7411260 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Interop_Sys__StrError(undefined4 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_450 [1032];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_09520f17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187dd0);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_09520f17 = 1;
  }
  memset(auStack_450,0,0x400);
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = (undefined1 *)SystemNative_StrErrorR(param_1,auStack_450,0x400);
  puVar1 = auStack_450;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
  }
  uVar4 = System_IntPtr__op_Explicit(puVar1,0);
  if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187dd0);
  }
  System_Runtime_InteropServices_Marshal__PtrToStringAnsi(uVar4,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

