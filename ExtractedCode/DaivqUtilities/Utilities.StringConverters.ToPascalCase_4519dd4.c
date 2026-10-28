// rea decompile_all
// name: Utilities.StringConverters$$ToPascalCase
// address: 0x4519dd4
// body: available
// range: 0x4519dd4-0x451a047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451a044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_StringConverters__ToPascalCase(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  
  if ((DAT_09518580 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09518580 = 1;
  }
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar4,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar5 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
  if ((plVar5 != (long *)0x0) &&
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0)),
     param_1 != 0)) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar7 = 0;
      uVar8 = 1;
      do {
        uVar1 = System_String__get_Chars(param_1,iVar7,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar2 = System_Char__IsLetterOrDigit(uVar1,0);
        if ((uVar2 & 1) != 0) {
          if ((uVar8 & 1) == 0) {
            if (iVar7 < *(int *)(param_1 + 0x10) + -1) {
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = System_Char__IsUpper(uVar1,0);
              if ((uVar6 & 1) != 0) {
                uVar3 = System_String__get_Chars(param_1,iVar7 + 1,0);
                if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09535460);
                }
                uVar6 = System_Char__IsLower(uVar3,0);
                if ((uVar6 & 1) != 0) goto joined_r0x04519f74;
              }
            }
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = System_Char__ToLowerInvariant(uVar1,0);
          }
          else {
            if (plVar5 == (long *)0x0) goto LAB_0451a044;
            uVar1 = (**(code **)(*plVar5 + 0x1c8))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x1d0));
          }
joined_r0x04519f74:
          if (plVar4 == (long *)0x0) goto LAB_0451a044;
          System_Text_StringBuilder__Append(plVar4,uVar1,0);
        }
        uVar8 = uVar2 ^ 1;
        if (iVar7 < *(int *)(param_1 + 0x10) + -1) {
          uVar1 = System_String__get_Chars(param_1,iVar7,0);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535460);
          }
          uVar6 = System_Char__IsLower(uVar1,0);
          if ((uVar6 & 1) != 0) {
            uVar1 = System_String__get_Chars(param_1,iVar7 + 1,0);
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09535460);
            }
            uVar2 = System_Char__IsUpper(uVar1,0);
            uVar8 = uVar2 | uVar8;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0451a040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
  }
LAB_0451a044:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

