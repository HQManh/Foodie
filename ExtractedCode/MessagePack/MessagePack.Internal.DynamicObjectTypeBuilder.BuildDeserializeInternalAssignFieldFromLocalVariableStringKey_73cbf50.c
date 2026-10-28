// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalAssignFieldFromLocalVariableStringKey
// address: 0x73cbf50
// body: available
// range: 0x73cbf50-0x73cc0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cc0c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cc0c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalAssignFieldFromLocalVariableStringKey
               (long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  if ((DAT_09520ca5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520ca5 = 1;
  }
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_4 + 0x18);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(param_4 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_073cc0c4;
        if (((*(long *)(lVar4 + 0x10) != 0) && (*(long *)(lVar4 + 0x20) != 0)) &&
           (*(char *)(*(long *)(lVar4 + 0x10) + 0x11) == '\0')) {
          if (param_3 == (long *)0x0) goto LAB_073cc0c4;
          uVar2 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
          MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                    (param_3,*(undefined8 *)(lVar4 + 0x20));
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_3 + 0x1f8))
                    (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x158),uVar2,
                     *(undefined8 *)(*param_3 + 0x200));
          if (param_1 == 0) goto LAB_073cc0c4;
          if (*(char *)(param_1 + 0x19) == '\0') {
            MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(param_3,param_5);
          }
          else {
            MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,param_5);
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                    (param_3,*(undefined8 *)(lVar4 + 0x18));
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_073cc0c4;
          MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitStoreValue
                    (*(long *)(lVar4 + 0x10),param_3,param_2,0);
          (**(code **)(*param_3 + 0x268))(param_3,uVar2,*(undefined8 *)(*param_3 + 0x270));
        }
        uVar1 = *(uint *)(param_4 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    return;
  }
LAB_073cc0c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

