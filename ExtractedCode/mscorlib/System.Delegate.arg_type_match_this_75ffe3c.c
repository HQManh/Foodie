// rea decompile_all
// name: System.Delegate$$arg_type_match_this
// address: 0x75ffe3c
// body: available
// range: 0x75ffe3c-0x75fff77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fff58 to 0x75cebec System.Type$$op_Equality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fff74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Delegate__arg_type_match_this(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 != (long *)0x0) {
    uVar2 = System_Type__get_IsValueType(param_2,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Equality(param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x075fff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2,param_1,*(undefined8 *)(*param_2 + 0x2c0));
        return uVar2;
      }
      uVar1 = 1;
      goto LAB_075fff60;
    }
    if (param_1 != (long *)0x0) {
      uVar2 = System_Type__get_IsByRef(param_1,0);
      if ((uVar2 & 1) == 0) {
        if ((param_3 & 1) != 0) goto LAB_075fff28;
        uVar1 = 0;
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar1 = System_Type__op_Equality(uVar3,param_2,0);
        if (((uVar1 & 1) == 0) && ((param_3 & 1) != 0)) {
LAB_075fff28:
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Type__op_Equality(param_1,param_2,0);
          return uVar2;
        }
      }
LAB_075fff60:
      return (ulong)(uVar1 & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

