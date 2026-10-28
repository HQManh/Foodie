// rea decompile_all
// name: MessagePack.Formatters.PrimitiveObjectFormatter$$Serialize
// address: 0x73e41b8
// body: available
// range: 0x73e41b8-0x73e4a9b inclusive
// range: 0x73e4ae8-0x73e4aef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e4338 to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73e4a18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e4a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e4a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e4a90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e4a98 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e4aec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073e4ae8) */

void MessagePack_Formatters_PrimitiveObjectFormatter__Serialize
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  if ((DAT_09520dae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091a0cb0);
    FUN_03f5c2a4(&DAT_091a0cc0);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09189538);
    DAT_09520dae = 1;
  }
  local_44 = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_3 == (long *)0x0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  plVar3 = (long *)System_Object__GetType(param_3,0);
  if (*(int *)(DAT_09189538 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189538);
  }
  lVar4 = *(long *)(*(long *)(DAT_09189538 + 0xb8) + 8);
  if (lVar4 == 0) {
LAB_073e4a20:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = FUN_06fcbf70(lVar4,plVar3,&local_44,DAT_091a0cb0);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(plVar3,0);
    if (plVar6 == (long *)0x0) goto LAB_073e4a20;
    uVar5 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03f99350(param_3,DAT_09185a20);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_091857d8) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_073e44fc;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091857d8,1);
LAB_073e44fc:
        uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        MessagePack_MessagePackWriter__WriteMapHeader(param_2,uVar2,0);
        local_58 = MessagePack_Utilities__GetEntryEnumerator(plVar6,0);
        local_50 = MessagePack_Utilities_NonGenericDictionaryEnumerable__GetEnumerator(&local_58,0);
        while (uVar5 = MessagePack_Utilities_NonGenericDictionaryEnumerator__MoveNext(&local_50,0),
              (uVar5 & 1) != 0) {
          auVar14 = MessagePack_Utilities_NonGenericDictionaryEnumerator__get_Current(&local_50,0);
          MessagePack_Formatters_PrimitiveObjectFormatter__Serialize
                    (param_1,param_2,auVar14._0_8_,param_4);
          MessagePack_Formatters_PrimitiveObjectFormatter__Serialize
                    (param_1,param_2,auVar14._8_8_,param_4);
        }
        MessagePack_Utilities_NonGenericDictionaryEnumerator__Dispose(&local_50,0);
        return;
      }
      plVar6 = (long *)thunk_FUN_03f99350(param_3);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_091857d8) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_073e4800;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091857d8,1);
LAB_073e4800:
        uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        MessagePack_MessagePackWriter__WriteArrayHeader(param_2,uVar2,0);
        lVar4 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185b08) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_073e4870;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b08,0);
LAB_073e4870:
        plVar3 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        do {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_073e48ec;
              }
              uVar5 = uVar5 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_073e48ec:
          uVar5 = (*(code *)*puVar7)(plVar3,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar4 = *plVar3;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 == 0) goto LAB_073e49d4;
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_073e49bc;
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_073e4954;
              }
              uVar5 = uVar5 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_073e4954:
          uVar11 = (*(code *)*puVar7)(plVar3,puVar7[1]);
          MessagePack_Formatters_PrimitiveObjectFormatter__Serialize(param_1,param_2,uVar11,param_4)
          ;
        } while( true );
      }
      goto switchD_073e42f0_default;
    }
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = System_Enum__GetUnderlyingType(plVar3,0);
    if (*(int *)(DAT_09189538 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189538);
    }
    lVar4 = *(long *)(*(long *)(DAT_09189538 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_073e4a20;
    iVar1 = FUN_06fca3c8(lVar4,uVar11,DAT_091a0cc0);
    if (5 < iVar1) {
      if (7 < iVar1) {
        if (iVar1 != 8) {
          if (iVar1 != 9) goto switchD_073e42f0_default;
          goto LAB_073e4630;
        }
        goto LAB_073e47d4;
      }
      if (iVar1 != 6) {
        if (iVar1 != 7) goto switchD_073e42f0_default;
        goto LAB_073e4690;
      }
      goto LAB_073e4794;
    }
    if (3 < iVar1) {
      if (iVar1 != 4) {
        if (iVar1 != 5) goto switchD_073e42f0_default;
        goto LAB_073e46e0;
      }
      goto LAB_073e47b4;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) goto switchD_073e42f0_default;
      goto LAB_073e4668;
    }
LAB_073e4774:
    puVar8 = (undefined1 *)FUN_039aef84(param_3,DAT_09535408);
    MessagePack_MessagePackWriter__WriteInt8(param_2,*puVar8,0);
  }
  else {
    switch(local_44) {
    case 0:
      puVar8 = (undefined1 *)FUN_039aef84(param_3,DAT_09535400);
      MessagePack_MessagePackWriter__Write(param_2,*puVar8,0);
      break;
    case 1:
      puVar10 = (undefined2 *)FUN_039aef84(param_3,DAT_09535460);
      MessagePack_MessagePackWriter__Write(param_2,*puVar10,0);
      break;
    case 2:
      goto LAB_073e4774;
    case 3:
LAB_073e4668:
      puVar8 = (undefined1 *)FUN_039aef84(param_3,DAT_095353f0);
      MessagePack_MessagePackWriter__WriteUInt8(param_2,*puVar8,0);
      break;
    case 4:
LAB_073e47b4:
      puVar10 = (undefined2 *)FUN_039aef84(param_3,DAT_09535410);
      MessagePack_MessagePackWriter__WriteInt16(param_2,*puVar10,0);
      break;
    case 5:
LAB_073e46e0:
      puVar10 = (undefined2 *)FUN_039aef84(param_3,DAT_09535418);
      MessagePack_MessagePackWriter__WriteUInt16(param_2,*puVar10,0);
      break;
    case 6:
LAB_073e4794:
      puVar9 = (undefined4 *)FUN_039aef84(param_3,DAT_09535420);
      MessagePack_MessagePackWriter__WriteInt32(param_2,*puVar9,0);
      break;
    case 7:
LAB_073e4690:
      puVar9 = (undefined4 *)FUN_039aef84(param_3,DAT_09535428);
      MessagePack_MessagePackWriter__WriteUInt32(param_2,*puVar9,0);
      break;
    case 8:
LAB_073e47d4:
      puVar7 = (undefined8 *)FUN_039aef84(param_3,DAT_09535440);
      MessagePack_MessagePackWriter__WriteInt64(param_2,*puVar7,0);
      break;
    case 9:
LAB_073e4630:
      puVar7 = (undefined8 *)FUN_039aef84(param_3,DAT_09535448);
      MessagePack_MessagePackWriter__WriteUInt64(param_2,*puVar7,0);
      break;
    case 10:
      puVar9 = (undefined4 *)FUN_039aef84(param_3,DAT_09535450);
      MessagePack_MessagePackWriter__Write(*puVar9,param_2,0);
      break;
    case 0xb:
      puVar7 = (undefined8 *)FUN_039aef84(param_3,DAT_09535458);
      MessagePack_MessagePackWriter__Write(*puVar7,param_2,0);
      break;
    case 0xc:
      puVar7 = (undefined8 *)FUN_039aef84(param_3,DAT_09183548);
      MessagePack_MessagePackWriter__Write(param_2,*puVar7,0);
      break;
    case 0xd:
      if (*param_3 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3);
      }
      FUN_0642dfb8(param_2,param_3,0);
      break;
    case 0xe:
      uVar11 = FUN_039bcaa8(param_3,DAT_0917fc88);
      MessagePack_MessagePackWriter__Write(param_2,uVar11,0);
      break;
    default:
switchD_073e42f0_default:
      FUN_039b1d98(plVar3);
      uVar11 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar12 = thunk_FUN_03fc39d4(&DAT_09208fe8);
      uVar11 = System_String__Concat(uVar12,uVar11,0);
      thunk_FUN_03fc39d4(&DAT_09188180);
      uVar12 = thunk_FUN_03f9944c();
      MessagePack_MessagePackSerializationException___ctor(uVar12,uVar11,0);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091d6520);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar12,uVar11);
    }
  }
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_073e49bc:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_073e49f0;
    }
  }
LAB_073e49d4:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_073e49f0:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
  return;
}

