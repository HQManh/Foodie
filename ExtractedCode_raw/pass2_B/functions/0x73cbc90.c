// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalCreateInstanceWithArguments
// address: 0x73cbc90
// body: available
// range: 0x73cbc90-0x73cbf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cbf48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cbf4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalCreateInstanceWithArguments
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ushort local_64 [2];
  
  if ((DAT_09520ca7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9b48);
    FUN_03f5c2a4(&DAT_09179460);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091e9460);
    FUN_03f5c2a4(&DAT_091903a0);
    DAT_09520ca7 = 1;
  }
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 != 0) {
      if (0 < *(int *)(lVar8 + 0x18)) {
        uVar9 = 0;
        do {
          lVar2 = thunk_FUN_03f9944c(DAT_091903a0);
          MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass13_0___ctor(lVar2,0);
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar2 == 0) goto LAB_073cbf48;
          plVar7 = (long *)(lVar2 + 0x10);
          *plVar7 = *(long *)(lVar8 + 0x20 + uVar9 * 8);
          thunk_FUN_03f5d7b8(plVar7);
          uVar3 = thunk_FUN_03f9944c(DAT_09179460);
          FUN_05322d94(uVar3,lVar2,DAT_091e9460,0);
          lVar2 = FUN_04ae3154(param_3,uVar3,DAT_091c9b48);
          if (lVar2 == 0) goto LAB_073cbf48;
          MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                    (param_2,*(undefined8 *)(lVar2 + 0x18));
          if ((*plVar7 == 0) || (plVar7 = *(long **)(*plVar7 + 0x18), plVar7 == (long *)0x0))
          goto LAB_073cbf48;
          lVar4 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
          if (lVar4 == 0) goto LAB_073cbf48;
          uVar5 = System_Type__get_IsValueType(lVar4,0);
          if (((uVar5 & 1) == 0) && (*(long *)(lVar2 + 0x10) != 0)) {
            uVar1 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_IsValueType
                              (*(long *)(lVar2 + 0x10),0);
            local_64[0] = 0;
            FUN_05c290f8(local_64,uVar1 & 1,DAT_091b6a48);
            if ((0xff < local_64[0]) && ((local_64[0] & 0xff) != 0)) {
              if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (*(long *)(lVar2 + 0x10) == 0) goto LAB_073cbf48;
              uVar6 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x448);
              uVar3 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                (*(long *)(lVar2 + 0x10),0);
              if (param_2 == (long *)0x0) goto LAB_073cbf48;
              (**(code **)(*param_2 + 600))(param_2,uVar6,uVar3,*(undefined8 *)(*param_2 + 0x260));
            }
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)*(int *)(lVar8 + 0x18));
      }
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x1e8))
                  (param_2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*param_2 + 0x1f0));
        (**(code **)(*param_2 + 0x218))
                  (param_2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x6a0),param_4,
                   *(undefined8 *)(*param_2 + 0x220));
        return;
      }
    }
  }
LAB_073cbf48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

