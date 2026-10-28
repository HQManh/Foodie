// rea decompile_all
// name: System.Runtime.Remoting.Messaging.LogicalCallContext$$GetObjectData
// address: 0x749ce3c
// body: available
// range: 0x749ce3c-0x749d183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749d134 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d17c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_LogicalCallContext__GetObjectData
               (long param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_0952135a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187ca0);
    FUN_03f5c2a4(&DAT_09216ab0);
    FUN_03f5c2a4(&DAT_09216ad8);
    FUN_03f5c2a4(&DAT_09216a90);
    FUN_03f5c2a4(&DAT_09216ae8);
    DAT_0952135a = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d27a8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if (*(int *)(DAT_09187ca0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_Serialization_SerializationInfo__SetType
            (param_2,**(undefined8 **)(DAT_09187ca0 + 0xb8),0);
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216ad8,*(long *)(param_1 + 0x18),0);
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (param_4 == 0x80)) {
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216ae8,*(long *)(param_1 + 0x20),0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09216ab0,*(long *)(param_1 + 0x28),0);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09216a90,1,0);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 == (long *)0x0) ||
     (iVar1 = (**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0)), iVar1 < 1)) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 == (long *)0x0) ||
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330)),
     plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0749d028;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0749d028:
    uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      return;
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185a30) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0749d084;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a30,0);
LAB_0749d084:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185a30) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0749d0e4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a30,1);
LAB_0749d0e4:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4,DAT_09535468,uVar5);
    }
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,plVar4,uVar5,0);
  } while( true );
}

