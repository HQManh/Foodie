// rea decompile_all
// name: Newtonsoft.Json.Utilities.StringUtils$$ToSeparatedCase
// address: 0x769fc40
// body: available
// range: 0x769fc40-0x769ff1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769ff18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Utilities_StringUtils__ToSeparatedCase(long param_1,uint param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  if ((DAT_09522612 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09522612 = 1;
  }
  uVar5 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar5 & 1) != 0) {
    return param_1;
  }
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar6,0);
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar9 = 0;
      iVar10 = 0;
      do {
        sVar2 = System_String__get_Chars(param_1,iVar9,0);
        if (sVar2 == 0x20) {
          bVar1 = iVar10 != 0;
          iVar10 = 0;
          if (bVar1) {
            iVar10 = 3;
          }
        }
        else {
          uVar3 = System_String__get_Chars(param_1,iVar9,0);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535460);
          }
          uVar5 = System_Char__IsUpper(uVar3,0);
          if ((uVar5 & 1) == 0) {
            uVar4 = System_String__get_Chars(param_1,iVar9,0);
            if ((uVar4 & 0xffff) == (param_2 & 0xffff)) {
              if (plVar6 == (long *)0x0) goto LAB_0769ff18;
              System_Text_StringBuilder__Append(plVar6,param_2,0);
              iVar10 = 0;
            }
            else {
              if (iVar10 == 3) {
                if (plVar6 == (long *)0x0) goto LAB_0769ff18;
                System_Text_StringBuilder__Append(plVar6,param_2,0);
                uVar3 = System_String__get_Chars(param_1,iVar9,0);
              }
              else {
                uVar3 = System_String__get_Chars(param_1,iVar9,0);
                if (plVar6 == (long *)0x0) goto LAB_0769ff18;
              }
              System_Text_StringBuilder__Append(plVar6,uVar3,0);
              iVar10 = 1;
            }
          }
          else {
            if ((iVar10 == 1) || (iVar10 == 3)) {
LAB_0769fdc8:
              if (plVar6 == (long *)0x0) goto LAB_0769ff18;
              System_Text_StringBuilder__Append(plVar6,param_2,0);
            }
            else if ((iVar10 == 2) && ((iVar9 != 0 && (iVar9 + 1 < *(int *)(param_1 + 0x10))))) {
              uVar4 = System_String__get_Chars(param_1,iVar9 + 1,0);
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09535460);
              }
              uVar5 = System_Char__IsUpper(uVar4,0);
              if (((uVar5 & 1) == 0) && ((uVar4 & 0xffff) != (param_2 & 0xffff))) goto LAB_0769fdc8;
            }
            uVar3 = System_String__get_Chars(param_1,iVar9,0);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182ff8);
            }
            uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09535460);
            }
            uVar3 = System_Char__ToLower(uVar3,uVar7,0);
            if (plVar6 == (long *)0x0) goto LAB_0769ff18;
            System_Text_StringBuilder__Append(plVar6,uVar3,0);
            iVar10 = 2;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x10));
    }
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0769ff14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return lVar8;
    }
  }
LAB_0769ff18:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

