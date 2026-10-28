// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalDeserializationInfoArrayIntKey
// address: 0x73cc0cc
// body: available
// range: 0x73cc0cc-0x73cc543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cc51c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cc520 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cc52c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cc540 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializationInfoArrayIntKey
                 (long param_1,long *param_2,ulong param_3,char *param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_09520ca9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091809c8);
    FUN_03f5c2a4(&DAT_09190400);
    FUN_03f5c2a4(&DAT_0919e150);
    FUN_03f5c2a4(&DAT_091c8aa0);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091ca890);
    FUN_03f5c2a4(&DAT_091cafb8);
    FUN_03f5c2a4(&DAT_091794c8);
    FUN_03f5c2a4(&DAT_091b7058);
    FUN_03f5c2a4(&DAT_091b7060);
    FUN_03f5c2a4(&DAT_091b7068);
    FUN_03f5c2a4(&DAT_091e93e8);
    FUN_03f5c2a4(&DAT_091e93f0);
    FUN_03f5c2a4(&DAT_09190398);
    DAT_09520ca9 = 1;
  }
  local_68 = 0;
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar10 = puVar7[0xe];
    if (lVar10 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar7 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar11 = *puVar7;
      lVar10 = thunk_FUN_03f9944c(DAT_091794c8);
      FUN_053239c8(lVar10,uVar11,DAT_091e93e8,0);
      plVar3 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x70);
      *plVar3 = lVar10;
      thunk_FUN_03f5d7b8(plVar3,lVar10);
    }
    uVar8 = FUN_04af6d6c(uVar8,lVar10,DAT_091ca890);
    uVar8 = FUN_04adcc84(uVar8,0xffffffff,DAT_091c98c8);
    iVar1 = System_Linq_Enumerable__Max(uVar8,0);
    *param_5 = iVar1;
    if (iVar1 == 0x7fffffff) {
      uVar8 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,DAT_091c8aa0);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar10 = puVar7[0xf];
    if (lVar10 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar7 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar11 = *puVar7;
      lVar10 = thunk_FUN_03f9944c(DAT_091794c8);
      FUN_053239c8(lVar10,uVar11,DAT_091e93f0,0);
      plVar3 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x78);
      *plVar3 = lVar10;
      thunk_FUN_03f5d7b8(plVar3,lVar10);
    }
    lVar10 = FUN_04b04e28(uVar8,lVar10,DAT_091cafb8);
    param_4[0] = '\0';
    param_4[1] = '\0';
    param_4[2] = '\0';
    param_4[3] = '\0';
    param_4[4] = '\0';
    param_4[5] = '\0';
    param_4[6] = '\0';
    param_4[7] = '\0';
    plVar3 = (long *)FUN_03f5c394(DAT_091809c8,iVar1 + 1);
    if (plVar3 != (long *)0x0) {
      if (0 < (int)plVar3[3]) {
        uVar9 = 0;
        plVar12 = plVar3 + 4;
        do {
          if (lVar10 == 0) goto LAB_073cc51c;
          uVar4 = FUN_06ef1fe8(lVar10,uVar9 & 0xffffffff,&local_68,DAT_0919e150);
          if ((uVar4 & 1) == 0) {
            if (*param_4 == '\0') {
              if (param_2 == (long *)0x0) goto LAB_073cc51c;
              uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
              local_70 = 0;
              FUN_05c31764(&local_70,uVar2,DAT_091b7058);
              *(undefined8 *)param_4 = local_70;
            }
            lVar5 = thunk_FUN_03f9944c(DAT_09190400);
            MessagePack_Internal_DynamicObjectTypeBuilder_DeserializeInfo___ctor(lVar5,0);
            uVar2 = FUN_05c3177c(param_4,DAT_091b7068);
            if (lVar5 == 0) goto LAB_073cc51c;
          }
          else {
            if ((param_3 & 1) == 0) {
LAB_073cc43c:
              lVar5 = thunk_FUN_03f9944c(DAT_09190400);
              MessagePack_Internal_DynamicObjectTypeBuilder_DeserializeInfo___ctor(lVar5,0);
              if (lVar5 == 0) goto LAB_073cc51c;
              *(long *)(lVar5 + 0x10) = local_68;
              thunk_FUN_03f5d7b8();
              if ((local_68 == 0) ||
                 (uVar8 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                    (local_68,0), param_2 == (long *)0x0)) goto LAB_073cc51c;
              uVar8 = (**(code **)(*param_2 + 0x178))
                                (param_2,uVar8,*(undefined8 *)(*param_2 + 0x180));
              *(undefined8 *)(lVar5 + 0x18) = uVar8;
              thunk_FUN_03f5d7b8();
            }
            else {
              if (local_68 == 0) goto LAB_073cc51c;
              if (*(char *)(local_68 + 0x10) == '\0') goto LAB_073cc43c;
              lVar5 = thunk_FUN_03f9944c(DAT_09190400);
              MessagePack_Internal_DynamicObjectTypeBuilder_DeserializeInfo___ctor(lVar5,0);
              if (lVar5 == 0) goto LAB_073cc51c;
              *(long *)(lVar5 + 0x10) = local_68;
              thunk_FUN_03f5d7b8();
              if (param_2 == (long *)0x0) goto LAB_073cc51c;
            }
            uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          }
          *(undefined4 *)(lVar5 + 0x28) = uVar2;
          lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar6 == 0) {
            uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *plVar12 = lVar5;
          thunk_FUN_03f5d7b8(plVar12,lVar5);
          uVar9 = uVar9 + 1;
          plVar12 = plVar12 + 1;
        } while ((long)uVar9 < (long)(int)plVar3[3]);
      }
      return plVar3;
    }
  }
LAB_073cc51c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

