// rea decompile_all
// name: System.Text.StringBuilder$$ThreadSafeCopy
// address: 0x743e508
// body: available
// range: 0x743e508-0x743e66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743e5d0 to 0x742e984 System.String$$wstrcpy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x743e5e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e664 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e668 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__ThreadSafeCopy
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521076 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521076 = 1;
  }
  if (0 < param_6) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((uVar1 < param_2) || ((int)(uVar1 - param_2) < param_6)) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      puVar4 = &DAT_09222fd0;
    }
    else {
      if ((param_5 <= (uint)param_4) && (param_6 <= (int)((uint)param_4 - param_5))) {
        if (param_2 < uVar1) {
          lVar2 = FUN_04c072b8(param_3,param_4,DAT_091d3038);
          System_String__wstrcpy
                    (lVar2 + (long)(int)param_5 * 2,param_1 + (long)(int)param_2 * 2 + 0x20,param_6,
                     0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      puVar4 = &DAT_0921a5e0;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar4);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092049a8);
    System_ArgumentOutOfRangeException___ctor(uVar3,uVar5,uVar6,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091da478);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar5);
  }
  return;
}

