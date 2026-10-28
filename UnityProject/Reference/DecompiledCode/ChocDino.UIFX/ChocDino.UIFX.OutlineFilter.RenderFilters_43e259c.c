// rea decompile_all
// name: ChocDino.UIFX.OutlineFilter$$RenderFilters
// address: 0x43e259c
// body: available
// range: 0x43e259c-0x43e26eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e2608 to 0x43cb118 ChocDino.UIFX.DistanceMap$$Process (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e26e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_OutlineFilter__RenderFilters(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09517d3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186810);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517d3b = 1;
  }
  ChocDino_UIFX_OutlineFilter__SetupFilterParams(param_1);
  if (*(int *)(param_1 + 0x1c4) == 1) {
    if (*(long *)(param_1 + 0x208) != 0) {
      uVar1 = ChocDino_UIFX_ErodeDilate__Process(*(long *)(param_1 + 0x208),param_2,0);
      plVar7 = *(long **)(param_1 + 0x200);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09186810) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
              goto LAB_043e2684;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186810,7);
LAB_043e2684:
        uVar3 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar1,uVar3,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e26e8;
          ChocDino_UIFX_ErodeDilate__FreeTextures(*(long *)(param_1 + 0x208),0);
        }
        return uVar3;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c4) != 0) {
      return param_2;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      uVar1 = ChocDino_UIFX_DistanceMap__Process(*(long *)(param_1 + 0x210),param_2,0);
      return uVar1;
    }
  }
LAB_043e26e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

