// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator.<>c__DisplayClass6_0$$<ValidSelection>b__1
// address: 0x4424d0c
// body: available
// range: 0x4424d0c-0x4424df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4424df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CompositeStructureTranslator_<>c__DisplayClass6_0__<ValidSelection>b__1
               (long param_1,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_09517f49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_09197010);
    FUN_03f5c2a4(&DAT_09197018);
    DAT_09517f49 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    if (*(char *)(*(long *)(param_2 + 0x10) + 0x11) == '\0') {
      bVar2 = false;
    }
    else {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_04424df4;
      lVar5 = *plVar8;
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b510) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04424dd0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b510,0);
LAB_04424dd0:
      iVar3 = (*(code *)*puVar4)(plVar8,uVar1,puVar4[1]);
      bVar2 = 0 < iVar3;
    }
    return bVar2;
  }
LAB_04424df4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

