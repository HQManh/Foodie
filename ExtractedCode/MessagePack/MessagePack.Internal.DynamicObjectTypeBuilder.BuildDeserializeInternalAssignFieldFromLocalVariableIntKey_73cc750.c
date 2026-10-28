// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalAssignFieldFromLocalVariableIntKey
// address: 0x73cc750
// body: available
// range: 0x73cc750-0x73ccb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ccb28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ccb3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalAssignFieldFromLocalVariableIntKey
               (undefined8 param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_09520ca6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e050);
    FUN_03f5c2a4(&DAT_091c8a98);
    FUN_03f5c2a4(&DAT_091cafb0);
    FUN_03f5c2a4(&DAT_091cb630);
    FUN_03f5c2a4(&DAT_09179468);
    FUN_03f5c2a4(&DAT_09179460);
    FUN_03f5c2a4(&DAT_091b7058);
    FUN_03f5c2a4(&DAT_091b7060);
    FUN_03f5c2a4(&DAT_091b7068);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091e93d8);
    FUN_03f5c2a4(&DAT_091e93e0);
    FUN_03f5c2a4(&DAT_09190398);
    DAT_09520ca6 = 1;
  }
  local_70 = 0;
  if (param_7 != -1) {
    local_68 = 0;
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar6 = puVar4[0xc];
    if (lVar6 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar7 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_09179460);
      FUN_05322d94(lVar6,uVar7,DAT_091e93d8,0);
      plVar2 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x60);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    uVar7 = FUN_04b0cafc(param_4,lVar6,DAT_091cb630);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190398);
    }
    puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar6 = puVar4[0xd];
    if (lVar6 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190398);
        puVar4 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar8 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_09179468);
      FUN_053239c8(lVar6,uVar8,DAT_091e93e0,0);
      plVar2 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x68);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    lVar6 = FUN_04b04e28(uVar7,lVar6,DAT_091cafb0);
    if (-1 < param_7) {
      if (lVar6 == 0) {
LAB_073ccb28:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar5 = 0;
      do {
        uVar3 = FUN_06ef1fe8(lVar6,iVar5,&local_70,DAT_0919e050);
        if ((uVar3 & 1) != 0) {
          if ((local_70 == 0) || (*(long *)(local_70 + 0x10) == 0)) goto LAB_073ccb28;
          if (*(char *)(*(long *)(local_70 + 0x10) + 0x11) == '\0') {
            MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,param_6);
            MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_3,iVar5);
            if ((char)local_68 == '\0') {
              if (param_3 == (long *)0x0) goto LAB_073ccb28;
              uVar1 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
              FUN_05c31764(&local_68,uVar1,DAT_091b7058);
            }
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1e8);
            uVar1 = FUN_05c3177c(&local_68,DAT_091b7068);
            if (param_3 == (long *)0x0) goto LAB_073ccb28;
            (**(code **)(*param_3 + 0x1f8))(param_3,uVar7,uVar1,*(undefined8 *)(*param_3 + 0x200));
            if (param_2 == 0) goto LAB_073ccb28;
            if (*(char *)(param_2 + 0x19) == '\0') {
              MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(param_3,param_5);
            }
            else {
              MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,param_5);
            }
            if (local_70 == 0) goto LAB_073ccb28;
            MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                      (param_3,*(undefined8 *)(local_70 + 0x18));
            if ((local_70 == 0) || (*(long *)(local_70 + 0x10) == 0)) goto LAB_073ccb28;
            MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitStoreValue
                      (*(long *)(local_70 + 0x10),param_3,param_1,0);
          }
        }
        if (iVar5 == 0x7fffffff) {
          uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,DAT_091c8a98);
        }
        iVar5 = iVar5 + 1;
      } while (param_7 + 1 != iVar5);
      if ((char)local_68 != '\0') {
        uVar1 = FUN_05c3177c(&local_68,DAT_091b7068);
        if (param_3 == (long *)0x0) goto LAB_073ccb28;
        (**(code **)(*param_3 + 0x268))(param_3,uVar1,*(undefined8 *)(*param_3 + 0x270));
      }
    }
  }
  return;
}

