// rea decompile_all
// name: IngameDebugConsole.DebugLogRecycledListView$$UpdateLogItemContentsBetweenIndices
// address: 0x733edbc
// body: available
// range: 0x733edbc-0x733ef87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733ef84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogRecycledListView__UpdateLogItemContentsBetweenIndices
               (long param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0952067f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1c20);
    FUN_03f5c2a4(&DAT_091a1ba0);
    FUN_03f5c2a4(&DAT_091a1bd8);
    FUN_03f5c2a4(&DAT_091b6ca0);
    DAT_0952067f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_2 <= param_3) {
    do {
      uVar1 = local_b0;
      uVar2 = uStack_a8;
      uVar3 = local_a0;
      if (*(long *)(param_1 + 0x98) == 0) {
LAB_0733ef84:
        local_a0 = uVar3;
        uStack_a8 = uVar2;
        local_b0 = uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = FUN_070dd0c0(*(long *)(param_1 + 0x98),param_2 - param_4,DAT_091a1c20);
      uVar1 = local_b0;
      uVar2 = uStack_a8;
      uVar3 = local_a0;
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_0733ef84;
      uVar8 = FUN_070dd0c0(*(long *)(param_1 + 0x78),param_2,DAT_091a1ba0);
      if (*(long *)(param_1 + 0x80) == 0) {
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uVar4 = local_80;
        uVar5 = uStack_78;
        uVar6 = local_70;
        uVar1 = local_b0;
        uVar2 = uStack_a8;
        uVar3 = local_a0;
      }
      else {
        auVar9 = FUN_070dc78c(*(long *)(param_1 + 0x80),param_2,DAT_091a1bd8);
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        FUN_05c2cf9c(&local_98,auVar9._0_8_,auVar9._8_8_,DAT_091b6ca0);
        uVar4 = local_98;
        uVar5 = uStack_90;
        uVar6 = local_88;
        uVar1 = local_b0;
        uVar2 = uStack_a8;
        uVar3 = local_a0;
      }
      local_a0 = uVar6;
      uStack_a8 = uVar5;
      local_b0 = uVar4;
      local_80 = local_b0;
      uStack_78 = uStack_a8;
      local_70 = local_a0;
      if (lVar7 == 0) goto LAB_0733ef84;
      IngameDebugConsole_DebugLogItem__SetContent
                (lVar7,uVar8,&local_b0,param_2,param_2 == *(int *)(param_1 + 0x90));
      IngameDebugConsole_DebugLogRecycledListView__RepositionLogItem(param_1,lVar7);
      IngameDebugConsole_DebugLogRecycledListView__ColorLogItem(param_1,lVar7);
      if (*(char *)(param_1 + 0xa0) == '\0') {
        IngameDebugConsole_DebugLogItem__HideCount(lVar7);
      }
      else {
        IngameDebugConsole_DebugLogItem__ShowCount(lVar7);
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return;
}

