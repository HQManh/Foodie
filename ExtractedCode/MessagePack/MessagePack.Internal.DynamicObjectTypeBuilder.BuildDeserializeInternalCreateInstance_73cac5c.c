// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalCreateInstance
// address: 0x73cac5c
// body: available
// range: 0x73cac5c-0x73cad5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cacf4 to 0x73bb538 MessagePack.Internal.ILGeneratorExtensions$$EmitStloc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73cad58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalCreateInstance
               (undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  if ((DAT_09520cb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520cb2 = 1;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x19) == '\0') {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_3 != (long *)0x0) {
        (**(code **)(*param_3 + 0x218))
                  (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x698),param_4,
                   *(undefined8 *)(*param_3 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x073cad54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 600))
                  (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x6d0),param_1,
                   *(undefined8 *)(*param_3 + 0x260));
        return;
      }
    }
    else {
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_3 != (long *)0x0) {
        (**(code **)(*param_3 + 0x1e8))
                  (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390),
                   *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(*param_3 + 0x1f0));
        MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_3,param_4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

