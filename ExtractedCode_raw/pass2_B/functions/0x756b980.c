// rea decompile_all
// name: System.IO.StreamReader$$Read
// address: 0x756b980
// body: available
// range: 0x756b980-0x756bb0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756b9ec to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756ba0c to 0x756bb0c System.IO.StreamReader$$ReadSpan (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x756bac0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756bb08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamReader__Read(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09521a13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba958);
    DAT_09521a13 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)(param_4 | param_3) < 0) {
      puVar1 = &DAT_09219b28;
      if ((int)param_3 < 0) {
        puVar1 = &DAT_0921d350;
      }
      uVar5 = thunk_FUN_03fc39d4(puVar1);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar5,uVar4,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091da120);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar5);
    }
    uVar2 = *(uint *)(param_2 + 0x18) - param_3;
    if ((int)param_4 <= (int)uVar2) {
      if ((param_3 <= *(uint *)(param_2 + 0x18)) && (param_4 <= uVar2)) {
        System_IO_StreamReader__ReadSpan(param_1,param_2 + (ulong)param_3 * 2 + 0x20,param_4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
    System_ArgumentException___ctor(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091da120);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

