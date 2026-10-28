// rea decompile_all
// name: System.Char$$ConvertFromUtf32
// address: 0x7521860
// body: available
// range: 0x7521860-0x7521957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75218fc to 0x742f628 System.String$$CreateFromChar (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7521954 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Char__ConvertFromUtf32(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_14;
  
  local_14 = 0;
  if (((uint)(param_1 >> 0x10) & 0xffff) < 0x11) {
    if ((int)param_1 - 0xe000U < 0xfffff800) {
      if ((param_1 & 0xffff0000) != 0) {
        local_14 = CONCAT22((short)param_1,(short)((int)param_1 + 0x3ff0000U >> 10) + -0x2800) &
                   0x3ffffff | 0xdc000000;
        System_String__CreateString(0,&local_14,0,2,0);
        return;
      }
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_String__CreateFromChar(param_1 & 0xffffffff,0);
      return;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar1 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_092252a8);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091fb098);
  System_ArgumentOutOfRangeException___ctor(uVar1,uVar2,uVar3);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c4a10);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

