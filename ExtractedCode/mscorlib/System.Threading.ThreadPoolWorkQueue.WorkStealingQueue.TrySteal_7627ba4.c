// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue.WorkStealingQueue$$TrySteal
// address: 0x7627ba4
// body: available
// range: 0x7627ba4-0x7627db7 inclusive
// range: 0x7627dbc-0x7627dbf inclusive
// range: 0x7627dc4-0x7627dc7 inclusive
// range: 0x7627dcc-0x7627dcf inclusive
// range: 0x7627e30-0x7627e77 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7627db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627dbc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627dcc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627e74 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07627e70) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__TrySteal
          (long param_1,long *param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  char local_6c [4];
  long local_68;
  
  local_68 = param_1;
  if ((DAT_09522180 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_09522180 = 1;
  }
  local_6c[0] = '\0';
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  uVar5 = 0;
  do {
    iVar7 = *(int *)(local_68 + 0x1c);
    thunk_FUN_03f6a5cc();
    iVar1 = *(int *)(local_68 + 0x20);
    thunk_FUN_03f6a5cc();
    lVar6 = local_68;
    if (iVar1 <= iVar7) goto LAB_07627e38;
    local_6c[0] = '\0';
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__TryEnter(lVar6 + 0x24,param_4,local_6c,0);
    if (local_6c[0] == '\0') {
      *param_3 = 1;
      return 0;
    }
    uVar2 = *(uint *)(local_68 + 0x1c);
    thunk_FUN_03f6a5cc();
    lVar6 = local_68;
    thunk_FUN_03f6a5cc();
    FUN_03f957c4(lVar6 + 0x1c,uVar2 + 1);
    iVar7 = *(int *)(local_68 + 0x20);
    thunk_FUN_03f6a5cc();
    if ((int)uVar2 < iVar7) {
      uVar3 = *(uint *)(local_68 + 0x18);
      thunk_FUN_03f6a5cc();
      lVar6 = *(long *)(local_68 + 0x10);
      thunk_FUN_03f6a5cc();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = uVar3 & uVar2;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
      thunk_FUN_03f6a5cc();
      *param_2 = lVar6;
      thunk_FUN_03f5d7b8(param_2,lVar6);
      if (*param_2 == 0) {
        iVar7 = 2;
      }
      else {
        lVar6 = *(long *)(local_68 + 0x10);
        thunk_FUN_03f6a5cc();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
        *puVar4 = 0;
        thunk_FUN_03f5d7b8(puVar4,0);
        uVar5 = 1;
        iVar7 = 7;
      }
    }
    else {
      thunk_FUN_03f6a5cc();
      *param_2 = 0;
      *(uint *)(local_68 + 0x1c) = uVar2;
      thunk_FUN_03f5d7b8(param_2,0);
      iVar7 = 8;
      *param_3 = 1;
    }
    lVar6 = local_68;
    if (local_6c[0] != '\0') {
      if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinLock__Exit(lVar6 + 0x24,0,0);
    }
  } while (iVar7 == 2);
  if (iVar7 != 7) {
LAB_07627e38:
    uVar5 = 0;
  }
  return uVar5;
}

