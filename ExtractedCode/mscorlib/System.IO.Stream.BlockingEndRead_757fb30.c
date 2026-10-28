// rea decompile_all
// name: System.IO.Stream.SynchronousAsyncResult$$EndRead
// address: 0x757fb30
// body: available
// range: 0x757fb30-0x757fb33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_IO_Stream_SynchronousAsyncResult__EndRead(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((DAT_09521ae3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194c08);
    DAT_09521ae3 = 1;
  }
  if (((param_1 == (long *)0x0) || (*param_1 != DAT_09194c08)) || ((char)param_1[3] != '\0')) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09204210;
  }
  else {
    if ((char)param_1[6] == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
      if (param_1[5] != 0) {
        System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(param_1[5],0);
      }
      return *(undefined4 *)((long)param_1 + 0x34);
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_092014a8;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentException___ctor(uVar1,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091f05b0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar3);
}

