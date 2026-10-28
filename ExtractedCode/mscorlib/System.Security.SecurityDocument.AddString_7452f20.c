// rea decompile_all
// name: System.Security.SecurityDocument$$AddString
// address: 0x7452f20
// body: available
// range: 0x7452f20-0x745306b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7453064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453068 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_SecurityDocument__AddString(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (param_2 != 0) {
    System_Security_SecurityDocument__GuaranteeSize
              (param_1,*param_3 + *(int *)(param_2 + 0x10) * 2 + 2);
    iVar3 = *(int *)(param_2 + 0x10);
    if (0 < iVar3) {
      iVar4 = 0;
      iVar5 = 1;
      do {
        lVar6 = *(long *)(param_1 + 0x10);
        iVar3 = *param_3;
        System_String__get_Chars(param_2,iVar4,0);
        if (lVar6 == 0) goto LAB_07453064;
        uVar1 = (iVar5 + iVar3) - 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_07453068;
        *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = extraout_var;
        lVar6 = *(long *)(param_1 + 0x10);
        iVar3 = *param_3;
        uVar2 = System_String__get_Chars(param_2,iVar4,0);
        if (lVar6 == 0) goto LAB_07453064;
        uVar1 = iVar5 + iVar3;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_07453068;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 2;
        *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = uVar2;
        iVar3 = *(int *)(param_2 + 0x10);
      } while (iVar4 < iVar3);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar1 = *param_3 + iVar3 * 2;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 0;
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_07453064;
        uVar1 = *param_3 + *(int *)(param_2 + 0x10) * 2 + 1;
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 0;
          *param_3 = *param_3 + *(int *)(param_2 + 0x10) * 2 + 2;
          return;
        }
      }
LAB_07453068:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07453064:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

