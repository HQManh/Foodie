// rea decompile_all
// name: System.Runtime.Remoting.Messaging.LogicalCallContext$$Merge
// address: 0x749d8ec
// body: available
// range: 0x749d8ec-0x749db0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749db04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749db0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_LogicalCallContext__Merge(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_0952135c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_0952135c = 1;
  }
  if ((((param_2 == 0) || (param_1 == param_2)) ||
      (plVar2 = *(long **)(param_2 + 0x10), plVar2 == (long *)0x0)) ||
     (iVar1 = (**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0)), iVar1 < 1)) {
    return;
  }
  plVar2 = (long *)System_Runtime_Remoting_Messaging_LogicalCallContext__get_Datastore(param_2);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330)),
     plVar2 != (long *)0x0)) {
    do {
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0749d9e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0749d9e4:
      uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar8 & 1) == 0) {
        return;
      }
      plVar4 = (long *)System_Runtime_Remoting_Messaging_LogicalCallContext__get_Datastore(param_1);
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a30) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0749da4c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a30,0);
LAB_0749da4c:
      plVar5 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a30) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0749daac;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a30,1);
LAB_0749daac:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) break;
      if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5,DAT_09535468,uVar6);
      }
      (**(code **)(*plVar4 + 0x318))(plVar4,plVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

