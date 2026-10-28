// rea decompile_all
// name: Interop.Sys$$CopyFile
// address: 0x74116c0
// body: available
// range: 0x74116c0-0x7411773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7411770 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Interop_Sys__CopyFile(long param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char local_28 [4];
  char local_24 [4];
  
  if (param_1 == 0) {
    pcVar2 = "source";
  }
  else {
    local_24[0] = '\0';
    System_Runtime_InteropServices_SafeHandle__DangerousAddRef(param_1,local_24,0);
    if (param_2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      local_28[0] = '\0';
      System_Runtime_InteropServices_SafeHandle__DangerousAddRef(param_2,local_28,0);
      uVar1 = SystemNative_CopyFile(uVar3,*(undefined8 *)(param_2 + 0x10));
      thunk_FUN_03faced8();
      if (local_24[0] != '\0') {
        System_Runtime_InteropServices_SafeHandle__DangerousRelease(param_1,0);
      }
      if (local_28[0] != '\0') {
        System_Runtime_InteropServices_SafeHandle__DangerousRelease(param_2,0);
      }
      return uVar1;
    }
    pcVar2 = "destination";
  }
  uVar3 = thunk_FUN_03fa6794(pcVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,0);
}

