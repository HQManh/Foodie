// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$FilterLogs
// address: 0x733ce68
// body: available
// range: 0x733ce68-0x733d203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733d1fc to 0x733b0f8 IngameDebugConsole.DebugLogManager$$OnLogEntriesUpdated (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733d200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__FilterLogs(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_09520664 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1b70);
    FUN_03f5c2a4(&DAT_091a1bb8);
    FUN_03f5c2a4(&DAT_091a1bb0);
    FUN_03f5c2a4(&DAT_091a1b68);
    FUN_03f5c2a4(&DAT_091a1bc0);
    FUN_03f5c2a4(&DAT_091a1b78);
    FUN_03f5c2a4(&DAT_091a1b98);
    FUN_03f5c2a4(&DAT_091a1ba0);
    FUN_03f5c2a4(&DAT_091a1bd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09520664 = 1;
  }
  if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733d200;
  FUN_070dd7ec(*(long *)(param_1 + 0x238),DAT_091a1b78);
  if (*(long *)(param_1 + 0x240) != 0) {
    FUN_070dce84(*(long *)(param_1 + 0x240),DAT_091a1bc0);
  }
  uVar1 = *(uint *)(param_1 + 0x1f8);
  if (uVar1 != 0) {
    bVar4 = *(char *)(param_1 + 500) != '\0';
    lVar8 = 0x228;
    if (bVar4) {
      lVar8 = 0x210;
    }
    lVar5 = 0x230;
    if (bVar4) {
      lVar5 = 0x218;
    }
    lVar9 = *(long *)(param_1 + lVar8);
    lVar8 = *(long *)(param_1 + lVar5);
    if (uVar1 == 7) {
      if (*(char *)(param_1 + 0x208) == '\0') {
        if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733d200;
        FUN_070dd38c(*(long *)(param_1 + 0x238),lVar9,DAT_091a1b70);
        if (*(long *)(param_1 + 0x240) != 0) {
          FUN_070dca58(*(long *)(param_1 + 0x240),lVar8,DAT_091a1bb8);
        }
      }
      else {
        if (lVar9 == 0) goto LAB_0733d200;
        iVar2 = *(int *)(lVar9 + 0x1c);
        if (0 < iVar2) {
          iVar10 = 0;
          do {
            lVar5 = FUN_070dd0c0(lVar9,iVar10,DAT_091a1ba0);
            if (lVar5 == 0) goto LAB_0733d200;
            uVar6 = IngameDebugConsole_DebugLogEntry__MatchesSearchTerm
                              (lVar5,*(undefined8 *)(param_1 + 0x200));
            if ((uVar6 & 1) != 0) {
              lVar5 = *(long *)(param_1 + 0x238);
              uVar7 = FUN_070dd0c0(lVar9,iVar10,DAT_091a1ba0);
              if (lVar5 == 0) goto LAB_0733d200;
              FUN_070dd31c(lVar5,uVar7,DAT_091a1b68);
              lVar5 = *(long *)(param_1 + 0x240);
              if (lVar5 != 0) {
                if (lVar8 == 0) goto LAB_0733d200;
                auVar12 = FUN_070dc78c(lVar8,iVar10,DAT_091a1bd8);
                FUN_070dc9e0(lVar5,auVar12._0_8_,auVar12._8_8_,DAT_091a1bb0);
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar2 != iVar10);
        }
      }
    }
    else {
      if (lVar9 == 0) goto LAB_0733d200;
      iVar2 = *(int *)(lVar9 + 0x1c);
      if (0 < iVar2) {
        iVar10 = 0;
        do {
          lVar5 = FUN_070dd0c0(lVar9,iVar10,DAT_091a1ba0);
          if (*(char *)(param_1 + 0x208) == '\0') {
            if (lVar5 == 0) goto LAB_0733d200;
LAB_0733d0a0:
            uVar7 = *(undefined8 *)(lVar5 + 0x28);
            uVar11 = *(undefined8 *)(param_1 + 0x88);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
            uVar3 = uVar1;
            if ((uVar6 & 1) == 0) {
              uVar7 = *(undefined8 *)(lVar5 + 0x28);
              uVar11 = *(undefined8 *)(param_1 + 0x90);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
              if ((uVar6 & 1) == 0) {
                uVar3 = uVar1 >> 2;
              }
              else {
                uVar3 = uVar1 >> 1;
              }
            }
            if ((uVar3 & 1) != 0) {
              if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733d200;
              FUN_070dd31c(*(long *)(param_1 + 0x238),lVar5,DAT_091a1b68);
              lVar5 = *(long *)(param_1 + 0x240);
              if (lVar5 != 0) {
                if (lVar8 == 0) goto LAB_0733d200;
                auVar12 = FUN_070dc78c(lVar8,iVar10,DAT_091a1bd8);
                FUN_070dc9e0(lVar5,auVar12._0_8_,auVar12._8_8_,DAT_091a1bb0);
              }
            }
          }
          else {
            if (lVar5 == 0) goto LAB_0733d200;
            uVar6 = IngameDebugConsole_DebugLogEntry__MatchesSearchTerm
                              (lVar5,*(undefined8 *)(param_1 + 0x200));
            if ((uVar6 & 1) != 0) goto LAB_0733d0a0;
          }
          iVar10 = iVar10 + 1;
        } while (iVar2 != iVar10);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x1c8);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x88) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x88),0);
    *(undefined8 *)(lVar8 + 0x90) = 0x7fffffff;
    IngameDebugConsole_DebugLogManager__OnLogEntriesUpdated(param_1,1,1);
    return;
  }
LAB_0733d200:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

