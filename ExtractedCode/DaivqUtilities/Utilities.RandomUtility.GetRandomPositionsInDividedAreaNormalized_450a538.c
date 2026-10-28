// rea decompile_all
// name: Utilities.RandomUtility$$GetRandomPositionsInDividedAreaNormalized
// address: 0x450a538
// body: available
// range: 0x450a538-0x450a6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450a6d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450a6dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_RandomUtility__GetRandomPositionsInDividedAreaNormalized
               (float param_1,float param_2,undefined8 param_3,uint param_4,int param_5,
               undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  
  if ((DAT_095184f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807e8);
    DAT_095184f7 = 1;
  }
  lVar4 = FUN_03f5c394(DAT_091807e8,(ulong)param_4);
  iVar6 = (int)param_3;
  iVar9 = (int)((ulong)param_3 >> 0x20);
  lVar5 = Utilities_RandomUtility__GetShuffledIndexArray(iVar9 * iVar6,param_5,param_6);
  if (0 < (int)param_4) {
    if (lVar5 == 0) {
LAB_0450a6dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = 0;
    pfVar10 = (float *)(lVar4 + 0x24);
    do {
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar3 = 0;
      iVar7 = (int)uVar8;
      if (uVar1 != 0) {
        iVar3 = iVar7 / (int)uVar1;
      }
      uVar2 = iVar7 - iVar3 * uVar1;
      if (uVar1 <= uVar2) {
LAB_0450a6d8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (lVar4 == 0) goto LAB_0450a6dc;
      iVar3 = *(int *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
      fVar11 = (float)Klak_Math_XXHash__GetRange(-param_1,param_1,param_5 + iVar7,param_6,0);
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_0450a6d8;
      iVar7 = 0;
      if (iVar6 != 0) {
        iVar7 = iVar3 / iVar6;
      }
      pfVar10[-1] = (fVar11 * 0.5 + (float)(iVar3 - iVar7 * iVar6) + 0.5) / (float)iVar6;
      fVar11 = (float)Klak_Math_XXHash__GetRange(-param_2,param_2,param_5,param_6,0);
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_0450a6d8;
      uVar8 = uVar8 + 1;
      *pfVar10 = ((float)iVar7 + 0.5 + fVar11 * 0.5) / (float)iVar9;
      pfVar10 = pfVar10 + 2;
    } while (param_4 != uVar8);
  }
  return lVar4;
}

