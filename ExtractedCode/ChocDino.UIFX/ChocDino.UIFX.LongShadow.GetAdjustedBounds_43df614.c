// rea decompile_all
// name: ChocDino.UIFX.LongShadow$$GetAdjustedBounds
// address: 0x43df614
// body: available
// range: 0x43df614-0x43df8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43df8b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ChocDino_UIFX_LongShadow__GetAdjustedBounds(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    fVar7 = *(float *)(param_1 + 0x14) * *(float *)(*(long *)(param_1 + 0x70) + 0xb8);
    if (fVar7 != 0.0) {
      fVar6 = *(float *)(param_1 + 0x10) * -0.017453292;
      fVar5 = sinf(fVar6);
      fVar6 = cosf(fVar6 + 3.1415927);
      fVar8 = -(fVar5 * fVar7);
      uVar4 = *param_2;
      fVar5 = 0.0;
      if (fVar8 <= 0.0) {
        fVar5 = fVar8;
      }
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      fVar6 = -(fVar7 * fVar6);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
        bVar3 = DAT_095163ce == '\0';
      }
      else {
        bVar3 = false;
      }
      fVar9 = 0.0;
      if (fVar6 <= 0.0) {
        fVar9 = fVar6;
      }
      if (bVar3) {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
        bVar3 = DAT_095163ce == '\0';
      }
      else {
        bVar3 = false;
      }
      lVar2 = -0x8000000000000000;
      if ((float)(int)ABS(fVar9) != INFINITY) {
        lVar2 = (ulong)(uint)(int)ABS(fVar9) << 0x20;
      }
      iVar1 = -0x80000000;
      if ((float)(int)ABS(fVar5) != INFINITY) {
        iVar1 = (int)ABS(fVar5);
      }
      fVar5 = 0.0;
      if (0.0 <= fVar8) {
        fVar5 = fVar8;
      }
      *param_2 = lVar2 + uVar4 & 0xffffffff00000000 | (ulong)(uint)(iVar1 + (int)uVar4);
      uVar4 = *param_3;
      if (bVar3) {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar8 = 0.0;
        if (0.0 <= fVar6) {
          fVar8 = fVar6;
        }
        if (DAT_095163ce == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_095163ce = '\x01';
        }
      }
      else {
        fVar8 = 0.0;
        if (0.0 <= fVar6) {
          fVar8 = fVar6;
        }
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = -0x8000000000000000;
      if ((float)(int)fVar8 != INFINITY) {
        lVar2 = (ulong)(uint)(int)fVar8 << 0x20;
      }
      iVar1 = -0x80000000;
      if ((float)(int)fVar5 != INFINITY) {
        iVar1 = (int)(float)(int)fVar5;
      }
      *param_3 = uVar4 + lVar2 & 0xffffffff00000000 | (ulong)(uint)((int)uVar4 + iVar1);
      if (*(int *)(param_1 + 0x40) == 0) {
        *param_2 = (*param_2 & 0xffffffff00000000 | (ulong)((int)*param_2 + 1)) + 0x100000000;
        *param_3 = (*param_3 & 0xffffffff00000000 | (ulong)((int)*param_3 + 1)) + 0x100000000;
      }
    }
    return fVar7 != 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

