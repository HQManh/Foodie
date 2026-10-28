// rea decompile_all
// name: System.ConsoleKeyInfo$$.ctor
// address: 0x75d6ee0
// body: available
// range: 0x75d6ee0-0x75d6f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d6f70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_ConsoleKeyInfo___ctor
               (undefined2 *param_1,undefined2 param_2,uint param_3,ulong param_4,uint param_5,
               uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_3 < 0x100) {
    *param_1 = param_2;
    uVar5 = 2;
    if ((param_4 & 1) == 0) {
      uVar5 = 0;
    }
    uVar5 = uVar5 | param_5 & 1;
    uVar1 = uVar5 | 4;
    if ((param_6 & 1) == 0) {
      uVar1 = uVar5;
    }
    *(uint *)(param_1 + 2) = param_3;
    *(uint *)(param_1 + 4) = uVar1;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_0921df98);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091feef8);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c5e30);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

