// rea decompile_all
// name: System.IO.Stream$$EndRead
// address: 0x757e3b8
// body: available
// range: 0x757e3b8-0x757e51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757e51c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_IO_Stream__EndRead(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_09521abf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bc3a8);
    FUN_03f5c2a4(&DAT_091bcc70);
    DAT_09521abf = 1;
  }
  local_30 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09217b08);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(long *)(param_1 + 0x18) != param_2) {
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar2 = thunk_FUN_03f9944c();
        uVar3 = thunk_FUN_03fc39d4(&DAT_092011a8);
        System_InvalidOperationException___ctor(uVar2,uVar3,0);
        goto LAB_0757e508;
      }
      if (*(char *)(param_2 + 0x54) != '\0') {
        local_30 = FUN_062ebc40(param_2,DAT_091bcc70);
        uVar1 = FUN_06209b30(&local_30,DAT_091bc3a8);
        System_IO_Stream__FinishTrackingAsyncOperation(local_28);
        return uVar1;
      }
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_092011a8);
    System_ArgumentException___ctor(uVar2,uVar3,0);
  }
LAB_0757e508:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da090);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

