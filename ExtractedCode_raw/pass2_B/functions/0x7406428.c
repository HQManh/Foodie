// rea decompile_all
// name: Mono.Security.Cryptography.MD4Managed$$Decode
// address: 0x7406428
// body: available
// range: 0x7406428-0x74064f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74064ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74064f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_MD4Managed__Decode
               (undefined8 param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    uVar5 = *(ulong *)(param_2 + 0x18);
    uVar4 = (uint)uVar5;
    if (0 < (int)uVar4) {
      lVar3 = 0;
      do {
        if (param_3 == 0) goto LAB_074064f0;
        uVar1 = *(uint *)(param_3 + 0x18);
        iVar2 = (int)lVar3;
        uVar6 = param_4 + iVar2;
        if ((((uVar1 <= uVar6) || (uVar1 <= uVar6 + 1)) || (uVar1 <= uVar6 + 2)) ||
           ((uVar1 <= uVar6 + 3 || ((uVar5 & 0xffffffff) * 4 - lVar3 == 0)))) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(uint *)(param_2 + 0x20 + lVar3) =
             CONCAT13(*(undefined1 *)(param_3 + 0x20 + (long)(param_4 + iVar2 + 3)),
                      CONCAT12(*(undefined1 *)(param_3 + 0x20 + (long)(param_4 + iVar2 + 2)),
                               CONCAT11(*(undefined1 *)(param_3 + (param_4 + iVar2 + 1) + 0x20),
                                        *(undefined1 *)(param_3 + (int)uVar6 + 0x20))));
        lVar3 = lVar3 + 4;
      } while ((ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) * 4 - lVar3 != 0);
    }
    return;
  }
LAB_074064f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

