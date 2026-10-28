// rea decompile_all
// name: Utilities.UIScrollSnap$$GetNearestPanel
// address: 0x452e1a0
// body: available
// range: 0x452e1a0-0x452e323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452e290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452e320 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Utilities_UIScrollSnap__GetNearestPanel(undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  
  if ((DAT_09518630 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09518630 = 1;
  }
  uVar3 = Utilities_UIScrollSnap__get_NumberOfPanels(param_3);
  lVar4 = FUN_03f5c394(DAT_09180528,uVar3);
  lVar6 = *(long *)(param_3 + 0xf0);
  if (lVar6 != 0) {
    uVar9 = 0;
    do {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((long)(int)uVar1 <= (long)uVar9) {
        if (lVar4 != 0) {
          uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          iVar7 = (int)*(ulong *)(lVar4 + 0x18);
          if (iVar7 == 0) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = *(float *)(lVar4 + 0x20);
            if (1 < iVar7) {
              lVar6 = uVar9 - 1;
              pfVar8 = (float *)(lVar4 + 0x24);
              do {
                fVar2 = *pfVar8;
                if (fVar10 <= *pfVar8) {
                  fVar2 = fVar10;
                }
                fVar10 = fVar2;
                lVar6 = lVar6 + -1;
                pfVar8 = pfVar8 + 1;
              } while (lVar6 != 0);
            }
          }
          if (0 < (int)uVar1) {
            uVar5 = 0;
            do {
              if (uVar9 == uVar5) {
LAB_0452e320:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (fVar10 == *(float *)(lVar4 + 0x20 + uVar5 * 4)) {
                return uVar5;
              }
              uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
          }
          return 0;
        }
        break;
      }
      fVar10 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter(param_3,uVar9 & 0xffffffff);
      if (DAT_09516ea4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516ea4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0452e320;
      param_2 = param_2 * param_2;
      lVar6 = *(long *)(param_3 + 0xf0);
      *(float *)(lVar4 + 0x20 + uVar9 * 4) = SQRT(fVar10 * fVar10 + param_2);
      uVar9 = uVar9 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

