// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass280_0$$<FreeCell>b__0
// address: 0x44904a0
// body: available
// range: 0x44904a0-0x44905bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44905b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingLevelSimulation_<>c__DisplayClass280_0__<FreeCell>b__0
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_09518168 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a010);
    DAT_09518168 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = CookingGraph_CookingLevelSimulation__GridFree(*(long *)(param_1 + 0x10),param_2,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) {
      uVar1 = 1;
    }
    else {
      CookingGraph_CookingLevelSimulation__GridAddress(&local_58,param_2,0);
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a010) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_0449057c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a010,4);
LAB_0449057c:
      uStack_38 = uStack_50;
      local_40 = local_58;
      local_30 = local_48;
      uVar1 = (*(code *)*puVar3)(plVar6,&local_40,puVar3[1]);
      uVar1 = uVar1 ^ 1;
    }
  }
  return uVar1 & 1;
}

