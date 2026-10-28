// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.LinearDecoder$$SetTimeToLengthTables
// address: 0x456e00c
// body: available
// range: 0x456e00c-0x456e23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456e234 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456e238 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456e23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_LinearDecoder__SetTimeToLengthTables
               (undefined8 param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_09518882 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09518882 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar7 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x18);
    lVar5 = FUN_03f5c394(DAT_09180528,uVar7 & 0xffffffff);
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0456e238:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if ((int)uVar7 < 1) {
        lVar6 = FUN_03f5c394(DAT_09180528,uVar7 & 0xffffffff);
        fVar13 = 0.0;
      }
      else {
        fVar13 = 0.0;
        uVar8 = 0;
        lVar9 = 0x20;
        fVar12 = *(float *)(lVar6 + 0x28);
        fVar10 = *(float *)(lVar6 + 0x24);
        fVar11 = *(float *)(lVar6 + 0x20);
        do {
          lVar6 = *(long *)(param_2 + 0x18);
          if (lVar6 == 0) goto LAB_0456e23c;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0456e238;
          pfVar2 = (float *)(lVar6 + lVar9);
          fVar14 = *pfVar2;
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          if (DAT_09517ea7 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09517ea7 = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar5 == 0) goto LAB_0456e23c;
          if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_0456e238;
          fVar10 = fVar15 - fVar10;
          fVar11 = fVar14 - fVar11;
          lVar9 = lVar9 + 0xc;
          fVar12 = fVar16 - fVar12;
          fVar12 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
          *(float *)(lVar5 + 0x20 + uVar8 * 4) = fVar12;
          uVar8 = uVar8 + 1;
          fVar13 = fVar13 + fVar12;
          fVar12 = fVar16;
          fVar10 = fVar15;
          fVar11 = fVar14;
        } while ((uVar7 & 0xffffffff) != uVar8);
        lVar6 = FUN_03f5c394(DAT_09180528,uVar7 & 0xffffffff);
        if ((int)uVar7 != 1) {
          uVar3 = *(uint *)(lVar5 + 0x18);
          fVar12 = 0.0;
          lVar9 = 0;
          if (uVar3 < 2) {
            uVar3 = 1;
          }
          do {
            if ((ulong)uVar3 - 1 == lVar9) goto LAB_0456e238;
            if (lVar6 == 0) goto LAB_0456e23c;
            if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar9 + 1U) goto LAB_0456e238;
            lVar4 = lVar9 * 4;
            lVar1 = lVar9 * 4;
            lVar9 = lVar9 + 1;
            fVar12 = fVar12 + *(float *)(lVar5 + 0x24 + lVar4);
            *(float *)(lVar6 + lVar1 + 0x24) = fVar12 / fVar13;
          } while ((uVar7 & 0xffffffff) - 1 != lVar9);
        }
      }
      *(float *)(param_2 + 0x38) = fVar13;
      *(long *)(param_2 + 0x10) = lVar5;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x10),lVar5);
      *(long *)(param_2 + 0x40) = lVar6;
      thunk_FUN_03f5d7b8((long *)(param_2 + 0x40),lVar6);
      return;
    }
  }
LAB_0456e23c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

