// rea decompile_all
// name: ChocDino.UIFX.GlowFilter$$RenderFilters
// address: 0x43de138
// body: available
// range: 0x43de138-0x43de2fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43de2f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_GlowFilter__RenderFilters(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  
  if ((DAT_09517cf4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186810);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517cf4 = 1;
  }
  ChocDino_UIFX_GlowFilter__SetupFilterParams(param_1);
  fVar8 = *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    uVar6 = *(undefined8 *)(param_1 + 600);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x250) == 0) goto LAB_043de2f8;
      if (((*(char *)(*(long *)(param_1 + 0x250) + 0x40) == '\0') &&
          (*(float *)(param_1 + 0x260) == fVar8)) &&
         (*(int *)(param_1 + 0x264) == *(int *)(param_1 + 0x24))) goto LAB_043de2c0;
    }
  }
  *(float *)(param_1 + 0x260) = fVar8;
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x24);
  if (*(long *)(param_1 + 0x250) != 0) {
    uVar6 = ChocDino_UIFX_DistanceMap__Process(*(long *)(param_1 + 0x250),param_2,0);
    plVar7 = *(long **)(param_1 + 0x248);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09186810) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 7) * 0x10 + 0x138);
            goto LAB_043de264;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186810,7);
LAB_043de264:
      uVar3 = (*(code *)*puVar2)(plVar7,uVar6,puVar2[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar6,uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_1 + 0x250) == 0) goto LAB_043de2f8;
        ChocDino_UIFX_DistanceMap__FreeTextures(*(long *)(param_1 + 0x250),0);
      }
      *(undefined8 *)(param_1 + 600) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 600,uVar3);
LAB_043de2c0:
      return *(undefined8 *)(param_1 + 600);
    }
  }
LAB_043de2f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

