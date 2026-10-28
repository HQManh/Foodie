// rea decompile_all
// name: FUN_0404e598
// address: 0x404e598
// body: available
// range: 0x404e598-0x404e7a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404e61c to 0x404ecfc FUN_0404ecfc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x404e770 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404e7a4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0404e598(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  iVar1 = *param_4;
  if (iVar1 < 5) {
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar1 == 5) {
      uVar4 = (uint)*(ulong *)(param_4 + 2);
      if ((int)uVar4 < 0x1e) {
        if (uVar4 == 0xfffffffe) {
LAB_0404e6d4:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar4 == 0xffffffff) goto LAB_0404e6bc;
        if (uVar4 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar4 < 0x20) {
        if (uVar4 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar4 == 0x1f) goto LAB_0404e6d4;
      }
      else {
        if (uVar4 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar4 == 0x20) {
LAB_0404e6bc:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar4) {
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getRegister","unsupported arm64 register")
        ;
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar3 = (undefined8 *)FUN_0404ecfc(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar3;
    }
    if (iVar1 == 7) {
      uVar2 = FUN_0404ecfc(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar2;
    }
  }
  fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
  abort();
}

