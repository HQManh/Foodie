// rea decompile_all
// name: System.Security.Cryptography.DESTransform$$CipherFunct
// address: 0x74720e8
// body: available
// range: 0x74720e8-0x7472313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747230c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7472310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Security_Cryptography_DESTransform__CipherFunct(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if ((DAT_095211fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183188);
    DAT_095211fc = 1;
  }
  lVar12 = *(long *)(param_1 + 0x58);
  if (*(int *)(DAT_09183188 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x18);
    if ((uint)(param_3 << 3) < uVar7) {
      lVar10 = *(long *)(*(long *)(DAT_09183188 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_07472310;
      uVar11 = (ulong)(param_3 << 3);
      uVar9 = param_2 >> 1 | param_2 << 0x1f;
      uVar8 = *(uint *)(lVar10 + 0x18);
      uVar6 = *(byte *)(lVar12 + uVar11 + 0x20) & 0x3f ^ uVar9 >> 0x1a;
      if (((((uVar6 < uVar8) && ((uint)(uVar11 | 1) < uVar7)) &&
           (uVar1 = ((uint)*(byte *)(lVar12 + (uVar11 | 1) + 0x20) ^ uVar9 >> 0x16) & 0x3f | 0x40,
           uVar1 < uVar8)) &&
          (((uint)(uVar11 | 2) < uVar7 &&
           (uVar2 = ((uint)*(byte *)(lVar12 + (uVar11 | 2) + 0x20) ^ uVar9 >> 0x12) & 0x3f | 0x80,
           uVar2 < uVar8)))) &&
         (((uint)(uVar11 | 3) < uVar7 &&
          ((uVar3 = ((uint)*(byte *)(lVar12 + (uVar11 | 3) + 0x20) ^ uVar9 >> 0xe) & 0x3f | 0xc0,
           uVar3 < uVar8 && ((uint)(uVar11 | 4) < uVar7)))))) {
        uVar4 = ((uint)*(byte *)(lVar12 + (uVar11 | 4) + 0x20) ^ uVar9 >> 10) & 0x3f | 0x100;
        if ((uVar4 < uVar8) && ((uint)(uVar11 | 5) < uVar7)) {
          uVar5 = ((uint)*(byte *)(lVar12 + (uVar11 | 5) + 0x20) ^ uVar9 >> 6) & 0x3f | 0x140;
          if ((uVar5 < uVar8) && ((uint)(uVar11 | 6) < uVar7)) {
            uVar9 = ((uint)*(byte *)(lVar12 + (uVar11 | 6) + 0x20) ^ uVar9 >> 2) & 0x3f | 0x180;
            if ((uVar9 < uVar8) &&
               (((uint)(uVar11 | 7) < uVar7 &&
                (uVar7 = ((uint)*(byte *)(lVar12 + (uVar11 | 7) + 0x20) ^
                         (param_2 >> 0x1f | param_2 << 1)) & 0x3f | 0x1c0, uVar7 < uVar8)))) {
              return *(uint *)(lVar10 + (ulong)uVar1 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar6 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar2 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar3 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar4 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar5 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar9 * 4 + 0x20) |
                     *(uint *)(lVar10 + (ulong)uVar7 * 4 + 0x20);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07472310:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

