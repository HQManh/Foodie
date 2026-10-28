// rea decompile_all
// name: Mono.Security.X509.X509Certificate$$get_Hash
// address: 0x73fc27c
// body: available
// range: 0x73fc27c-0x73fc487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fc308 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fc478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fc480 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fc484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073fc47c) */

long Mono_Security_X509_X509Certificate__get_Hash(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_09520e4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188d80);
    DAT_09520e4b = 1;
  }
  plVar8 = (long *)(param_1 + 0x80);
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 0x20);
      if (plVar4 == (long *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      if (0 < iVar1) {
        uVar9 = *(undefined8 *)(param_1 + 0x70);
        if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = Mono_Security_Cryptography_PKCS1__HashNameFromOid(uVar9,0,0);
        if (lVar2 == 0) {
          return 0;
        }
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar4 = (long *)Mono_Security_ASN1__get_Item(*(long *)(param_1 + 0x10),0),
           plVar4 == (long *)0x0)) {
LAB_073fc478:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188d80);
        }
        plVar4 = (long *)Mono_Security_Cryptography_PKCS1__CreateFromName(lVar2,0);
        if ((lVar3 == 0) || (plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                          (plVar4,lVar3,0,*(undefined4 *)(lVar3 + 0x18),0);
        *plVar8 = lVar2;
        thunk_FUN_03f5d7b8(plVar8);
        if (plVar4 != (long *)0x0) {
          lVar2 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185a58) {
                puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_073fc460;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_073fc460:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        lVar2 = *plVar8;
        if (lVar2 == 0) goto LAB_073fc478;
        goto LAB_073fc2d8;
      }
    }
    lVar2 = 0;
  }
  else {
LAB_073fc2d8:
    lVar3 = System_Array__Clone(lVar2,0);
    uVar9 = DAT_0917fc88;
    lVar2 = 0;
    if ((lVar3 != 0) && (lVar2 = thunk_FUN_03f99350(lVar3,DAT_0917fc88), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar3,uVar9);
    }
  }
  return lVar2;
}

