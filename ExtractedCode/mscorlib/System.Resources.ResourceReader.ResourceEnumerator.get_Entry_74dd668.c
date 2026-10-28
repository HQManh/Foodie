// rea decompile_all
// name: System.Resources.ResourceReader.ResourceEnumerator$$get_Entry
// address: 0x74dd668
// body: available
// range: 0x74dd668-0x74dd8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dd858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd8cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074dd80c) */
/* WARNING: Removing unreachable block (ram,0x074dd8c0) */
/* WARNING: Removing unreachable block (ram,0x074dd8ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] System_Resources_ResourceReader_ResourceEnumerator__get_Entry(long param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long local_68 [2];
  char local_54 [4];
  undefined8 local_50;
  char local_44 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09521583 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fd88);
    DAT_09521583 = 1;
  }
  local_44[0] = '\0';
  local_50 = 0;
  local_54[0] = '\0';
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    puVar6 = &DAT_09201698;
  }
  else if (*(char *)(param_1 + 0x18) == '\0') {
    puVar6 = &DAT_092016c8;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      local_44[0] = '\0';
      System_Threading_Monitor__Enter(lVar3,local_44,0);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_50 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      local_54[0] = '\0';
      System_Threading_Monitor__Enter(local_50,local_54,0);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = System_Resources_ResourceReader__AllocateStringForNameIndex
                        (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,0)
      ;
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      bVar2 = FUN_06fe0d78(lVar5,uVar4,local_68,DAT_0919fd88);
      lVar5 = local_68[0];
      if ((bVar2 & local_68[0] != 0) == 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0x20) == -1) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = System_Resources_ResourceReader__GetValueForNameIndex
                            (lVar5,*(undefined4 *)(param_1 + 0x1c),0);
        }
        else {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = System_Resources_ResourceReader__LoadObject(lVar5,*(int *)(param_1 + 0x20),0);
        }
      }
      if (local_54[0] != '\0') {
        System_Threading_Monitor__Exit(local_50,0);
      }
      if (local_44[0] != '\0') {
        System_Threading_Monitor__Exit(lVar3,0);
      }
      local_40 = 0;
      uStack_38 = 0;
      System_Collections_DictionaryEntry___ctor(&local_40,uVar4,lVar5,0);
      auVar1._8_8_ = uStack_38;
      auVar1._0_8_ = local_40;
      return auVar1;
    }
    puVar6 = &DAT_0920bea8;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar6);
  uVar4 = System_Environment__GetResourceString(uVar4,0);
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar7 = thunk_FUN_03f9944c();
  System_InvalidOperationException___ctor(uVar7,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091ef340);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar4);
}

