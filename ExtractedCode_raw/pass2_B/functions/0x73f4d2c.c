// rea decompile_all
// name: Mono.Security.X509.PKCS12$$GetExistingParameters
// address: 0x73f4d2c
// body: available
// range: 0x73f4d2c-0x73f4f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f4dec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f4f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f4f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f4f14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f4f1c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073f4f18) */

void Mono_Security_X509_PKCS12__GetExistingParameters
               (undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  long **local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((DAT_09520e27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09520e27 = 1;
  }
  local_48 = 0;
  local_98 = (long *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar1 = Mono_Security_X509_PKCS12__get_Certificates(param_2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_48 = Mono_Security_X509_X509CertificateCollection__GetEnumerator();
  plStack_a8 = &local_48;
  local_b0 = 0;
  local_a0 = &local_98;
  do {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext();
    if ((uVar2 & 1) == 0) {
      iVar6 = 5;
      goto LAB_073f4e40;
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current
                               ();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
  } while ((lVar1 == 0) ||
          (plVar3 = (long *)Mono_Security_X509_X509Certificate__get_DSA(plVar3),
          plVar3 == (long *)0x0));
  *param_3 = 1;
  (**(code **)(*plVar3 + 0x1e8))(&local_f0,plVar3,0,*(undefined8 *)(*plVar3 + 0x1f0));
  iVar6 = 4;
  uStack_88 = uStack_e8;
  local_90 = local_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  local_70 = local_d0;
  uStack_58 = uStack_b8;
  uStack_60 = uStack_c0;
LAB_073f4e40:
  plVar3 = (long *)thunk_FUN_03f99350(local_48,DAT_09185a58);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
    local_98 = plVar3;
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073f4eac;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_073f4eac:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (iVar6 != 5) {
    if (iVar6 == 4) {
      param_1[1] = uStack_88;
      *param_1 = local_90;
      param_1[3] = uStack_78;
      param_1[2] = uStack_80;
      param_1[5] = uStack_68;
      param_1[4] = local_70;
      param_1[7] = uStack_58;
      param_1[6] = uStack_60;
      return;
    }
    if (iVar6 != 0) {
      return;
    }
  }
  *param_3 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}

