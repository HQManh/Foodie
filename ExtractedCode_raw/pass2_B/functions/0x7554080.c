// rea decompile_all
// name: System.Collections.Queue$$Enqueue
// address: 0x7554080
// body: available
// range: 0x7554080-0x7554183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7554170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7554174 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7554180 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Queue__Enqueue(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != (long *)0x0) {
    iVar6 = (int)plVar8[3];
    if (*(int *)(param_1 + 0x20) == iVar6) {
      iVar1 = *(int *)(param_1 + 0x20) + 4;
      uVar7 = SUB168(SEXT816((long)iVar6 * (long)*(int *)(param_1 + 0x24)) *
                     SEXT816(-0x5c28f5c28f5c28f5),8) + (long)iVar6 * (long)*(int *)(param_1 + 0x24);
      iVar6 = (int)(uVar7 >> 6) - (int)((long)uVar7 >> 0x3f);
      if (iVar1 <= iVar6) {
        iVar1 = iVar6;
      }
      System_Collections_Queue__SetCapacity(param_1,iVar1);
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_07554170;
    }
    uVar2 = *(uint *)(param_1 + 0x1c);
    if ((param_2 != 0) &&
       (lVar4 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if (*(uint *)(plVar8 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar8[(long)(int)uVar2 + 4] = param_2;
    thunk_FUN_03f5d7b8(plVar8 + (long)(int)uVar2 + 4,param_2);
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
      iVar6 = *(int *)(param_1 + 0x1c) + 1;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar6 / iVar1;
      }
      *(int *)(param_1 + 0x1c) = iVar6 - iVar3 * iVar1;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return;
    }
  }
LAB_07554170:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

