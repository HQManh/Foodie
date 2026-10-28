// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$GetAllLogs
// address: 0x733d73c
// body: available
// range: 0x733d73c-0x733d97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733d978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__GetAllLogs(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09520665 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1b98);
    FUN_03f5c2a4(&DAT_091a1c48);
    FUN_03f5c2a4(&DAT_091a1ba0);
    FUN_03f5c2a4(&DAT_091a1bd8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f9f60);
    DAT_09520665 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar11 = ZEXT816(0);
  if (*(long *)(param_1 + 0x250) != 0) {
    IngameDebugConsole_DebugLogManager__ProcessQueuedLogs
              (param_1,*(undefined4 *)(*(long *)(param_1 + 0x250) + 0x1c));
    auVar11._8_8_ = local_60._8_8_;
    auVar11._0_8_ = local_60._0_8_;
    if (*(long *)(param_1 + 0x228) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x228) + 0x1c);
      lVar5 = System_Environment__get_NewLine(0);
      auVar11._8_8_ = local_60._8_8_;
      auVar11._0_8_ = local_60._0_8_;
      if (lVar5 != 0) {
        if (iVar1 < 1) {
          iVar10 = 100;
        }
        else {
          iVar2 = *(int *)(lVar5 + 0x10);
          iVar10 = 0;
          iVar9 = 0;
          do {
            auVar11._8_8_ = local_60._8_8_;
            auVar11._0_8_ = local_60._0_8_;
            if (*(long *)(param_1 + 0x228) == 0) goto LAB_0733d978;
            lVar5 = FUN_070dd0c0(*(long *)(param_1 + 0x228),iVar9,DAT_091a1ba0);
            auVar4._8_8_ = local_60._8_8_;
            auVar4._0_8_ = local_60._0_8_;
            auVar3._8_8_ = local_60._8_8_;
            auVar3._0_8_ = local_60._0_8_;
            auVar11._8_8_ = local_60._8_8_;
            auVar11._0_8_ = local_60._0_8_;
            if (((lVar5 == 0) || (auVar11 = auVar3, *(long *)(lVar5 + 0x10) == 0)) ||
               (auVar11 = auVar4, *(long *)(lVar5 + 0x18) == 0)) goto LAB_0733d978;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + iVar2 * 3 + *(int *)(*(long *)(lVar5 + 0x10) + 0x10) +
                     *(int *)(*(long *)(lVar5 + 0x18) + 0x10);
          } while (iVar1 != iVar9);
          iVar10 = iVar10 + 100;
        }
        iVar9 = 0;
        if (*(long *)(param_1 + 0x230) != 0) {
          iVar9 = iVar1 * 0xc;
        }
        plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
        System_Text_StringBuilder___ctor(plVar6,iVar10 + iVar9,0);
        auVar11._8_8_ = local_60._8_8_;
        auVar11._0_8_ = local_60._0_8_;
        local_60 = auVar11;
        if (iVar1 < 1) {
          if (plVar6 == (long *)0x0) goto LAB_0733d978;
        }
        else {
          iVar10 = 0;
          do {
            auVar11 = local_60;
            if (*(long *)(param_1 + 0x228) == 0) goto LAB_0733d978;
            plVar7 = (long *)FUN_070dd0c0(*(long *)(param_1 + 0x228),iVar10,DAT_091a1ba0);
            if (*(long *)(param_1 + 0x230) == 0) {
              auVar11 = local_60;
              plVar8 = plVar6;
              if (plVar7 == (long *)0x0) goto LAB_0733d978;
            }
            else {
              auVar11 = FUN_070dc78c(*(long *)(param_1 + 0x230),iVar10,DAT_091a1bd8);
              local_60 = auVar11;
              IngameDebugConsole_DebugLogEntryTimestamp__AppendTime(local_60,plVar6);
              auVar11 = local_60;
              if (plVar6 == (long *)0x0) goto LAB_0733d978;
              System_Text_StringBuilder__Append(plVar6,DAT_091f9f60,0);
              auVar11 = local_60;
              plVar8 = plVar7;
            }
            if (plVar8 == (long *)0x0) goto LAB_0733d978;
            local_60 = auVar11;
            lVar5 = System_Text_StringBuilder__AppendLine(plVar6,plVar7[2],0);
            auVar11 = local_60;
            if (lVar5 == 0) goto LAB_0733d978;
            lVar5 = System_Text_StringBuilder__AppendLine(lVar5,plVar7[3],0);
            auVar11 = local_60;
            if (lVar5 == 0) goto LAB_0733d978;
            System_Text_StringBuilder__AppendLine(lVar5,0);
            iVar10 = iVar10 + 1;
          } while (iVar1 != iVar10);
        }
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        return;
      }
    }
  }
LAB_0733d978:
  local_60 = auVar11;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

