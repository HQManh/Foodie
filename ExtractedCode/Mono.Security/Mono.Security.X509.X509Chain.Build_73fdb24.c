// rea decompile_all
// name: Mono.Security.X509.X509Chain$$Build
// address: 0x73fdb24
// body: available
// range: 0x73fdb24-0x73fde53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fde40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fde44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fde48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fde50 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073fde4c) */

bool Mono_Security_X509_X509Chain__Build(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  
  if ((DAT_09520e65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0918d130);
    DAT_09520e65 = 1;
  }
  plVar12 = (long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar9 = param_2;
  if (*plVar12 == 0) {
    lVar8 = thunk_FUN_03f9944c(DAT_0918d130);
    System_Collections_CollectionBase___ctor(lVar8,0);
    *plVar12 = lVar8;
    thunk_FUN_03f5d7b8(plVar12,lVar8);
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      uVar6 = Mono_Security_X509_X509Certificate__get_IsSelfSigned(param_2);
      lVar8 = param_2;
      while (lVar1 = lVar8, (uVar6 & 1) == 0) {
        if (*plVar12 == 0) goto LAB_073fde40;
        Mono_Security_X509_X509CertificateCollection__Add(*plVar12,lVar1);
        lVar8 = Mono_Security_X509_X509Chain__FindCertificateParent(param_1,lVar1);
        lVar9 = lVar1;
        if (lVar8 == 0) break;
        uVar6 = Mono_Security_X509_X509Certificate__get_IsSelfSigned();
      }
    }
LAB_073fdcc4:
    uVar5 = Mono_Security_X509_X509Chain__FindCertificateRoot(param_1,lVar9);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    thunk_FUN_03f5d7b8();
  }
  else {
    iVar4 = System_Collections_CollectionBase__get_Count(*plVar12,0);
    if (iVar4 < 1) goto LAB_073fdcc4;
    if (*plVar12 == 0) goto LAB_073fde40;
    uVar5 = Mono_Security_X509_X509CertificateCollection__get_Item(*plVar12,0);
    uVar6 = Mono_Security_X509_X509Chain__IsParent(param_1,param_2,uVar5);
    if ((uVar6 & 1) != 0) {
      iVar13 = 1;
      iVar2 = 1;
      if (iVar4 + -1 == 0) {
LAB_073fdbc4:
        if (iVar13 != iVar4) goto LAB_073fdcd8;
      }
      else {
        do {
          iVar13 = iVar2;
          if (*plVar12 == 0) goto LAB_073fde40;
          uVar5 = Mono_Security_X509_X509CertificateCollection__get_Item(*plVar12,iVar13 + -1);
          if (*plVar12 == 0) goto LAB_073fde40;
          uVar7 = Mono_Security_X509_X509CertificateCollection__get_Item(*plVar12,iVar13);
          uVar6 = Mono_Security_X509_X509Chain__IsParent(param_1,uVar5,uVar7);
          if ((uVar6 & 1) == 0) goto LAB_073fdbc4;
          iVar2 = iVar13 + 1;
        } while (iVar4 != iVar13 + 1);
      }
      if (*plVar12 == 0) {
LAB_073fde40:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = Mono_Security_X509_X509CertificateCollection__get_Item(*plVar12,iVar4 + -1);
      goto LAB_073fdcc4;
    }
  }
LAB_073fdcd8:
  if ((*plVar12 == 0) || (*(int *)(param_1 + 0x30) != 0)) {
LAB_073fdce8:
    bVar3 = *(int *)(param_1 + 0x30) == 0;
  }
  else {
    lVar9 = Mono_Security_X509_X509CertificateCollection__GetEnumerator();
    do {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext();
      if ((uVar6 & 1) == 0) {
        iVar4 = 0xf;
        goto LAB_073fdd64;
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current();
      uVar6 = Mono_Security_X509_X509Chain__IsValid(param_1,uVar5);
    } while ((uVar6 & 1) != 0);
    iVar4 = 0xe;
LAB_073fdd64:
    plVar12 = (long *)thunk_FUN_03f99350(lVar9,DAT_09185a58);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185a58) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_073fddd8;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
LAB_073fddd8:
      (*(code *)*puVar10)(plVar12,puVar10[1]);
    }
    if ((iVar4 == 0xf) || (iVar4 == 0)) {
      uVar6 = Mono_Security_X509_X509Chain__IsValid(param_1,param_2);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(param_1 + 0x30) == 2) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          return false;
        }
      }
      else if ((*(long *)(param_1 + 0x20) == 0) ||
              (uVar6 = Mono_Security_X509_X509Chain__IsValid(param_1), (uVar6 & 1) != 0))
      goto LAB_073fdce8;
    }
    bVar3 = false;
  }
  return bVar3;
}

