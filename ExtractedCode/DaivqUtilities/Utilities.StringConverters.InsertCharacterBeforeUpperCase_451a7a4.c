// rea decompile_all
// name: Utilities.StringConverters$$InsertCharacterBeforeUpperCase
// address: 0x451a7a4
// body: available
// range: 0x451a7a4-0x451a8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451a8d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_StringConverters__InsertCharacterBeforeUpperCase(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  if ((DAT_09518585 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09518585 = 1;
  }
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,0);
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar5 = 0;
      uVar6 = 0;
      do {
        uVar1 = System_String__get_Chars(param_1,iVar5,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar4 = System_Char__IsUpper(uVar1,0);
        if ((uVar4 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_0451a8d0;
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_0451a8d0;
          iVar2 = System_Text_StringBuilder__get_Length(plVar3,0);
          if ((iVar2 != 0) && ((uVar6 & 0xffff) != 0x20)) {
            System_Text_StringBuilder__Append(plVar3,param_2,0);
          }
        }
        System_Text_StringBuilder__Append(plVar3,uVar1,0);
        iVar5 = iVar5 + 1;
        uVar6 = uVar1;
      } while (iVar5 < *(int *)(param_1 + 0x10));
    }
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0451a8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      return;
    }
  }
LAB_0451a8d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

