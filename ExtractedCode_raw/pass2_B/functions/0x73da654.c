// rea decompile_all
// name: MessagePack.Formatters.NonGenericInterfaceListFormatter$$Serialize
// address: 0x73da654
// body: available
// range: 0x73da654-0x73daa6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73da7a0 to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73daa54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73daa58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73daa5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73daa60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73daa68 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073daa64) */

void MessagePack_Formatters_NonGenericInterfaceListFormatter__Serialize
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  if ((DAT_09520d0a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b1e0);
    DAT_09520d0a = 1;
  }
  local_58 = 0;
  if (param_3 == (long *)0x0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(DAT_09184938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)FUN_04264fcc(uVar8,DAT_091ccf38);
  lVar5 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091857d8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_073da7b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091857d8,1);
LAB_073da7b4:
  uVar1 = (*(code *)*puVar3)(param_3,puVar3[1]);
  MessagePack_MessagePackWriter__WriteArrayHeader(param_2,uVar1,0);
  lVar5 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09185b08) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_073da81c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185b08,0);
LAB_073da81c:
  plVar4 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_073da8b0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_073da8b0:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_03f99350(plVar4,DAT_09185a58);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_073daa0c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_073da918;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_073da918:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    local_58 = *(undefined8 *)(param_2 + 0x50);
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_58,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b1e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_073da99c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b1e0,0);
LAB_073da99c:
    (*(code *)*puVar3)(plVar2,param_2,uVar8,param_4,puVar3[1]);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_073daa28;
    }
  }
LAB_073daa0c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_073daa28:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

