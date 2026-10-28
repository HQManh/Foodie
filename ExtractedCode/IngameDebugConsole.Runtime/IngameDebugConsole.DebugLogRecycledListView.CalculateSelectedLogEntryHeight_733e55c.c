// rea decompile_all
// name: IngameDebugConsole.DebugLogRecycledListView$$CalculateSelectedLogEntryHeight
// address: 0x733e55c
// body: available
// range: 0x733e55c-0x733e6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733e6d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogRecycledListView__CalculateSelectedLogEntryHeight
               (long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0952067c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1c18);
    FUN_03f5c2a4(&DAT_091a1c20);
    FUN_03f5c2a4(&DAT_091a1bd8);
    FUN_03f5c2a4(&DAT_091b6ca0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0952067c = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x98);
    if (lVar3 == 0) goto LAB_0733e6d8;
    if (*(int *)(lVar3 + 0x1c) == 0) {
      IngameDebugConsole_DebugLogRecycledListView__UpdateItemsInTheList(param_1,0);
      lVar3 = *(long *)(param_1 + 0x98);
      if (lVar3 == 0) goto LAB_0733e6d8;
      if (*(int *)(lVar3 + 0x1c) == 0) {
        return;
      }
    }
    param_2 = FUN_070dd0c0(lVar3,0,DAT_091a1c20);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x80) == 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_80 = local_50;
    uStack_78 = uStack_48;
    local_70 = local_40;
  }
  else {
    auVar5 = FUN_070dc78c(*(long *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x90),DAT_091a1bd8);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_05c2cf9c(&local_68,auVar5._0_8_,auVar5._8_8_,DAT_091b6ca0);
    local_80 = local_68;
    uStack_78 = uStack_60;
    local_70 = local_58;
  }
  local_50 = local_80;
  uStack_48 = uStack_78;
  local_40 = local_70;
  if (param_2 != 0) {
    uVar4 = IngameDebugConsole_DebugLogItem__CalculateExpandedHeight(param_2,uVar1,&local_80);
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    return;
  }
LAB_0733e6d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

