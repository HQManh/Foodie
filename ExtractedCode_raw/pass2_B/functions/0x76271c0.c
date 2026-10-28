// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue.WorkStealingQueue$$LocalPop
// address: 0x76271c0
// body: available
// range: 0x76271c0-0x7627403 inclusive
// range: 0x7627408-0x762740b inclusive
// range: 0x7627410-0x7627413 inclusive
// range: 0x7627418-0x762741b inclusive
// range: 0x7627470-0x76274eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7627400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627408 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7627418 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76274dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76274e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76274e8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076274e4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__LocalPop(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  char local_5c [4];
  long local_58;
  
  local_58 = param_1;
  if ((DAT_0952217f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_0952217f = 1;
  }
  uVar7 = 0;
  local_5c[0] = '\0';
  do {
    while( true ) {
      iVar1 = *(int *)(local_58 + 0x20);
      thunk_FUN_03f6a5cc();
      iVar2 = *(int *)(local_58 + 0x1c);
      thunk_FUN_03f6a5cc();
      lVar8 = local_58;
      if (iVar1 <= iVar2) {
        *param_2 = 0;
        thunk_FUN_03f5d7b8(param_2,0);
        return 0;
      }
      uVar4 = iVar1 - 1;
      thunk_FUN_03f6a5cc();
      FUN_03f957c4(lVar8 + 0x20,uVar4);
      iVar2 = *(int *)(local_58 + 0x1c);
      thunk_FUN_03f6a5cc();
      lVar8 = local_58;
      if (iVar2 < iVar1) break;
      local_5c[0] = '\0';
      if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinLock__Enter(lVar8 + 0x24,local_5c,0);
      iVar2 = *(int *)(local_58 + 0x1c);
      thunk_FUN_03f6a5cc();
      if (iVar2 < iVar1) {
        uVar3 = *(uint *)(local_58 + 0x18);
        thunk_FUN_03f6a5cc();
        lVar8 = *(long *)(local_58 + 0x10);
        thunk_FUN_03f6a5cc();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = uVar3 & uVar4;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = *(long *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
        thunk_FUN_03f6a5cc();
        *param_2 = lVar8;
        thunk_FUN_03f5d7b8(param_2,lVar8);
        if (*param_2 == 0) {
          bVar5 = true;
        }
        else {
          lVar8 = *(long *)(local_58 + 0x10);
          thunk_FUN_03f6a5cc();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
          *puVar6 = 0;
          thunk_FUN_03f5d7b8(puVar6,0);
          bVar5 = false;
          uVar7 = 1;
        }
      }
      else {
        thunk_FUN_03f6a5cc();
        *param_2 = 0;
        *(int *)(local_58 + 0x20) = iVar1;
        thunk_FUN_03f5d7b8(param_2,0);
        bVar5 = false;
        uVar7 = 0;
      }
      lVar8 = local_58;
      if (local_5c[0] != '\0') {
        if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Threading_SpinLock__Exit(lVar8 + 0x24,0,0);
      }
      if (!bVar5) {
        return uVar7;
      }
    }
    uVar3 = *(uint *)(local_58 + 0x18);
    thunk_FUN_03f6a5cc();
    lVar8 = *(long *)(local_58 + 0x10);
    thunk_FUN_03f6a5cc();
    if (lVar8 == 0) goto LAB_076274dc;
    uVar3 = uVar3 & uVar4;
    if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_076274e0;
    lVar8 = *(long *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
    thunk_FUN_03f6a5cc();
    *param_2 = lVar8;
    thunk_FUN_03f5d7b8(param_2,lVar8);
  } while (*param_2 == 0);
  lVar8 = *(long *)(local_58 + 0x10);
  thunk_FUN_03f6a5cc();
  if (lVar8 != 0) {
    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
      *puVar6 = 0;
      thunk_FUN_03f5d7b8(puVar6,0);
      return 1;
    }
LAB_076274e0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_076274dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

