// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass108_1$$<GridAssemblyDependencies>b__1
// address: 0x448c21c
// body: available
// range: 0x448c21c-0x448c44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448c440 to 0x53d750c FUN_053d750c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x448c444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448c448 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation_<>c__DisplayClass108_1__<GridAssemblyDependencies>b__1
          (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_0951812e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    DAT_0951812e = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x30), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b498) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0448c2cc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b498,0);
LAB_0448c2cc:
    uVar5 = (*(code *)*puVar2)(plVar8,param_2,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x38), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b498) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0448c33c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b498,0);
LAB_0448c33c:
      uVar5 = (*(code *)*puVar2)(plVar8,param_2,puVar2[1]);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0x30);
      if ((((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) &&
          (lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x78), lVar6 != 0)) &&
         ((*(long *)(lVar4 + 0x18) != 0 && (lVar6 = *(long *)(lVar6 + 0x80), lVar6 != 0)))) {
        uVar1 = *(uint *)(*(long *)(lVar4 + 0x18) + 0x14);
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x28), plVar8 != (long *)0x0)) {
          lVar4 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b4b0) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0448c408;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b4b0,0);
LAB_0448c408:
          lVar4 = (*(code *)*puVar2)(plVar8,param_2,puVar2[1]);
          if ((lVar4 != 0) && (lVar6 != 0)) {
            uVar3 = FUN_053d750c(lVar6,*(undefined4 *)(lVar4 + 0x10),DAT_091a82c0);
            return uVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

