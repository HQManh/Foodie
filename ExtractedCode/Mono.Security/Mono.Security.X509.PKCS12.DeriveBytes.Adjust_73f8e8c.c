// rea decompile_all
// name: Mono.Security.X509.PKCS12.DeriveBytes$$Adjust
// address: 0x73f8e8c
// body: available
// range: 0x73f8e8c-0x73f8f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f8f34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f8f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12_DeriveBytes__Adjust
               (undefined8 param_1,long param_2,int param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_4 != 0) {
    iVar4 = (int)*(undefined8 *)(param_4 + 0x18);
    if (iVar4 != 0) {
      if (param_2 == 0) goto LAB_073f8f38;
      uVar3 = (param_3 + iVar4) - 1;
      if (uVar3 < *(uint *)(param_2 + 0x18)) {
        lVar2 = param_2 + (int)uVar3;
        uVar3 = (uint)*(byte *)(param_4 + (iVar4 + -1) + 0x20) + (uint)*(byte *)(lVar2 + 0x20) + 1;
        *(char *)(lVar2 + 0x20) = (char)uVar3;
        uVar6 = *(int *)(param_4 + 0x18) - 2;
        if (-1 < (int)uVar6) {
          uVar5 = (ulong)uVar6;
          do {
            if ((*(uint *)(param_4 + 0x18) <= uVar5) ||
               (uVar6 = param_3 + (int)uVar5, *(uint *)(param_2 + 0x18) <= uVar6))
            goto LAB_073f8f34;
            lVar2 = param_2 + (int)uVar6;
            uVar3 = (uVar3 >> 8) + (uint)*(byte *)(param_4 + 0x20 + uVar5) +
                    (uint)*(byte *)(lVar2 + 0x20);
            *(char *)(lVar2 + 0x20) = (char)uVar3;
            bVar1 = 0 < (long)uVar5;
            uVar5 = uVar5 - 1;
          } while (bVar1);
        }
        return;
      }
    }
LAB_073f8f34:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_073f8f38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

