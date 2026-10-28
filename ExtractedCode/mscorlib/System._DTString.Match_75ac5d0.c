// rea decompile_all
// name: System.__DTString$$Match
// address: 0x75ac5d0
// body: available
// range: 0x75ac5d0-0x75ac723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ac6ac to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ac720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System___DTString__Match(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09521c85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c85 = 1;
  }
  iVar1 = *(int *)(DAT_0918db18 + 0xe4);
  iVar5 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar5;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09521c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c7b = 1;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (iVar5 < (int)uVar2) {
    if (param_2 == 0) {
LAB_075ac720:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(uint *)(param_1 + 2);
    uVar3 = *(uint *)(param_2 + 0x10);
    if ((int)uVar3 <= (int)(uVar2 - uVar4)) {
      lVar6 = param_1[3];
      if ((uVar2 < uVar4) || (uVar2 - uVar4 < uVar3)) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar7 = *param_1;
      if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (lVar6 == 0) goto LAB_075ac720;
      iVar5 = System_Globalization_CompareInfo__Compare
                        (lVar6,lVar7 + (long)(int)uVar4 * 2,uVar3,param_2,0x40000000,0);
      if (iVar5 == 0) {
        *(int *)(param_1 + 2) = (int)param_1[2] + *(int *)(param_2 + 0x10) + -1;
        return 1;
      }
    }
  }
  return 0;
}

