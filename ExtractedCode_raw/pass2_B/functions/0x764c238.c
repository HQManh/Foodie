// rea decompile_all
// name: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
// address: 0x764c238
// body: available
// range: 0x764c238-0x764c393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764c390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_JsonSerializer__GetMatchingConverter(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  
  if ((DAT_0952234b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0c8);
    FUN_03f5c2a4(&DAT_0917b0b8);
    DAT_0952234b = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_0764c374:
    plVar3 = (long *)0x0;
  }
  else {
    iVar7 = 0;
    do {
      lVar4 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a0c8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0764c2e0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a0c8,0);
LAB_0764c2e0:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      if (iVar1 <= iVar7) goto LAB_0764c374;
      lVar4 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b0b8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0764c340;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b0b8,0);
LAB_0764c340:
      plVar3 = (long *)(*(code *)*puVar2)(param_1,iVar7,puVar2[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x1a0));
      iVar7 = iVar7 + 1;
    } while ((uVar5 & 1) == 0);
  }
  return plVar3;
}

