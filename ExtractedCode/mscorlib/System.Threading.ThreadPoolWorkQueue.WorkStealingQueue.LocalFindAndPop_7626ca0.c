// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue.WorkStealingQueue$$LocalFindAndPop
// address: 0x7626ca0
// body: available
// range: 0x7626ca0-0x7626f63 inclusive
// range: 0x7626f68-0x7626f6b inclusive
// range: 0x7626f70-0x7626f73 inclusive
// range: 0x7626f78-0x7626f7b inclusive
// range: 0x7626fd0-0x7626fdf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7626f60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626f68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626f70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626f78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626fd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626fdc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07626fd8) */
/* WARNING: Removing unreachable block (ram,0x07626f44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__LocalFindAndPop
               (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  char local_64 [4];
  undefined8 local_60;
  long local_58;
  
  local_58 = param_1;
  if ((DAT_0952217e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_0952217e = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  local_60 = 0;
  local_64[0] = '\0';
  thunk_FUN_03f6a5cc();
  iVar1 = *(int *)(param_1 + 0x20);
  thunk_FUN_03f6a5cc();
  uVar4 = *(uint *)(param_1 + 0x18);
  thunk_FUN_03f6a5cc();
  if (lVar6 == 0) {
LAB_07626fd4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = uVar4 & iVar1 - 1U;
  if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_07626fd0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*(long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20) == param_2) {
    uVar4 = System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__LocalPop(param_1,&local_60);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    thunk_FUN_03f6a5cc();
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar4 = iVar1 - 2;
    thunk_FUN_03f6a5cc();
    if (iVar2 <= (int)uVar4) {
      do {
        lVar7 = *(long *)(local_58 + 0x10);
        thunk_FUN_03f6a5cc();
        uVar3 = *(uint *)(local_58 + 0x18);
        thunk_FUN_03f6a5cc();
        lVar6 = local_58;
        if (lVar7 == 0) goto LAB_07626fd4;
        uVar3 = uVar3 & uVar4;
        if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_07626fd0;
        if (*(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) == param_2) {
          local_64[0] = '\0';
          if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Threading_SpinLock__Enter(lVar6 + 0x24,local_64,0);
          lVar6 = *(long *)(local_58 + 0x10);
          thunk_FUN_03f6a5cc();
          uVar3 = *(uint *)(local_58 + 0x18);
          thunk_FUN_03f6a5cc();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = uVar3 & uVar4;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) == 0) {
            uVar4 = 0;
          }
          else {
            lVar6 = *(long *)(local_58 + 0x10);
            thunk_FUN_03f6a5cc();
            uVar3 = *(uint *)(local_58 + 0x18);
            thunk_FUN_03f6a5cc();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = uVar3 & uVar4;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            thunk_FUN_03f6a5cc();
            puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
            *puVar5 = 0;
            thunk_FUN_03f5d7b8(puVar5,0);
            uVar3 = *(uint *)(local_58 + 0x20);
            thunk_FUN_03f6a5cc();
            if (uVar4 == uVar3) {
              iVar1 = *(int *)(local_58 + 0x20);
              thunk_FUN_03f6a5cc();
              thunk_FUN_03f6a5cc();
              *(int *)(local_58 + 0x20) = iVar1 + -1;
            }
            else {
              uVar3 = *(uint *)(local_58 + 0x1c);
              thunk_FUN_03f6a5cc();
              if (uVar4 == uVar3) {
                iVar1 = *(int *)(local_58 + 0x1c);
                thunk_FUN_03f6a5cc();
                thunk_FUN_03f6a5cc();
                *(int *)(local_58 + 0x1c) = iVar1 + 1;
              }
            }
            uVar4 = 1;
          }
          lVar6 = local_58;
          if (local_64[0] != '\0') {
            if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Threading_SpinLock__Exit(lVar6 + 0x24,0,0);
          }
          goto LAB_07626d60;
        }
        iVar1 = *(int *)(local_58 + 0x1c);
        uVar4 = uVar4 - 1;
        thunk_FUN_03f6a5cc();
      } while (iVar1 <= (int)uVar4);
    }
    uVar4 = 0;
  }
LAB_07626d60:
  return uVar4 & 1;
}

