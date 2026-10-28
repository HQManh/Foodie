// rea decompile_all
// name: Mono.Security.X509.X509Crl$$get_Hash
// address: 0x73facdc
// body: available
// range: 0x73facdc-0x73fae6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fae60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fae64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fae6c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073fae68) */

long Mono_Security_X509_X509Crl__get_Hash(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09520e40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188d80);
    DAT_09520e40 = 1;
  }
  plVar6 = (long *)(param_1 + 0x58);
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(lVar1,uVar8);
    if ((lVar1 == 0) ||
       (plVar2 = (long *)Mono_Security_ASN1__get_Item(lVar1,0), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188d80);
    }
    plVar2 = (long *)Mono_Security_Cryptography_PKCS1__CreateFromOid(uVar7,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = System_Security_Cryptography_HashAlgorithm__ComputeHash(plVar2,uVar8,0);
    *plVar6 = lVar1;
    thunk_FUN_03f5d7b8(plVar6);
    if (plVar2 != (long *)0x0) {
      lVar1 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185a58) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_073fae38;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_073fae38:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    lVar1 = *plVar6;
  }
  return lVar1;
}

