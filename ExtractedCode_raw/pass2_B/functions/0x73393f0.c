// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$OnEnable
// address: 0x73393f0
// body: available
// range: 0x73393f0-0x73396bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73396b4 to 0x4a8a2ac FUN_04a8a2ac (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73396b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__OnEnable(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09520651 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091c7c50);
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_09183688);
    FUN_03f5c2a4(&DAT_091c7db8);
    FUN_03f5c2a4(&DAT_091c7dc8);
    FUN_03f5c2a4(&DAT_091c7dd0);
    FUN_03f5c2a4(&DAT_0918e4f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0920c768);
    FUN_03f5c2a4(&DAT_0920c770);
    FUN_03f5c2a4(&DAT_0921ebb8);
    DAT_09520651 = 1;
  }
  if (DAT_0952068d == '\0') {
    FUN_03f5c2a4(&DAT_09183690);
    DAT_0952068d = '\x01';
  }
  uVar4 = **(undefined8 **)(DAT_09183690 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,param_1,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar4 = thunk_FUN_03f9944c(DAT_0918e4f8);
    UnityEngine_Application_LogCallback___ctor(uVar4,param_1,DAT_091c7db8,0);
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Application__remove_logMessageReceivedThreaded(uVar4,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918e4f8);
    UnityEngine_Application_LogCallback___ctor(uVar4,param_1,DAT_091c7db8,0);
    UnityEngine_Application__add_logMessageReceivedThreaded(uVar4,0);
  }
  if (*(char *)(param_1 + 0x65) != '\0') {
    lVar3 = *(long *)(param_1 + 0x358);
    if (lVar3 == 0) {
      plVar1 = (long *)(param_1 + 0x358);
      lVar3 = thunk_FUN_03f9944c(DAT_09183688);
      IngameDebugConsole_DebugLogLogcatListener___ctor();
      *plVar1 = lVar3;
      thunk_FUN_03f5d7b8(plVar1,lVar3);
      lVar3 = *plVar1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    IngameDebugConsole_DebugLogLogcatListener__Start(lVar3,*(undefined8 *)(param_1 + 0x68));
  }
  uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar4,param_1,DAT_091c7dc8,0);
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  IngameDebugConsole_DebugLogConsole__AddCommand(DAT_0921ebb8,DAT_0920c768,uVar4);
  uVar4 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar4,param_1,DAT_091c7dd0,0);
  FUN_04a8a2ac(DAT_0921ebb8,DAT_0920c770,uVar4,DAT_091c7c50);
  return;
}

