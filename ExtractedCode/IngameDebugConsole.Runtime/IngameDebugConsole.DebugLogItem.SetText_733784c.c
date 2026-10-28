// rea decompile_all
// name: IngameDebugConsole.DebugLogItem$$SetText
// address: 0x733784c
// body: available
// range: 0x733784c-0x7337a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7337a40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogItem__SetText
               (long param_1,long *param_2,char *param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_50 [16];
  
  if ((DAT_0952064b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6ca8);
    FUN_03f5c2a4(&DAT_091b6cb0);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_0952064b = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_3 == '\0') {
    plVar6 = *(long **)(param_1 + 0x38);
    if ((param_4 & 1) == 0) {
LAB_07337a0c:
      auVar1 = ZEXT816(0);
      if (param_2 == (long *)0x0) goto LAB_07337a40;
      lVar4 = param_2[2];
    }
    else {
      auVar1 = ZEXT816(0);
      if (param_2 == (long *)0x0) goto LAB_07337a40;
      lVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    }
    auVar1._8_8_ = local_50._8_8_;
    auVar1._0_8_ = local_50._0_8_;
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07337a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x5e8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x5f0));
      return;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0xa0);
    if ((param_4 & 1) == 0) {
      auVar1 = ZEXT816(0);
      if ((lVar4 == 0) || (auVar1 = ZEXT816(0), *(long *)(lVar4 + 0x60) == 0)) goto LAB_07337a40;
      if (*(char *)(*(long *)(lVar4 + 0x60) + 0x4e) == '\0') {
        plVar6 = *(long **)(param_1 + 0x38);
        goto LAB_07337a0c;
      }
    }
    else if (lVar4 == 0) goto LAB_07337a40;
    auVar1 = ZEXT816(0);
    if ((*(long *)(lVar4 + 0x60) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar4 + 0x60) + 0x2f0), auVar1 = ZEXT816(0),
       plVar6 != (long *)0x0)) {
      System_Text_StringBuilder__set_Length(plVar6,0,0);
      local_50 = FUN_05c2cfb4(param_3,DAT_091b6cb0);
      if ((param_4 & 1) == 0) {
        IngameDebugConsole_DebugLogEntryTimestamp__AppendTime(local_50,plVar6);
        lVar4 = System_Text_StringBuilder__Append(plVar6,DAT_091f5a98,0);
        auVar1 = local_50;
        if ((param_2 == (long *)0x0) || (lVar4 == 0)) goto LAB_07337a40;
        lVar2 = param_2[2];
      }
      else {
        IngameDebugConsole_DebugLogEntryTimestamp__AppendFullTimestamp();
        lVar4 = System_Text_StringBuilder__Append(plVar6,DAT_091f9f60,0);
        auVar1 = local_50;
        if (param_2 == (long *)0x0) goto LAB_07337a40;
        lVar2 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        auVar1 = local_50;
        if (lVar4 == 0) goto LAB_07337a40;
      }
      System_Text_StringBuilder__Append(lVar4,lVar2,0);
      plVar5 = *(long **)(param_1 + 0x38);
      uVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      auVar1 = local_50;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5f0));
        return;
      }
    }
  }
LAB_07337a40:
  local_50 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

