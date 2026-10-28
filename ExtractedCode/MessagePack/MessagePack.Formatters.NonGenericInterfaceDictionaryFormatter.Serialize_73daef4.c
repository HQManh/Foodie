// rea decompile_all
// name: MessagePack.Formatters.NonGenericInterfaceDictionaryFormatter$$Serialize
// address: 0x73daef4
// body: available
// range: 0x73daef4-0x73db1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73db00c to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73db1b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73db1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_NonGenericInterfaceDictionaryFormatter__Serialize
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09520d0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_0917b1e0);
    DAT_09520d0d = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if (param_3 == (long *)0x0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(DAT_09184938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)FUN_04264fcc(uVar7,DAT_091ccf38);
  lVar4 = *param_3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_091857d8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_073db020;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091857d8,1);
LAB_073db020:
  uVar1 = (*(code *)*puVar3)(param_3,puVar3[1]);
  MessagePack_MessagePackWriter__WriteMapHeader(param_2,uVar1,0);
  local_50 = MessagePack_Utilities__GetEntryEnumerator(param_3,0);
  local_48 = MessagePack_Utilities_NonGenericDictionaryEnumerable__GetEnumerator(&local_50,0);
  do {
    uVar5 = MessagePack_Utilities_NonGenericDictionaryEnumerator__MoveNext(&local_48,0);
    if ((uVar5 & 1) == 0) {
      MessagePack_Utilities_NonGenericDictionaryEnumerator__Dispose(&local_48,0);
      return;
    }
    auVar8 = MessagePack_Utilities_NonGenericDictionaryEnumerator__get_Current(&local_48,0);
    local_58 = *(undefined8 *)(param_2 + 0x50);
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_58,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b1e0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_073db10c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b1e0,0);
LAB_073db10c:
    (*(code *)*puVar3)(plVar2,param_2,auVar8._0_8_,param_4,puVar3[1]);
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b1e0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_073db170;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b1e0,0);
LAB_073db170:
    (*(code *)*puVar3)(plVar2,param_2,auVar8._8_8_,param_4,puVar3[1]);
  } while( true );
}

