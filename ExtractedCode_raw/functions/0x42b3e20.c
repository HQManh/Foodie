// rea decompile_all
// name: CakeOrder.InGame.GridSpawner$$IsPointInPolygon
// address: 0x42b3e20
// body: available
// range: 0x42b3e20-0x42b3ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b3eec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b3ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_InGame_GridSpawner__IsPointInPolygon
               (float param_1,float param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = (uint)*(ulong *)(param_4 + 0x18);
  uVar5 = uVar3 - 1;
  if ((int)uVar3 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pfVar7 = (float *)(param_4 + 0x24);
    uVar6 = 0;
    do {
      fVar8 = *pfVar7;
      lVar1 = param_4 + 0x20 + (long)(int)uVar5 * 8;
      if (param_2 <= fVar8) {
LAB_042b3e6c:
        if (uVar3 <= uVar5) goto LAB_042b3eec;
        if ((param_2 <= fVar8) && (fVar9 = *(float *)(lVar1 + 4), fVar9 < param_2))
        goto LAB_042b3e88;
      }
      else {
        if (uVar3 <= uVar5) goto LAB_042b3eec;
        fVar9 = *(float *)(lVar1 + 4);
        if (fVar9 < param_2) goto LAB_042b3e6c;
LAB_042b3e88:
        if (uVar3 <= uVar5) {
LAB_042b3eec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (pfVar7[-1] +
            ((param_2 - fVar8) / (fVar9 - fVar8)) *
            (*(float *)(param_4 + 0x20 +
                       (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) -
            pfVar7[-1]) < param_1) {
          uVar4 = uVar4 ^ 1;
        }
      }
      uVar2 = uVar6 + 1;
      uVar5 = (uint)uVar6;
      pfVar7 = pfVar7 + 2;
      uVar6 = uVar2;
    } while ((*(ulong *)(param_4 + 0x18) & 0xffffffff) != uVar2);
  }
  return uVar4;
}

