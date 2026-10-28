// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CycleBagPreview
// address: 0x444cb14
// body: available
// range: 0x444cb14-0x444cce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444cce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__CycleBagPreview(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_0951800c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b328);
    DAT_0951800c = 1;
  }
  if (((*(char *)(param_1 + 0x122) == '\0') || (*(int *)(param_1 + 0x188) != 0)) ||
     (*(int *)(param_1 + 0x16c) < 0)) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x178);
  CookingGraph_CookingLevelSimulation__get_BagAddress(&local_48,param_1);
  if (lVar8 != 0) {
    uStack_58 = uStack_40;
    local_60 = local_48;
    local_50 = local_38;
    plVar4 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar8,&local_60,0);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b328) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0444cc08;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b328,0);
LAB_0444cc08:
      iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (iVar2 < 2) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x144);
      lVar8 = *(long *)(param_1 + 0x178);
      CookingGraph_CookingLevelSimulation__get_BagAddress(&local_48,param_1);
      if (lVar8 != 0) {
        uStack_78 = uStack_40;
        local_80 = local_48;
        local_70 = local_38;
        plVar4 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar8,&local_80,0);
        if (plVar4 != (long *)0x0) {
          lVar8 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b328) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0444cca8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b328,0);
LAB_0444cca8:
          iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          iVar2 = iVar2 + 1;
          iVar1 = 0;
          if (iVar3 != 0) {
            iVar1 = iVar2 / iVar3;
          }
          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
          *(int *)(param_1 + 0x144) = iVar2 - iVar1 * iVar3;
          *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

