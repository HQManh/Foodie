// rea decompile_all
// name: System.IO.File$$ReadAllBytesAsync
// address: 0x757aad4
// body: available
// range: 0x757aad4-0x757acf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757ace4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757acec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757acf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0757ace8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_IO_File__ReadAllBytesAsync(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_09521aa0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09186188);
    FUN_03f5c2a4(&DAT_091dad78);
    FUN_03f5c2a4(&DAT_091dada0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0920f568);
    DAT_09521aa0 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_28,0);
  uVar3 = local_28;
  if ((uVar2 & 1) == 0) {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09184580);
    System_IO_FileStream___ctor(plVar4,param_1,3,1,1,1,0,0x48000000);
    bVar1 = false;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
    if (lVar5 < 0x80000000) {
      bVar1 = true;
      if (lVar5 < 1) {
        uVar3 = System_IO_File__InternalReadAllBytesUnknownLengthAsync(plVar4,local_28);
      }
      else {
        uVar3 = System_IO_File__InternalReadAllBytesAsync();
      }
    }
    else {
      uVar3 = thunk_FUN_03f9944c(DAT_09186188);
      System_IO_IOException___ctor(uVar3,DAT_0920f568,0);
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = FUN_04d819d4(uVar3,DAT_091dada0);
    }
    if (!bVar1) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
    }
  }
  else {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = FUN_04d76424(uVar3,DAT_091dad78);
  }
  return uVar3;
}

