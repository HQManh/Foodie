// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodResponse$$GetObjectData
// address: 0x74a7690
// body: available
// range: 0x74a7690-0x74a7aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a7a80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7a84 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7a88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7a98 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7aa4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074a7aa0) */

void System_Runtime_Remoting_Messaging_MethodResponse__GetObjectData(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_095213bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09216c28);
    FUN_03f5c2a4(&DAT_09216af8);
    FUN_03f5c2a4(&DAT_09216ac8);
    FUN_03f5c2a4(&DAT_09216af0);
    FUN_03f5c2a4(&DAT_09216ac0);
    FUN_03f5c2a4(&DAT_09216ad0);
    FUN_03f5c2a4(&DAT_09216ae0);
    FUN_03f5c2a4(&DAT_09216a78);
    DAT_095213bf = 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    if (param_2 == 0) goto LAB_074a7a9c;
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216af0,*(undefined8 *)(param_1 + 0x20),0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216ac0,*(undefined8 *)(param_1 + 0x10),0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216ac8,*(undefined8 *)(param_1 + 0x40),0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216af8,*(undefined8 *)(param_1 + 0x18),0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216ae0,*(undefined8 *)(param_1 + 0x30),0);
    puVar4 = &DAT_09216ad0;
    lVar3 = *(long *)(param_1 + 0x50);
  }
  else {
    if (param_2 == 0) {
LAB_074a7a9c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar4 = &DAT_09216c28;
  }
  System_Runtime_Serialization_SerializationInfo__AddValue(param_2,*puVar4,lVar3,0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216a78,*(undefined8 *)(param_1 + 0x68),0);
  plVar7 = *(long **)(param_1 + 0x80);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_09185a20) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_074a7898;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a20,9);
LAB_074a7898:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_074a792c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_074a792c:
    uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_074a7a3c;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_074a7994;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_074a7994:
    plVar1 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar1 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    plVar2 = (long *)thunk_FUN_03f99594();
    plVar1 = (long *)*plVar2;
    if ((plVar1 != (long *)0x0) && (*plVar1 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1,DAT_09535468,plVar2[1]);
    }
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,plVar1,plVar2[1],0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_074a7a58;
    }
  }
LAB_074a7a3c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_074a7a58:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return;
}

