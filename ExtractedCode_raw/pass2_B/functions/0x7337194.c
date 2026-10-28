// rea decompile_all
// name: IngameDebugConsole.DebugLogEntryTimestamp$$AppendTime
// address: 0x7337194
// body: available
// range: 0x7337194-0x7337367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7337360 to 0x743e010 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7337364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogEntryTimestamp__AppendTime(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((DAT_09520647 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09520647 = 1;
  }
  if (param_2 != 0) {
    System_Text_StringBuilder__Append(param_2,DAT_092139f8,0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_DateTime__get_Hour(param_1,0);
    lVar2 = param_2;
    if ((9 < iVar1) ||
       (lVar2 = System_Text_StringBuilder__Append(param_2,DAT_091f95f0,0), lVar2 != 0)) {
      System_Text_StringBuilder__Append(lVar2,iVar1,0);
      System_Text_StringBuilder__Append(param_2,DAT_091f9f58,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_DateTime__get_Minute(param_1,0);
      lVar2 = param_2;
      if ((9 < iVar1) ||
         (lVar2 = System_Text_StringBuilder__Append(param_2,DAT_091f95f0,0), lVar2 != 0)) {
        System_Text_StringBuilder__Append(lVar2,iVar1,0);
        System_Text_StringBuilder__Append(param_2,DAT_091f9f58,0);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = System_DateTime__get_Second(param_1,0);
        lVar2 = param_2;
        if ((9 < iVar1) ||
           (lVar2 = System_Text_StringBuilder__Append(param_2,DAT_091f95f0,0), lVar2 != 0)) {
          System_Text_StringBuilder__Append(lVar2,iVar1,0);
          System_Text_StringBuilder__Append(param_2,DAT_09214720,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

