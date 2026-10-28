// rea decompile_all
// name: System.Collections.ArrayList$$Insert
// address: 0x755a72c
// body: available
// range: 0x755a72c-0x755a867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755a850 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755a854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755a858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755a864 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ArrayList__Insert(long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  
  if (-1 < (int)param_2) {
    iVar5 = *(int *)(param_1 + 0x18);
    if ((int)param_2 <= iVar5) {
      plVar6 = *(long **)(param_1 + 0x10);
      if (plVar6 != (long *)0x0) {
        if (iVar5 == (int)plVar6[3]) {
          System_Collections_ArrayList__EnsureCapacity(param_1,iVar5 + 1);
          iVar5 = *(int *)(param_1 + 0x18);
          plVar6 = *(long **)(param_1 + 0x10);
        }
        if (iVar5 - param_2 != 0 && (int)param_2 <= iVar5) {
          System_Array__Copy(plVar6,param_2,plVar6,param_2 + 1,iVar5 - param_2,0);
          plVar6 = *(long **)(param_1 + 0x10);
        }
        if (plVar6 != (long *)0x0) {
          if ((param_3 != 0) &&
             (lVar1 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar6 + 0x40)), lVar1 == 0)) {
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if (param_2 < *(uint *)(plVar6 + 3)) {
            plVar6[(ulong)param_2 + 4] = param_3;
            thunk_FUN_03f5d7b8(plVar6 + (ulong)param_2 + 4,param_3);
            *(ulong *)(param_1 + 0x18) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x18) + 1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar4 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_0921d350);
  uVar3 = thunk_FUN_03fc39d4(&DAT_09204de0);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar2,uVar3,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c0e00);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar2);
}

