// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$RemoveOldestLogs
// address: 0x733ad50
// body: available
// range: 0x733ad50-0x733afab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733afa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__RemoveOldestLogs(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_0952065b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1b58);
    FUN_03f5c2a4(&DAT_091a1bd0);
    FUN_03f5c2a4(&DAT_091a1b90);
    FUN_03f5c2a4(&DAT_091a1b98);
    FUN_03f5c2a4(&DAT_091a1ba0);
    DAT_0952065b = 1;
  }
  if (param_2 < 1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x248);
  if (iVar3 < 0) {
LAB_0733adf0:
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x238);
    if (lVar4 == 0) goto LAB_0733afa8;
    if (*(int *)(lVar4 + 0x1c) <= iVar3) goto LAB_0733adf0;
    lVar4 = FUN_070dd0c0(lVar4,iVar3,DAT_091a1ba0);
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_0733afa8;
  FUN_070dd5f4(*(long *)(param_1 + 0x228),param_2,*(undefined8 *)(param_1 + 0x328),DAT_091a1b90);
  if (*(long *)(param_1 + 0x230) != 0) {
    FUN_070dcc98(*(long *)(param_1 + 0x230),param_2,0,DAT_091a1bd0);
  }
  if (0 < *(int *)(param_1 + 0x2d4)) {
    if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733afa8;
    FUN_070dd5f4(*(long *)(param_1 + 0x238),*(int *)(param_1 + 0x2d4),0,DAT_091a1b90);
    if (*(long *)(param_1 + 0x240) != 0) {
      FUN_070dcc98(*(long *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x2d4),0,DAT_091a1bd0);
    }
  }
  if (*(char *)(param_1 + 0x2d0) == '\0') {
LAB_0733aed4:
    iVar3 = *(int *)(param_1 + 0x2d4);
  }
  else {
    if (*(long *)(param_1 + 0x210) == 0) goto LAB_0733afa8;
    FUN_04781ae4(*(long *)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x330),
                 *(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x218),DAT_091a1b58);
    if (*(char *)(param_1 + 500) == '\0') goto LAB_0733aed4;
    if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733afa8;
    iVar3 = FUN_04781ae4(*(long *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x338),0,
                         *(undefined8 *)(param_1 + 0x240),DAT_091a1b58);
    *(int *)(param_1 + 0x2d4) = iVar3;
  }
  if (iVar3 < 1) {
    if ((*(char *)(param_1 + 0x1d0) != '\0') && (*(char *)(param_1 + 500) != '\0')) {
      if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_0733afa8;
      IngameDebugConsole_DebugLogRecycledListView__RefreshCollapsedLogEntryCounts();
    }
  }
  else {
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x30) == 0)) {
      iVar3 = -1;
LAB_0733af44:
      *(int *)(param_1 + 0x248) = iVar3;
    }
    else {
      if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733afa8;
      iVar2 = *(int *)(*(long *)(param_1 + 0x238) + 0x1c) + -1;
      iVar3 = *(int *)(param_1 + 0x248);
      if (iVar2 <= *(int *)(param_1 + 0x248)) {
        iVar3 = iVar2;
      }
      if (-1 < iVar3) {
        do {
          if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733afa8;
          lVar5 = FUN_070dd0c0(*(long *)(param_1 + 0x238),iVar3,DAT_091a1ba0);
          if (lVar5 == lVar4) goto LAB_0733af44;
          bVar1 = 0 < iVar3;
          iVar3 = iVar3 + -1;
        } while (bVar1);
      }
    }
    if (*(long *)(param_1 + 0x1c8) == 0) {
LAB_0733afa8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    IngameDebugConsole_DebugLogRecycledListView__OnLogEntriesRemoved
              (*(long *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x2d4));
    if (*(char *)(param_1 + 0x1d0) != '\0') {
      IngameDebugConsole_DebugLogManager__OnLogEntriesUpdated(param_1,0,1);
    }
  }
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  return;
}

