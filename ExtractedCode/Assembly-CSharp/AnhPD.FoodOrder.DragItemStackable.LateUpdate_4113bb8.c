// rea decompile_all
// name: AnhPD.FoodOrder.DragItemStackable$$LateUpdate
// address: 0x4113bb8
// body: available
// range: 0x4113bb8-0x4113deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4113dcc to 0x4113df4 AnhPD.FoodOrder.DragItemStackable$$Absorb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4113de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItemStackable__LateUpdate(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_0951621b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ce8);
    FUN_03f5c2a4(&DAT_0917b338);
    FUN_03f5c2a4(&DAT_0917b4d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951621b = 1;
  }
  if ((int)param_1[0x13] != 2) {
    return;
  }
  if (*(int *)((long)param_1 + 0x94) < 2) {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar6 = param_1[0x14];
  if (lVar6 == 0) {
    return;
  }
  uVar2 = AnhPD_FoodOrder_IngCell__IsLanded(lVar6,param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar7 = *(long **)(lVar6 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_04113de8;
  lVar4 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917b338) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04113cb0;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b338,0);
LAB_04113cb0:
  iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if (iVar1 < 1) goto LAB_04113d54;
  plVar7 = *(long **)(lVar6 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_04113de8;
  lVar6 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917b4d0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04113d20;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4d0,0);
LAB_04113d20:
  plVar7 = (long *)(*(code *)*puVar3)(plVar7,0,puVar3[1]);
  if (plVar7 == (long *)0x0) {
LAB_04113d54:
    plVar7 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_09183ce8 + 0x130)) goto LAB_04113d54;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_09183ce8 + 0x130) * 8 + -8) !=
        DAT_09183ce8) {
      plVar7 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(plVar7,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(plVar7,param_1,0);
    if ((uVar2 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        AnhPD_FoodOrder_DragItemStackable__Absorb(plVar7,param_1,1);
        return;
      }
LAB_04113de8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

