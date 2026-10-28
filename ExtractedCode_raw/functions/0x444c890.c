// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$get_BagPreviewIngredient
// address: 0x444c890
// body: available
// range: 0x444c890-0x444cb13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444cb10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__get_BagPreviewIngredient(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined1 auStack_d8 [8];
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_0951800b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b328);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091b6f98);
    DAT_0951800b = 1;
  }
  if (*(int *)(param_1 + 0x16c) < 0) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x178);
  CookingGraph_CookingLevelSimulation__get_BagAddress(&local_50,param_1);
  if (lVar9 != 0) {
    local_60 = local_40;
    uStack_68 = uStack_48;
    local_70 = local_50;
    plVar4 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar9,&local_70,0);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b328) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0444c978;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b328,0);
LAB_0444c978:
      iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (iVar2 < 1) {
        return 0;
      }
      lVar9 = *(long *)(param_1 + 0x178);
      CookingGraph_CookingLevelSimulation__get_BagAddress(&local_50,param_1);
      if (lVar9 != 0) {
        uStack_88 = uStack_48;
        local_90 = local_50;
        local_80 = local_40;
        plVar4 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar9,&local_90,0);
        iVar2 = *(int *)(param_1 + 0x144);
        lVar9 = *(long *)(param_1 + 0x178);
        CookingGraph_CookingLevelSimulation__get_BagAddress(&local_a8,param_1);
        if (lVar9 != 0) {
          uStack_b8 = uStack_a0;
          local_c0 = local_a8;
          local_b0 = local_98;
          plVar6 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar9,&local_c0,0);
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917b328) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0444ca5c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b328,0);
LAB_0444ca5c:
            iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            if (plVar4 != (long *)0x0) {
              iVar1 = 0;
              if (iVar3 != 0) {
                iVar1 = iVar2 / iVar3;
              }
              lVar9 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_0917b4c0) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0444cac8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b4c0,0);
LAB_0444cac8:
              (*(code *)*puVar5)(auStack_d8,plVar4,iVar2 - iVar1 * iVar3,puVar5[1]);
              local_38 = 0;
              FUN_05c3078c(&local_38,local_d0,DAT_091b6f98);
              return local_38;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

