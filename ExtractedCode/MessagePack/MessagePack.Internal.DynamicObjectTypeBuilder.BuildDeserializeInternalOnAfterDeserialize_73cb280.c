// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalOnAfterDeserialize
// address: 0x73cb280
// body: available
// range: 0x73cb280-0x73cb5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cb5c8 to 0x73bbb98 MessagePack.Internal.ILGeneratorExtensions$$EmitCall (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73cb5cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalOnAfterDeserialize
               (undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09520cae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091c92c0);
    FUN_03f5c2a4(&DAT_091caaa0);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_09179190);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091e9410);
    FUN_03f5c2a4(&DAT_091e9418);
    FUN_03f5c2a4(&DAT_09190398);
    DAT_09520cae = 1;
  }
  plVar1 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xa08))(plVar1,*(undefined8 *)(*plVar1 + 0xa10));
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190398);
    }
    puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar5 = puVar4[0x11];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190398);
        puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09179190);
      FUN_05322d94(lVar5,uVar6,DAT_091e9410,0);
      plVar1 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x88);
      *plVar1 = lVar5;
      thunk_FUN_03f5d7b8(plVar1,lVar5);
    }
    uVar3 = FUN_04ab300c(uVar2,lVar5,DAT_091c92c0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (param_2 != 0) {
      if (*(char *)(param_2 + 0x19) != '\0') {
        MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,param_4);
      }
      uVar2 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethods(param_1,0);
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190398);
      }
      puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
      lVar5 = puVar4[0x12];
      if (lVar5 == 0) {
        if (*(int *)(DAT_09190398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190398);
          puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
        }
        uVar6 = *puVar4;
        lVar5 = thunk_FUN_03f9944c(DAT_09178d40);
        FUN_05322d94(lVar5,uVar6,DAT_091e9418,0);
        plVar1 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x90);
        *plVar1 = lVar5;
        thunk_FUN_03f5d7b8(plVar1,lVar5);
      }
      lVar5 = FUN_04b01688(uVar2,lVar5,DAT_091caaa0);
      uVar3 = MessagePack_Internal_ObjectSerializationInfo__get_IsStruct(param_2,0);
      if (lVar5 == 0) {
        if ((uVar3 & 1) != 0) {
          MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,param_4);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (param_3 == (long *)0x0) goto LAB_073cb5cc;
          (**(code **)(*param_3 + 600))
                    (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x448),param_1,
                     *(undefined8 *)(*param_3 + 0x260));
        }
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitCall
                  (param_3,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x88));
        return;
      }
      if ((uVar3 & 1) != 0) {
        MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(param_3,param_4);
      }
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073cb538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x238))
                  (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138),lVar5,
                   *(undefined8 *)(*param_3 + 0x240));
        return;
      }
    }
  }
LAB_073cb5cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

