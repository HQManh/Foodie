// rea decompile_all
// name: System.String$$FormatHelper
// address: 0x7430af0
// body: available
// range: 0x7430af0-0x7430beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7430be4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7430be8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__FormatHelper(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0952101b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188e78);
    DAT_0952101b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921ba70);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091da2d0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (*(int *)(DAT_09188e78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = System_ParamsArray__get_Length(param_3,0);
  lVar3 = System_Text_StringBuilderCache__Acquire(iVar1 + iVar2 * 8,0);
  if (lVar3 != 0) {
    uStack_48 = param_3[1];
    local_50 = *param_3;
    uStack_38 = param_3[3];
    uStack_40 = param_3[2];
    uVar4 = System_Text_StringBuilder__AppendFormatHelper(lVar3,param_1,param_2,&local_50,0);
    System_Text_StringBuilderCache__GetStringAndRelease(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

