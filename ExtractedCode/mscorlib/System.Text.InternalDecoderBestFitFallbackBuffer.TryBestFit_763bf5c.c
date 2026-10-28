// rea decompile_all
// name: System.Text.InternalDecoderBestFitFallbackBuffer$$TryBestFit
// address: 0x763bf5c
// body: available
// range: 0x763bf5c-0x763c0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763c0a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763c0a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 System_Text_InternalDecoderBestFitFallbackBuffer__TryBestFit(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x18), lVar2 == 0)) {
LAB_0763c0a0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(ulong *)(lVar2 + 0x18);
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if (param_2 == 0) goto LAB_0763c0a0;
    if (*(long *)(param_2 + 0x18) == 0) {
      return 0;
    }
    iVar6 = (int)*(long *)(param_2 + 0x18);
    if (2 < iVar6) {
      return 0;
    }
    if (iVar6 == 1) {
      uVar5 = (ushort)*(byte *)(param_2 + 0x20);
    }
    else {
      if ((iVar6 == 1) || (iVar6 == 0)) goto LAB_0763c0a4;
      uVar5 = *(ushort *)(param_2 + 0x20) >> 8 | *(ushort *)(param_2 + 0x20) << 8;
    }
    if (*(ushort *)(lVar2 + 0x20) <= uVar5) {
      if (uVar3 == 1) {
LAB_0763c0a4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(param_1);
      }
      if (uVar5 <= *(ushort *)(lVar2 + ((long)((uVar4 << 0x20) + -0x200000000) >> 0x1f) + 0x20)) {
        if ((int)uVar3 < 7) {
          uVar8 = 0;
          uVar9 = uVar3;
        }
        else {
          uVar10 = uVar4 & 0xffffffff;
          uVar4 = uVar4 & 0xffffffff;
          uVar7 = 0;
          do {
            uVar8 = uVar7 + ((uint)uVar10 >> 1) & 0xfffe;
            if (uVar3 <= uVar8) goto LAB_0763c0a4;
            uVar1 = *(ushort *)(lVar2 + (ulong)uVar8 * 2 + 0x20);
            if (uVar5 == uVar1) {
              uVar4 = (ulong)(uVar8 | 1);
              if (uVar3 <= (uVar8 | 1)) goto LAB_0763c0a4;
              goto LAB_0763c094;
            }
            uVar9 = (uint)uVar4;
            if (uVar5 < uVar1) {
              uVar9 = uVar8;
            }
            uVar4 = (ulong)uVar9;
            if (uVar5 < uVar1) {
              uVar8 = uVar7;
            }
            uVar10 = (ulong)(uVar9 - uVar8);
            uVar7 = uVar8;
          } while (6 < (int)(uVar9 - uVar8));
        }
        if ((int)uVar8 < (int)uVar9) {
          while (uVar8 < uVar3) {
            if (*(ushort *)(lVar2 + (long)(int)uVar8 * 2 + 0x20) == uVar5) {
              if (uVar8 + 1 < uVar3) {
                uVar4 = (ulong)(int)(uVar8 + 1);
LAB_0763c094:
                return *(undefined2 *)(lVar2 + uVar4 * 2 + 0x20);
              }
              break;
            }
            uVar8 = uVar8 + 2;
            param_1 = 0;
            if ((int)uVar9 <= (int)uVar8) {
              return 0;
            }
          }
          goto LAB_0763c0a4;
        }
      }
    }
  }
  return 0;
}

