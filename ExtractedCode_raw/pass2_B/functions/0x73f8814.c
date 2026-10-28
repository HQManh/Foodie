// rea decompile_all
// name: Mono.Security.X509.PKCS12$$RemoveCertificate
// address: 0x73f8814
// body: available
// range: 0x73f8814-0x73f8d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f8cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f8cfc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f8d04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f8d0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12__RemoveCertificate(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  int local_64;
  
  if ((DAT_09520e2f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_0918a4f8);
    FUN_03f5c2a4(&DAT_0918d0f8);
    FUN_03f5c2a4(&DAT_091f98e0);
    DAT_09520e2f = 1;
  }
  iVar17 = 0;
  do {
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) goto LAB_073f8cf0;
    iVar1 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
    if (iVar1 <= iVar17) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x38);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x2e8))
                                   (plVar6,iVar17,*(undefined8 *)(*plVar6 + 0x2f0)),
       plVar6 == (long *)0x0)) goto LAB_073f8cf0;
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8) !=
        DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar6);
    }
    if (plVar6[2] == 0) goto LAB_073f8cf0;
    uVar7 = System_String__Equals(plVar6[2],DAT_091f98e0,0);
    if ((uVar7 & 1) == 0) {
LAB_073f8c68:
      iVar1 = -1;
    }
    else {
      lVar18 = plVar6[3];
      if ((lVar18 == 0) || (lVar8 = Mono_Security_ASN1__get_Item(lVar18,1), lVar8 == 0))
      goto LAB_073f8cf0;
      uVar9 = Mono_Security_ASN1__get_Value();
      lVar8 = thunk_FUN_03f9944c(DAT_09193130);
      Mono_Security_PKCS7_ContentInfo___ctor(lVar8,uVar9);
      if ((lVar8 == 0) ||
         ((*(long *)(lVar8 + 0x18) == 0 ||
          (lVar8 = Mono_Security_ASN1__get_Item(*(long *)(lVar8 + 0x18),0), lVar8 == 0))))
      goto LAB_073f8cf0;
      uVar9 = Mono_Security_ASN1__get_Value();
      plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918d0f8);
      Mono_Security_X509_X509Certificate___ctor(plVar6,uVar9);
      if ((param_2 == (long *)0x0) ||
         (uVar9 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200)),
         plVar6 == (long *)0x0)) goto LAB_073f8cf0;
      uVar10 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
      uVar7 = Mono_Security_X509_PKCS12__Compare(uVar10,uVar9,uVar10);
      iVar1 = iVar17;
      if ((uVar7 & 1) == 0) {
        iVar1 = -1;
      }
      if ((param_3 != (long *)0x0) && ((uVar7 & 1) != 0)) {
        plVar6 = *(long **)(lVar18 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (iVar1 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0)),
           iVar1 != 3)) goto LAB_073f8c68;
        lVar18 = Mono_Security_ASN1__get_Item(lVar18,2);
        if (lVar18 == 0) goto LAB_073f8cf0;
        local_64 = 0;
        iVar1 = 0;
        while( true ) {
          plVar6 = *(long **)(lVar18 + 0x20);
          iVar2 = 0;
          if (plVar6 != (long *)0x0) {
            iVar2 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
          }
          if (iVar2 <= iVar1) break;
          lVar8 = Mono_Security_ASN1__get_Item(lVar18,iVar1);
          if (lVar8 == 0) goto LAB_073f8cf0;
          Mono_Security_ASN1__get_Item(lVar8,0);
          uVar9 = Mono_Security_ASN1Convert__ToOid();
          lVar15 = *param_3;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_09185a20) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_073f8aec;
              }
              uVar7 = uVar7 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185a20,0);
LAB_073f8aec:
          plVar6 = (long *)(*(code *)*puVar11)(param_3,uVar9,puVar11[1]);
          if (plVar6 != (long *)0x0) {
            if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_09181588 + 0x130)) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09181588 + 0x130) * 8 + -8
                         ) != DAT_09181588)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar6);
            }
            lVar8 = Mono_Security_ASN1__get_Item(lVar8,1);
            iVar2 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
            if (lVar8 == 0) goto LAB_073f8cf0;
            plVar12 = *(long **)(lVar8 + 0x20);
            iVar3 = 0;
            if (plVar12 != (long *)0x0) {
              iVar3 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
            }
            if (iVar2 == iVar3) {
              iVar2 = 0;
              iVar3 = 0;
              while( true ) {
                plVar12 = *(long **)(lVar8 + 0x20);
                iVar4 = 0;
                if (plVar12 != (long *)0x0) {
                  iVar4 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0))
                  ;
                }
                if (iVar4 <= iVar2) break;
                lVar15 = Mono_Security_ASN1__get_Item(lVar8,iVar2);
                lVar13 = (**(code **)(*plVar6 + 0x2e8))
                                   (plVar6,iVar2,*(undefined8 *)(*plVar6 + 0x2f0));
                uVar9 = DAT_0917fc88;
                if (lVar13 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = thunk_FUN_03f99350(lVar13,DAT_0917fc88);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(lVar13,uVar9);
                  }
                }
                if (lVar15 == 0) goto LAB_073f8cf0;
                uVar9 = Mono_Security_ASN1__get_Value(lVar15);
                uVar5 = Mono_Security_X509_PKCS12__Compare(uVar9,lVar14,uVar9);
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + (uVar5 & 1);
              }
              plVar6 = *(long **)(lVar8 + 0x20);
              iVar2 = 0;
              if (plVar6 != (long *)0x0) {
                iVar2 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
              }
              if (iVar3 == iVar2) {
                local_64 = local_64 + 1;
              }
            }
          }
          iVar1 = iVar1 + 1;
        }
        plVar6 = *(long **)(lVar18 + 0x20);
        iVar2 = 0;
        if (plVar6 != (long *)0x0) {
          iVar2 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
        }
        iVar1 = iVar17;
        if (local_64 != iVar2) {
          iVar1 = -1;
        }
      }
    }
    iVar17 = iVar17 + 1;
  } while (iVar1 == -1);
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x3d8))(plVar6,iVar1,*(undefined8 *)(*plVar6 + 0x3e0));
    *(undefined1 *)(param_1 + 0x32) = 1;
    return;
  }
LAB_073f8cf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

