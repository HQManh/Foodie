// rea decompile_all
// name: Utilities.StringConverters$$ToCamelCase
// address: 0x4519aa0
// body: available
// range: 0x4519aa0-0x4519d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4519d10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_StringConverters__ToCamelCase(long param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_0951857f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918b388);
    FUN_03f5c2a4(&DAT_09214950);
    DAT_0951857f = 1;
  }
  uVar7 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar7 & 1) != 0) {
    return param_1;
  }
  if (*(int *)(DAT_0918b388 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = Utilities_StringConverters__IsAllUpper(param_1);
  if ((uVar7 & 1) != 0) {
    if (param_1 == 0) goto LAB_04519d10;
    param_1 = System_String__ToLower(param_1,0);
  }
  if ((param_3 & 1) == 0) {
    if (param_1 == 0) goto LAB_04519d10;
    uVar3 = 1;
  }
  else {
    if (param_1 == 0) goto LAB_04519d10;
    uVar3 = System_String__StartsWith(param_1,DAT_09214950,0);
    uVar3 = uVar3 ^ 1;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  plVar8 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar8,uVar6,0);
  if (0 < *(int *)(param_1 + 0x10)) {
    bVar1 = false;
    iVar5 = 0;
    do {
      uVar4 = System_String__get_Chars(param_1,iVar5,0);
      bVar2 = true;
      if (((uVar4 & 0xffff) != 0x2d) && ((uVar4 & 0xffff) != 0x5f)) {
        if ((param_2 & 1) != 0) {
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Char__IsWhiteSpace(uVar4,0);
          if ((uVar7 & 1) != 0) {
            bVar2 = true;
            goto LAB_04519c60;
          }
        }
        if (bVar1) {
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Char__ToUpperInvariant(uVar4,0);
        }
        if (plVar8 == (long *)0x0) goto LAB_04519d10;
        System_Text_StringBuilder__Append(plVar8,uVar4,0);
        bVar2 = false;
      }
LAB_04519c60:
      bVar1 = bVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  if (plVar8 != (long *)0x0) {
    iVar5 = System_Text_StringBuilder__get_Length(plVar8,0);
    if (0 < iVar5) {
      uVar6 = System_Text_StringBuilder__get_Chars(plVar8,0,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar6 = System_Char__ToLowerInvariant(uVar6,0);
      System_Text_StringBuilder__set_Chars(plVar8,0,uVar6,0);
    }
    if ((uVar3 & 1) == 0) {
      System_Text_StringBuilder__Insert(plVar8,0,0x5f,0);
    }
                    /* WARNING: Could not recover jumptable at 0x04519d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    return lVar9;
  }
LAB_04519d10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

