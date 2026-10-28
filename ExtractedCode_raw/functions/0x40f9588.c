// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$ToBundle
// address: 0x40f9588
// body: available
// range: 0x40f9588-0x40f97e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f97d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f97d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f97e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientSpawnerController__ToBundle(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  
  if ((DAT_09516120 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182bc8);
    FUN_03f5c2a4(&DAT_0917b360);
    FUN_03f5c2a4(&DAT_0917b4f8);
    FUN_03f5c2a4(&DAT_09180158);
    DAT_09516120 = 1;
  }
  if ((param_1 != (long *)0x0) && (plVar11 = (long *)param_1[0x12], plVar11 != (long *)0x0)) {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b360) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_040f9648;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b360,0);
LAB_040f9648:
    uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    plVar11 = (long *)FUN_03f5c394(DAT_09180158,uVar3);
    if (plVar11 != (long *)0x0) {
      if (0 < (int)plVar11[3]) {
        uVar8 = 0;
        do {
          plVar12 = (long *)param_1[0x12];
          if (plVar12 == (long *)0x0) goto LAB_040f97d4;
          lVar7 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917b4f8) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_040f96dc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b4f8,0);
LAB_040f96dc:
          lVar7 = (*(code *)*puVar4)(plVar12,uVar8 & 0xffffffff,puVar4[1]);
          if ((lVar7 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar11[uVar8 + 4] = lVar7;
          thunk_FUN_03f5d7b8(plVar11 + uVar8 + 4,lVar7);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)plVar11[3]);
      }
      lVar7 = thunk_FUN_03f9944c(DAT_09182bc8);
      AnhPD_FoodOrder_ConveyorBundle___ctor(lVar7,0);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = (long)plVar11;
        thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),plVar11);
        uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        *(undefined4 *)(lVar7 + 0x1c) = uVar3;
        lVar5 = param_1[0x15];
        *(long *)(lVar7 + 0x20) = param_1[0x16];
        iVar1 = *(int *)((long)param_1 + 0x9c);
        *(int *)(lVar7 + 0x30) = iVar1;
        uVar2 = *(undefined1 *)((long)param_1 + 0x1ad);
        *(uint *)(lVar7 + 0x18) = (uint)(0 < iVar1);
        plVar11 = param_1 + 0x42;
        if (lVar5 != 0) {
          plVar11 = (long *)(lVar5 + 0x10);
        }
        *(undefined1 *)(lVar7 + 0x34) = uVar2;
        *(int *)(lVar7 + 0x38) = (int)*plVar11;
        return lVar7;
      }
    }
  }
LAB_040f97d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

