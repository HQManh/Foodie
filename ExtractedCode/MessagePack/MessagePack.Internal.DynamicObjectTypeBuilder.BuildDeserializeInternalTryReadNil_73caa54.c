// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalTryReadNil
// address: 0x73caa54
// body: available
// range: 0x73caa54-0x73cac5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cac58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalTryReadNil
               (undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09520cac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_09190410);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09224580);
    DAT_09520cac = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*(undefined8 *)(param_3 + 2),*param_3);
    if (*(int *)(DAT_09190410 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_Internal_ILGeneratorExtensions__EmitCall
              (param_2,*(undefined8 *)(*(long *)(DAT_09190410 + 0xb8) + 0x20));
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    (**(code **)(*param_2 + 0x1f8))
              (param_2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x158),uVar1,
               *(undefined8 *)(*param_2 + 0x200));
    lVar2 = System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
    if (lVar2 != 0) {
      uVar3 = System_Type__get_IsClass(lVar2,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        (**(code **)(*param_2 + 0x248))
                  (param_2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x388),DAT_09224580,
                   *(undefined8 *)(*param_2 + 0x250));
        uVar5 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390);
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        (**(code **)(*param_2 + 0x1e8))
                  (param_2,uVar5,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x78),
                   *(undefined8 *)(*param_2 + 0x1f0));
        puVar4 = (undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3b8);
      }
      else {
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        (**(code **)(*param_2 + 0x198))
                  (param_2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xa0),
                   *(undefined8 *)(*param_2 + 0x1a0));
        puVar4 = (undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148);
      }
      (**(code **)(*param_2 + 0x198))(param_2,*puVar4,*(undefined8 *)(*param_2 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x073cac54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x268))(param_2,uVar1,*(undefined8 *)(*param_2 + 0x270));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

