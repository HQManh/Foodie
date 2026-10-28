// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.LinearDecoder$$GetPoint
// address: 0x456e240
// body: available
// range: 0x456e240-0x456e3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456e3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456e3e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_LinearDecoder__GetPoint
               (float param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  cVar1 = DAT_0951877f;
  if (param_1 <= 0.0) {
    if ((param_4 != 0) && (*(undefined4 *)(param_4 + 0x50) = 1, param_3 != 0)) {
      if (*(int *)(param_3 + 0x18) != 0) {
        return;
      }
      goto LAB_0456e3e0;
    }
  }
  else if ((param_4 != 0) && (lVar2 = *(long *)(param_4 + 0x40), lVar2 != 0)) {
    uVar3 = (uint)*(ulong *)(lVar2 + 0x18);
    if (1 < (int)uVar3) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        if (param_1 <= *(float *)(lVar2 + 0x24 + lVar5 * 4)) {
          lVar7 = lVar7 >> 0x20;
          uVar4 = (int)lVar5 + 1;
          goto LAB_0456e2e0;
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x100000000;
      } while ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1 != lVar5);
    }
    uVar4 = 0;
    lVar7 = 0;
LAB_0456e2e0:
    uVar6 = (uint)lVar7;
    if (uVar6 < uVar3) {
      if (param_3 == 0) goto LAB_0456e3dc;
      if ((uVar6 < *(uint *)(param_3 + 0x18)) && (uVar4 < *(uint *)(param_3 + 0x18))) {
        lVar5 = param_3 + (long)(int)uVar6 * 0xc;
        param_3 = param_3 + (long)(int)uVar4 * 0xc;
        uVar11 = *(undefined8 *)(lVar5 + 0x20);
        fVar12 = *(float *)(lVar5 + 0x28);
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        fVar9 = *(float *)(param_3 + 0x28);
        fVar10 = *(float *)(param_4 + 0x38) * (param_1 - *(float *)(lVar2 + lVar7 * 4 + 0x20));
        *(uint *)(param_4 + 0x50) = uVar4;
        fVar13 = (float)uVar8 - (float)uVar11;
        fVar14 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
        fVar9 = fVar9 - fVar12;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951877f = '\x01';
        }
        if (fVar9 * fVar9 + fVar13 * fVar13 + fVar14 * fVar14 <= fVar10 * fVar10) {
          return;
        }
        if (*(int *)(DAT_09187e80 + 0xe4) != 0) {
          return;
        }
        FUN_03f5c424();
        return;
      }
    }
LAB_0456e3e0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0456e3dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

