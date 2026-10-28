// rea decompile_all
// name: Mono.Security.X509.PKCS12$$ReadSafeBag
// address: 0x73f2e5c
// body: available
// range: 0x73f2e5c-0x73f34f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f33b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f33fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12__ReadSafeBag(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  if ((DAT_09520e29 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09193150);
    FUN_03f5c2a4(&DAT_09193158);
    FUN_03f5c2a4(&DAT_0918a4f8);
    FUN_03f5c2a4(&DAT_0918d0f8);
    FUN_03f5c2a4(&DAT_091f9980);
    FUN_03f5c2a4(&DAT_091f98d0);
    FUN_03f5c2a4(&DAT_091f98e8);
    FUN_03f5c2a4(&DAT_091f98f0);
    FUN_03f5c2a4(&DAT_091f98d8);
    FUN_03f5c2a4(&DAT_091f9990);
    FUN_03f5c2a4(&DAT_091f9988);
    FUN_03f5c2a4(&DAT_091f98f8);
    FUN_03f5c2a4(&DAT_091f98e0);
    DAT_09520e29 = 1;
  }
  if (param_2 == 0) goto LAB_073f33b4;
  if (*(char *)(param_2 + 0x10) == '0') {
    lVar5 = Mono_Security_ASN1__get_Item(param_2,0);
    if (lVar5 == 0) goto LAB_073f33b4;
    if (*(char *)(lVar5 + 0x10) == '\x06') {
      lVar6 = Mono_Security_ASN1__get_Item(param_2,1);
      uVar7 = Mono_Security_ASN1Convert__ToOid(lVar5);
      uVar8 = System_String__op_Equality(uVar7,DAT_091f98d0,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = System_String__op_Equality(uVar7,DAT_091f98d8,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = System_String__op_Equality(uVar7,DAT_091f98e0,0);
          if ((uVar8 & 1) == 0) {
            uVar8 = System_String__op_Equality(uVar7,DAT_091f98e8,0);
            if ((uVar8 & 1) == 0) {
              uVar8 = System_String__op_Equality(uVar7,DAT_091f98f0,0);
              if ((uVar8 & 1) == 0) {
                uVar8 = System_String__op_Equality(uVar7,DAT_091f98f8,0);
                if ((uVar8 & 1) == 0) {
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar7 = thunk_FUN_03f9944c();
                  puVar13 = &DAT_09224f20;
                  goto LAB_073f33d4;
                }
              }
              else {
                if (lVar6 == 0) goto LAB_073f33b4;
                uVar9 = Mono_Security_ASN1__get_Value(lVar6);
                plVar11 = *(long **)(param_1 + 0x20);
                if (plVar11 == (long *)0x0) goto LAB_073f33b4;
                (**(code **)(*plVar11 + 0x308))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x310));
              }
            }
          }
          else {
            if (lVar6 == 0) goto LAB_073f33b4;
            uVar9 = Mono_Security_ASN1__get_Value(lVar6);
            lVar5 = thunk_FUN_03f9944c(DAT_09193130);
            Mono_Security_PKCS7_ContentInfo___ctor(lVar5,uVar9);
            if (lVar5 == 0) goto LAB_073f33b4;
            uVar8 = System_String__op_Inequality(*(undefined8 *)(lVar5 + 0x10),DAT_091f9990,0);
            if ((uVar8 & 1) != 0) {
              thunk_FUN_03fc39d4(&DAT_09188920);
              uVar7 = thunk_FUN_03f9944c();
              uVar9 = thunk_FUN_03fc39d4(&DAT_09224fd0);
              System_NotSupportedException___ctor(uVar7,uVar9,0);
              goto LAB_073f33e8;
            }
            if ((*(long *)(lVar5 + 0x18) == 0) ||
               (lVar5 = Mono_Security_ASN1__get_Item(*(long *)(lVar5 + 0x18),0), lVar5 == 0))
            goto LAB_073f33b4;
            uVar9 = Mono_Security_ASN1__get_Value();
            uVar10 = thunk_FUN_03f9944c(DAT_0918d0f8);
            Mono_Security_X509_X509Certificate___ctor(uVar10,uVar9);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_073f33b4;
            Mono_Security_X509_X509CertificateCollection__Add(*(long *)(param_1 + 0x28),uVar10);
          }
        }
        else {
          if (lVar6 == 0) goto LAB_073f33b4;
          uVar9 = Mono_Security_ASN1__get_Value(lVar6);
          lVar5 = thunk_FUN_03f9944c(DAT_09193150);
          Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo___ctor(lVar5,uVar9,0);
          if (lVar5 == 0) goto LAB_073f33b4;
          uVar14 = *(undefined8 *)(lVar5 + 0x10);
          uVar9 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo__get_Salt(lVar5,0);
          uVar1 = *(undefined4 *)(lVar5 + 0x20);
          uVar10 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo__get_EncryptedData
                             (lVar5,0);
          lVar5 = Mono_Security_X509_PKCS12__Decrypt(param_1,uVar14,uVar9,uVar1,uVar10);
          uVar9 = thunk_FUN_03f9944c(DAT_09193158);
          Mono_Security_Cryptography_PKCS8_PrivateKeyInfo___ctor(uVar9,lVar5,0);
          Mono_Security_X509_PKCS12__AddPrivateKey(param_1,uVar9);
          if (lVar5 == 0) goto LAB_073f33b4;
          System_Array__Clear(lVar5,0,*(undefined4 *)(lVar5 + 0x18),0);
        }
      }
      else {
        if (lVar6 == 0) goto LAB_073f33b4;
        uVar9 = Mono_Security_ASN1__get_Value(lVar6);
        uVar10 = thunk_FUN_03f9944c(DAT_09193158);
        Mono_Security_Cryptography_PKCS8_PrivateKeyInfo___ctor(uVar10,uVar9,0);
        Mono_Security_X509_PKCS12__AddPrivateKey(param_1,uVar10);
      }
      plVar11 = *(long **)(param_2 + 0x20);
      if ((plVar11 == (long *)0x0) ||
         (iVar2 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0)),
         iVar2 < 3)) {
LAB_073f3220:
        plVar11 = *(long **)(param_1 + 0x38);
        uVar9 = thunk_FUN_03f9944c(DAT_0918a4f8);
        Mono_Security_X509_SafeBag___ctor(uVar9,uVar7,param_2);
        if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073f3274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x308))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x310));
          return;
        }
LAB_073f33b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = Mono_Security_ASN1__get_Item(param_2,2);
      if (lVar5 == 0) goto LAB_073f33b4;
      if (*(char *)(lVar5 + 0x10) == '1') {
        iVar2 = 0;
        while( true ) {
          plVar11 = *(long **)(lVar5 + 0x20);
          iVar3 = 0;
          if (plVar11 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
          }
          if (iVar3 <= iVar2) goto LAB_073f3220;
          lVar6 = Mono_Security_ASN1__get_Item(lVar5,iVar2);
          if (lVar6 == 0) break;
          if (*(char *)(lVar6 + 0x10) != '0') {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar7 = thunk_FUN_03f9944c();
            puVar13 = &DAT_0921d790;
            goto LAB_073f33d4;
          }
          lVar12 = Mono_Security_ASN1__get_Item(lVar6,0);
          if (lVar12 == 0) break;
          if (*(char *)(lVar12 + 0x10) != '\x06') {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar7 = thunk_FUN_03f9944c();
            puVar13 = &DAT_0921d7a8;
            goto LAB_073f33d4;
          }
          uVar9 = Mono_Security_ASN1Convert__ToOid();
          lVar6 = Mono_Security_ASN1__get_Item(lVar6,1);
          if (lVar6 == 0) break;
          iVar3 = 0;
          while( true ) {
            plVar11 = *(long **)(lVar6 + 0x20);
            iVar4 = 0;
            if (plVar11 != (long *)0x0) {
              iVar4 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
            }
            if (iVar4 <= iVar3) break;
            lVar12 = Mono_Security_ASN1__get_Item(lVar6,iVar3);
            uVar8 = System_String__op_Equality(uVar9,DAT_091f9980,0);
            if ((uVar8 & 1) == 0) {
              uVar8 = System_String__op_Equality(uVar9,DAT_091f9988,0);
              if ((uVar8 & 1) != 0) {
                if (lVar12 == 0) goto LAB_073f33b4;
                if (*(char *)(lVar12 + 0x10) != '\x04') goto LAB_073f33b8;
              }
            }
            else {
              if (lVar12 == 0) goto LAB_073f33b4;
              if (*(char *)(lVar12 + 0x10) != '\x1e') {
LAB_073f33b8:
                thunk_FUN_03fc39d4(&DAT_09181548);
                uVar7 = thunk_FUN_03f9944c();
                puVar13 = &DAT_0921d7b0;
                goto LAB_073f33d4;
              }
            }
            iVar3 = iVar3 + 1;
          }
          iVar2 = iVar2 + 1;
        }
        goto LAB_073f33b4;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar13 = &DAT_0921d810;
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar13 = &DAT_0921d818;
    }
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    puVar13 = &DAT_0921d808;
  }
LAB_073f33d4:
  uVar9 = thunk_FUN_03fc39d4(puVar13);
  System_ArgumentException___ctor(uVar7,uVar9,0);
LAB_073f33e8:
  uVar9 = thunk_FUN_03fc39d4(&DAT_091d56d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar9);
}

