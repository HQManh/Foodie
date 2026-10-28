// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserialize
// address: 0x73ca214
// body: available
// range: 0x73ca214-0x73ca4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ca4d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca4e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserialize
               (undefined8 param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5,
               int param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint5 local_80;
  undefined3 uStack_7b;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_09520ca2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c8a90);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_09188c40);
    DAT_09520ca2 = 1;
  }
  local_70 = 0;
  _local_80 = 0;
  local_78 = (long *)0x0;
  local_68 = param_4;
  thunk_FUN_03f5d7b8(&local_68,param_4);
  local_70._0_5_ = CONCAT14(1,param_6);
  if (param_6 != 0x7fffffff) {
    local_78 = param_4;
    thunk_FUN_03f5d7b8(&local_78,param_4);
    local_80 = (uint5)(param_6 + 1);
    if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalTryReadNil
              (param_1,param_4,&local_70);
    if (param_4 != (long *)0x0) {
      uVar4 = (**(code **)(*param_4 + 0x178))(param_4,param_1,*(undefined8 *)(*param_4 + 0x180));
      if ((param_2 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
        iVar1 = *(int *)(*(long *)(param_2 + 0x28) + 0x18);
        if (iVar1 == 0) {
          if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalCreateInstance
                    (param_1,param_2,param_4,uVar4);
        }
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDepthStep
                  (param_4,&local_70,&local_80);
        uVar5 = MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalReadHeaderLength
                          (param_2,param_4,&local_70);
        uVar6 = MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalResolver
                          (param_2,param_4,&local_80);
        plVar3 = local_78;
        uVar2 = _local_80;
        if (*(char *)(param_2 + 0x18) == '\0') {
          if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeEachPropertyStringKey
                    (param_2,param_3,param_4,param_5,iVar1 == 0,&local_70,uVar2,plVar3,uVar6,uVar4,
                     uVar5);
        }
        else {
          if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeEachPropertyIntKey
                    (param_2,param_3,param_4,param_5,iVar1 == 0,&local_70,&local_80,uVar6,uVar4,
                     uVar5);
        }
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalOnAfterDeserialize
                  (param_1,param_2,param_4,uVar4);
        MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDepthUnStep
                  (param_4,&local_70);
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        (**(code **)(*param_4 + 0x218))
                  (param_4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x690),uVar4,
                   *(undefined8 *)(*param_4 + 0x220));
        (**(code **)(*param_4 + 0x198))
                  (param_4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                   *(undefined8 *)(*param_4 + 0x1a0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,DAT_091c8a90);
}

