// rea decompile_all
// name: MessagePack.Resolvers.DynamicUnionResolver.MessagePackWriterTypeInfo$$.cctor
// address: 0x73aaad0
// body: available
// range: 0x73aaad0-0x73aad4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73aad38 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73aad3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73aad40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73aad4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_DynamicUnionResolver_MessagePackWriterTypeInfo___cctor(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_09520ba7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190448);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09213450);
    FUN_03f5c2a4(&DAT_09213430);
    FUN_03f5c2a4(&DAT_09213410);
    DAT_09520ba7 = 1;
  }
  uVar1 = DAT_09172440;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  uVar1 = System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar1,0);
  **(undefined8 **)(DAT_09190448 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09190448 + 0xb8),uVar1);
  uVar1 = System_Type__GetTypeFromHandle(DAT_09172440,0);
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
  lVar3 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_073aad44:
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if ((int)plVar2[3] != 0) {
      plVar2[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
      uVar1 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                        (uVar1,DAT_09213430,plVar2,0);
      puVar5 = (undefined8 *)(*(long *)(DAT_09190448 + 0xb8) + 8);
      *puVar5 = uVar1;
      thunk_FUN_03f5d7b8(puVar5,uVar1);
      uVar1 = System_Type__GetTypeFromHandle(DAT_09172440,0);
      plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
      lVar3 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
      if (plVar2 == (long *)0x0) goto LAB_073aad3c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_073aad44;
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar3;
        thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
        uVar1 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                          (uVar1,DAT_09213410,plVar2,0);
        puVar5 = (undefined8 *)(*(long *)(DAT_09190448 + 0xb8) + 0x10);
        *puVar5 = uVar1;
        thunk_FUN_03f5d7b8(puVar5,uVar1);
        uVar1 = System_Type__GetTypeFromHandle(DAT_09172440,0);
        uVar1 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                          (uVar1,DAT_09213450,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10)
                           ,0);
        puVar5 = (undefined8 *)(*(long *)(DAT_09190448 + 0xb8) + 0x18);
        *puVar5 = uVar1;
        thunk_FUN_03f5d7b8(puVar5,uVar1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_073aad3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

