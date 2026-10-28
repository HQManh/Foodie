// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalDeserializationInfoArrayStringKey
// address: 0x73cb6dc
// body: available
// range: 0x73cb6dc-0x73cb9b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cb9a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cb9a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cb9b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializationInfoArrayStringKey
                 (long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((DAT_09520ca8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091809c8);
    FUN_03f5c2a4(&DAT_09190400);
    FUN_03f5c2a4(&DAT_091c8aa8);
    FUN_03f5c2a4(&DAT_091c9590);
    FUN_03f5c2a4(&DAT_091794d0);
    FUN_03f5c2a4(&DAT_091e9468);
    FUN_03f5c2a4(&DAT_091903a8);
    DAT_09520ca8 = 1;
  }
  if (((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
     (plVar1 = (long *)FUN_03f5c394(DAT_091809c8,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18)),
     plVar1 != (long *)0x0)) {
    if (0 < (int)plVar1[3]) {
      uVar9 = 0;
      plVar6 = plVar1 + 4;
      do {
        lVar2 = thunk_FUN_03f9944c(DAT_091903a8);
        MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass14_0___ctor(lVar2,0);
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) goto LAB_073cb9a4;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_073cb9a8;
        if (lVar2 == 0) goto LAB_073cb9a4;
        plVar7 = (long *)(lVar2 + 0x10);
        *plVar7 = *(long *)(lVar5 + uVar9 * 8 + 0x20);
        thunk_FUN_03f5d7b8(plVar7);
        if ((param_3 & 1) == 0) {
LAB_073cb834:
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          uVar4 = thunk_FUN_03f9944c(DAT_091794d0);
          FUN_05322d94(uVar4,lVar2,DAT_091e9468,0);
          uVar3 = FUN_04ab6f28(uVar8,uVar4,DAT_091c9590);
          lVar2 = thunk_FUN_03f9944c(DAT_09190400);
          MessagePack_Internal_DynamicObjectTypeBuilder_DeserializeInfo___ctor(lVar2,0);
          if (lVar2 == 0) goto LAB_073cb9a4;
          *(long *)(lVar2 + 0x10) = *plVar7;
          thunk_FUN_03f5d7b8();
          if ((*plVar7 == 0) ||
             (uVar4 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                (*plVar7,0), param_2 == (long *)0x0)) goto LAB_073cb9a4;
          uVar4 = (**(code **)(*param_2 + 0x178))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x180));
          *(undefined8 *)(lVar2 + 0x18) = uVar4;
          thunk_FUN_03f5d7b8();
          lVar5 = DAT_09535400;
          if ((uVar3 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
            uVar4 = (**(code **)(*param_2 + 0x178))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x180))
            ;
          }
          else {
            uVar4 = 0;
          }
          *(undefined8 *)(lVar2 + 0x20) = uVar4;
        }
        else {
          if (*plVar7 == 0) goto LAB_073cb9a4;
          if (*(char *)(*plVar7 + 0x10) == '\0') goto LAB_073cb834;
          lVar2 = thunk_FUN_03f9944c(DAT_09190400);
          MessagePack_Internal_DynamicObjectTypeBuilder_DeserializeInfo___ctor(lVar2,0);
          if (lVar2 == 0) goto LAB_073cb9a4;
          *(long *)(lVar2 + 0x10) = *plVar7;
        }
        thunk_FUN_03f5d7b8();
        lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40));
        if (lVar5 == 0) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if (*(uint *)(plVar1 + 3) <= uVar9) {
LAB_073cb9a8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *plVar6 = lVar2;
        thunk_FUN_03f5d7b8(plVar6,lVar2);
        uVar9 = uVar9 + 1;
        plVar6 = plVar6 + 1;
      } while ((long)uVar9 < (long)(int)plVar1[3]);
    }
    return plVar1;
  }
LAB_073cb9a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

