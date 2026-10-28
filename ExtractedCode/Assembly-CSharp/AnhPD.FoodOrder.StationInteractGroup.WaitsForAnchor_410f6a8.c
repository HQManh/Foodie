// rea decompile_all
// name: AnhPD.FoodOrder.StationInteractGroup$$WaitsForAnchor
// address: 0x410f6a8
// body: available
// range: 0x410f6a8-0x410f963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410f958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_StationInteractGroup__WaitsForAnchor(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_095161ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_0917b570);
    DAT_095161ee = 1;
  }
  plVar8 = *(long **)(param_1 + 0x40);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b3d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0410f748;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b3d8,0);
LAB_0410f748:
    iVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (iVar1 != 0) {
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 != (long *)0x0) {
        iVar1 = 0;
        do {
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b3d8) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0410f7b8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b3d8,0);
LAB_0410f7b8:
          iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
          plVar8 = *(long **)(param_1 + 0x40);
          if (iVar2 <= iVar1) {
            if (plVar8 != (long *)0x0) {
              iVar1 = 0;
              goto LAB_0410f874;
            }
            break;
          }
          if (plVar8 == (long *)0x0) break;
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b570) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0410f820;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b570,0);
LAB_0410f820:
          uVar4 = (*(code *)*puVar3)(plVar8,iVar1,puVar3[1]);
          uVar6 = System_String__op_Equality(uVar4,param_2,0);
          if ((uVar6 & 1) != 0) {
            return false;
          }
          plVar8 = *(long **)(param_1 + 0x40);
          iVar1 = iVar1 + 1;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_0410f958;
    }
  }
  return false;
LAB_0410f874:
  do {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b3d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0410f8c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b3d8,0);
LAB_0410f8c0:
    iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (iVar2 <= iVar1) {
      return true;
    }
    plVar8 = *(long **)(param_1 + 0x40);
    if (plVar8 == (long *)0x0) break;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b570) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0410f92c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b570,0);
LAB_0410f92c:
    uVar4 = (*(code *)*puVar3)(plVar8,iVar1,puVar3[1]);
    uVar6 = AnhPD_FoodOrder_StationInteractGroup__HasFilled(param_1,uVar4);
    if ((uVar6 & 1) != 0) {
      return iVar2 <= iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x40);
    iVar1 = iVar1 + 1;
  } while (plVar8 != (long *)0x0);
LAB_0410f958:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

