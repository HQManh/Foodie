// rea decompile_all
// name: ChocDino.UIFX.OutlineFilter$$GetFilterAdjustSize
// address: 0x43e1cb0
// body: available
// range: 0x43e1cb0-0x43e1ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e1ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_OutlineFilter__GetFilterAdjustSize(long param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09517d38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186810);
    DAT_09517d38 = 1;
  }
  if (*(int *)(param_1 + 0x1c4) == 1) {
    if ((*(long *)(param_1 + 0x200) != 0) && (*(long *)(param_1 + 0x208) != 0)) {
      ChocDino_UIFX_OutlineFilter__SetupFilterParams(param_1);
      plVar6 = *(long **)(param_1 + 0x200);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09186810) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
              goto LAB_043e1e24;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186810,6);
LAB_043e1e24:
        (*(code *)*puVar2)(plVar6,param_2,param_3,puVar2[1]);
        if (*(long *)(param_1 + 0x208) != 0) {
          ChocDino_UIFX_ErodeDilate__AdjustBoundsSize(*(long *)(param_1 + 0x208),param_2,param_3,0);
          goto LAB_043e1e50;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else if (((*(int *)(param_1 + 0x1c4) == 0) && (*(long *)(param_1 + 0x210) != 0)) &&
          (*(int *)(param_1 + 0x1fc) != 1)) {
    fVar7 = *(float *)(param_1 + 0x1c8);
    fVar8 = *(float *)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0xb8);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar9 = fVar7 * fVar8 * fVar9;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = 0x80000000;
    if ((float)(int)fVar9 != INFINITY) {
      uVar1 = (int)fVar9;
    }
    *param_2 = *param_2 + ((ulong)uVar1 << 0x20) & 0xffffffff00000000 |
               (ulong)((int)*param_2 + uVar1);
    *param_3 = *param_3 + ((ulong)uVar1 << 0x20) & 0xffffffff00000000 |
               (ulong)((int)*param_3 + uVar1);
  }
LAB_043e1e50:
  if (*(int *)(param_1 + 0x1fc) == 1) {
    *param_2 = (*param_2 & 0xffffffff00000000 | (ulong)((int)*param_2 + 1)) + 0x100000000;
    *param_3 = (*param_3 & 0xffffffff00000000 | (ulong)((int)*param_3 + 1)) + 0x100000000;
  }
  return;
}

