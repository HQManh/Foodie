// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator.<>c__DisplayClass7_0$$<BuildDish>g__TryFill|3
// address: 0x44328b8
// body: available
// range: 0x44328b8-0x4432afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4432af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4432af8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__TryFill_3
          (long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_09517fba & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb4e0);
    FUN_03f5c2a4(&DAT_09179758);
    FUN_03f5c2a4(&DAT_0917b598);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e83e0);
    FUN_03f5c2a4(&DAT_0918f980);
    DAT_09517fba = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f980);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b598) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_044329b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b598,0);
LAB_044329b8:
      lVar6 = (*(code *)*puVar4)(plVar9,param_2,puVar4[1]);
      plVar9 = (long *)(lVar3 + 0x10);
      *plVar9 = lVar6;
      thunk_FUN_03f5d7b8(plVar9,lVar6);
      lVar6 = *(long *)(param_1 + 0x48);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= param_2) {
LAB_04432af8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        iVar1 = *(int *)(lVar6 + (long)(int)param_2 * 4 + 0x20);
        iVar2 = CookingGraph_CustomerOrderGenerator__Capacity
                          (*plVar9,*(undefined4 *)(param_1 + 0x10));
        if (iVar2 <= iVar1) {
          return 0;
        }
        if (*plVar9 != 0) {
          uVar10 = *(undefined8 *)(*plVar9 + 0x20);
          uVar5 = thunk_FUN_03f9944c(DAT_09179758);
          FUN_0533040c(uVar5,lVar3,DAT_091e83e0,0);
          uVar5 = FUN_04b0ce00(uVar10,uVar5,DAT_091cb4e0);
          uVar5 = CookingGraph_CustomerOrderGenerator__WeightedPick
                            (uVar5,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            return 0;
          }
          uVar7 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__Put_1
                            (param_1,param_2,uVar5);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          lVar3 = *(long *)(param_1 + 0x48);
          if (lVar3 != 0) {
            if (param_2 < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + (long)(int)param_2 * 4;
              *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
              return 1;
            }
            goto LAB_04432af8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

