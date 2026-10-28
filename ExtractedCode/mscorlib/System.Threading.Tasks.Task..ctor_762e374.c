// rea decompile_all
// name: System.Threading.Tasks.Task$$.ctor
// address: 0x762e374
// body: available
// range: 0x762e374-0x762e49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762e450 to 0x762e49c System.Threading.Tasks.Task$$TaskConstructorCore (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x762e498 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task___ctor(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_095221cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221cf = 1;
  }
  System_Object___ctor(param_1,0);
  if ((param_3 & 0xffffffbb) == 0) {
    if ((param_3 >> 2 & 1) != 0) {
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09521581 == '\0') {
        FUN_03f5c2a4(&DAT_0918b8c8);
        DAT_09521581 = '\x01';
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar1 = (undefined8 *)FUN_03f5c2c0(DAT_0918b8c8);
      *(undefined8 *)(param_1 + 0x30) = *puVar1;
      thunk_FUN_03f5d7b8();
    }
    System_Threading_Tasks_Task__TaskConstructorCore(param_1,0,param_2,0,param_3,0x400,0);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09219d10);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091dae70);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

