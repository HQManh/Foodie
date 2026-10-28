// rea decompile_all
// name: Internal.Cryptography.Helpers$$ToHexArrayUpper
// address: 0x742cc48
// body: available
// range: 0x742cc48-0x742cd27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742cd20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742cd24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Internal_Cryptography_Helpers__ToHexArrayUpper(long param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  short sVar10;
  
  if ((DAT_09520ff7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_09520ff7 = 1;
  }
  if (param_1 != 0) {
    lVar5 = FUN_03f5c394(DAT_0917fcc8,*(int *)(param_1 + 0x18) << 1);
    uVar6 = *(ulong *)(param_1 + 0x18);
    if (0 < (int)uVar6) {
      lVar9 = 0;
      pbVar7 = (byte *)(param_1 + 0x20);
      do {
        bVar4 = *pbVar7;
        sVar10 = 0x30;
        sVar2 = 0x30;
        if (0x9f < bVar4) {
          sVar2 = 0x37;
        }
        if (lVar5 == 0) goto LAB_0742cd24;
        uVar3 = *(uint *)(lVar5 + 0x18);
        uVar8 = (uint)lVar9;
        if ((uVar3 <= uVar8) ||
           (*(ushort *)(lVar5 + (long)(int)uVar8 * 2 + 0x20) = sVar2 + (ushort)(bVar4 >> 4),
           uVar3 <= uVar8 + 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar1 = lVar9 + 2;
        if (9 < (bVar4 & 0xf)) {
          sVar10 = 0x37;
        }
        lVar9 = lVar9 + 2;
        *(ushort *)(lVar5 + (long)(int)(uVar8 + 1) * 2 + 0x20) = sVar10 + (bVar4 & 0xf);
        pbVar7 = pbVar7 + 1;
      } while ((uVar6 & 0xffffffff) * 2 - lVar1 != 0);
    }
    return;
  }
LAB_0742cd24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

