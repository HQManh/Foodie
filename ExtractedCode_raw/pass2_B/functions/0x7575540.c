// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$Initialize
// address: 0x7575540
// body: available
// range: 0x7575540-0x757572b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7575638 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7575728 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_UnmanagedMemoryStream__Initialize
               (long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09220e18);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
  }
  else {
    if ((long)(param_4 | param_3) < 0) {
      puVar1 = (undefined8 *)&DAT_092188d0;
      if ((long)param_3 < 0) {
        puVar1 = &DAT_0921e638;
      }
      uVar5 = thunk_FUN_03fc39d4(puVar1);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091ddfd0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    if (param_4 < param_3) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_0921e638);
      puVar2 = &DAT_0920f770;
    }
    else if (CARRY8(param_2,param_4)) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_092188d0);
      puVar2 = &DAT_0920f018;
    }
    else {
      if (param_5 - 1U < 3) {
        if (*(char *)(param_1 + 0x5c) == '\0') {
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(ulong *)(param_1 + 0x30) = param_2;
          *(ulong *)(param_1 + 0x38) = param_3;
          *(ulong *)(param_1 + 0x40) = param_4;
          *(int *)(param_1 + 0x58) = param_5;
          *(undefined1 *)(param_1 + 0x5c) = 1;
          return;
        }
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_0920f820);
        System_InvalidOperationException___ctor(uVar4,uVar5,0);
        goto LAB_07575714;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09217050);
      puVar2 = &DAT_09201678;
    }
    uVar3 = thunk_FUN_03fc39d4(puVar2);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  }
LAB_07575714:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091ddfd0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

