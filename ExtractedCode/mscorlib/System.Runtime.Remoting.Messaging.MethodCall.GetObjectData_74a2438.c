// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodCall$$GetObjectData
// address: 0x74a2438
// body: available
// range: 0x74a2438-0x74a2833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a280c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2810 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2824 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2830 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074a282c) */

void System_Runtime_Remoting_Messaging_MethodCall__GetObjectData(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09521396 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09216aa8);
    FUN_03f5c2a4(&DAT_09216a70);
    FUN_03f5c2a4(&DAT_09216af8);
    FUN_03f5c2a4(&DAT_09216ac8);
    FUN_03f5c2a4(&DAT_09216af0);
    FUN_03f5c2a4(&DAT_09216ac0);
    FUN_03f5c2a4(&DAT_09216a78);
    DAT_09521396 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216af0,*(undefined8 *)(param_1 + 0x18),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216ac0,*(undefined8 *)(param_1 + 0x20),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216ac8,*(undefined8 *)(param_1 + 0x30),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216a70,*(undefined8 *)(param_1 + 0x28),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216a78,*(undefined8 *)(param_1 + 0x40),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216af8,*(undefined8 *)(param_1 + 0x10),0);
  System_Runtime_Serialization_SerializationInfo__AddValue
            (param_2,DAT_09216aa8,*(undefined8 *)(param_1 + 0x50),0);
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_09185a20) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_074a2620;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a20,9);
LAB_074a2620:
  plVar7 = (long *)(*(code *)*puVar1)(plVar7,puVar1[1]);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_074a26b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_074a26b4:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_074a27c4;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_074a271c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_074a271c:
    plVar2 = (long *)(*(code *)*puVar1)(plVar7,puVar1[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    plVar3 = (long *)thunk_FUN_03f99594();
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2,DAT_09535468,plVar3[1]);
    }
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,plVar2,plVar3[1],0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_074a27e0;
    }
  }
LAB_074a27c4:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_074a27e0:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
  return;
}

