// rea decompile_all
// name: MessagePack.Formatters.TypelessFormatter$$BuildTypeName
// address: 0x73e95b0
// body: available
// range: 0x73e95b0-0x73e96f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e96f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Formatters_TypelessFormatter__BuildTypeName
          (undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_09520dda & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188190);
    FUN_03f5c2a4(&DAT_091dc130);
    FUN_03f5c2a4(&DAT_091dc628);
    DAT_09520dda = 1;
  }
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x26) == '\0') {
      if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073e96f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
        return uVar1;
      }
    }
    else if (param_2 != (long *)0x0) {
      uVar1 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
      if (*(int *)(DAT_09188190 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188190);
      }
      if (**(long **)(DAT_09188190 + 0xb8) != 0) {
        uVar2 = System_Text_RegularExpressions_Regex__Replace
                          (**(long **)(DAT_09188190 + 0xb8),uVar1,
                           **(undefined8 **)(DAT_09535468 + 0xb8),0);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar3 = FUN_03f5c7b8(uVar2,0,DAT_091dc130,DAT_091dc628);
        uVar4 = System_Type__op_Equality(uVar3,0,0);
        if ((uVar4 & 1) == 0) {
          uVar1 = uVar2;
        }
        return uVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

