// rea decompile_all
// name: System.IO.FileStream$$.ctor
// address: 0x7585fe4
// body: available
// range: 0x7585fe4-0x7586183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758611c to 0x7586184 System.IO.FileStream$$Init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7586180 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream___ctor
               (long param_1,long param_2,undefined4 param_3,uint param_4,undefined4 param_5,
               uint param_6,uint param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09521b0e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188380);
    FUN_03f5c2a4(&DAT_0918a508);
    FUN_03f5c2a4(&DAT_0918b308);
    FUN_03f5c2a4(&DAT_092144d8);
    DAT_09521b0e = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = DAT_092144d8;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_0918b308 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_MarshalByRefObject___ctor(param_1,0);
  if (*(int *)(DAT_09188380 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09188380 + 0xb8) != param_2) {
    uVar1 = thunk_FUN_03f9944c(DAT_0918a508);
    Microsoft_Win32_SafeHandles_SafeFileHandle___ctor(uVar1,param_2,0,0);
    System_IO_FileStream__Init(param_1,uVar1,param_3,param_4 & 1,param_5,param_6 & 1,param_7 & 1);
    return;
  }
  uVar1 = thunk_FUN_03fc39d4(&DAT_09205c00);
  uVar1 = Locale__GetText(uVar1,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_0921c958);
  System_ArgumentException___ctor(uVar2,uVar3,uVar1,0);
  uVar1 = thunk_FUN_03fc39d4(&DAT_091cc240);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar1);
}

