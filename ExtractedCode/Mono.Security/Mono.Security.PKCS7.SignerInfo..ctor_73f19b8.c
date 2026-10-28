// rea decompile_all
// name: Mono.Security.PKCS7.SignerInfo$$.ctor
// address: 0x73f19b8
// body: available
// range: 0x73f19b8-0x73f1d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f1cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f1d58 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f1d5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_PKCS7_SignerInfo___ctor(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if ((DAT_09520e1c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d0e0);
    DAT_09520e1c = 1;
  }
  Mono_Security_PKCS7_SignerInfo___ctor(param_1);
  if ((param_2 == 0) || (lVar3 = Mono_Security_ASN1__get_Item(param_2,0), lVar3 == 0))
  goto LAB_073f1cf0;
  if (*(char *)(lVar3 + 0x10) == '0') {
    lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
    if (lVar3 == 0) goto LAB_073f1cf0;
    plVar4 = *(long **)(lVar3 + 0x20);
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0)), 4 < iVar1))
    {
      lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
      if ((lVar3 == 0) || (lVar3 = Mono_Security_ASN1__get_Item(lVar3,0), lVar3 == 0)) {
LAB_073f1cf0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar3 + 0x10) == '\x02') {
        lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
        if (((lVar3 != 0) && (lVar3 = Mono_Security_ASN1__get_Item(lVar3,0), lVar3 != 0)) &&
           (lVar3 = Mono_Security_ASN1__get_Value(), lVar3 != 0)) {
          if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(lVar3 + 0x20);
          lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
          if ((lVar3 != 0) && (lVar3 = Mono_Security_ASN1__get_Item(lVar3,1), lVar3 != 0)) {
            if ((*(char *)(lVar3 + 0x10) == -0x80) && (*(char *)(param_1 + 0x10) == '\x03')) {
              uVar5 = Mono_Security_ASN1__get_Value(lVar3);
              *(undefined8 *)(param_1 + 0x48) = uVar5;
            }
            else {
              uVar5 = Mono_Security_ASN1__get_Item(lVar3,0);
              if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918d0e0);
              }
              uVar5 = Mono_Security_X509_X501__ToString(uVar5);
              *(undefined8 *)(param_1 + 0x38) = uVar5;
              thunk_FUN_03f5d7b8();
              lVar3 = Mono_Security_ASN1__get_Item(lVar3,1);
              if (lVar3 == 0) goto LAB_073f1cf0;
              uVar5 = Mono_Security_ASN1__get_Value();
              *(undefined8 *)(param_1 + 0x40) = uVar5;
            }
            thunk_FUN_03f5d7b8();
            lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
            if ((lVar3 != 0) && (lVar3 = Mono_Security_ASN1__get_Item(lVar3,2), lVar3 != 0)) {
              Mono_Security_ASN1__get_Item(lVar3,0);
              uVar5 = Mono_Security_ASN1Convert__ToOid();
              *(undefined8 *)(param_1 + 0x18) = uVar5;
              thunk_FUN_03f5d7b8();
              lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
              if ((lVar3 != 0) && (lVar3 = Mono_Security_ASN1__get_Item(lVar3,3), lVar3 != 0)) {
                if (*(char *)(lVar3 + 0x10) == -0x60) {
                  iVar1 = 0;
                  while( true ) {
                    plVar4 = *(long **)(lVar3 + 0x20);
                    iVar2 = 0;
                    if (plVar4 != (long *)0x0) {
                      iVar2 = (**(code **)(*plVar4 + 0x298))
                                        (plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
                    }
                    if (iVar2 <= iVar1) {
                      iVar1 = 5;
                      goto LAB_073f1c20;
                    }
                    plVar4 = *(long **)(param_1 + 0x20);
                    uVar5 = Mono_Security_ASN1__get_Item(lVar3,iVar1);
                    if (plVar4 == (long *)0x0) break;
                    (**(code **)(*plVar4 + 0x308))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x310));
                    iVar1 = iVar1 + 1;
                  }
                }
                else {
                  iVar1 = 4;
LAB_073f1c20:
                  lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
                  if ((lVar3 != 0) &&
                     (lVar3 = Mono_Security_ASN1__get_Item(lVar3,iVar1), lVar3 != 0)) {
                    if (*(char *)(lVar3 + 0x10) == '\x04') {
                      uVar5 = Mono_Security_ASN1__get_Value();
                      *(undefined8 *)(param_1 + 0x30) = uVar5;
                      thunk_FUN_03f5d7b8();
                    }
                    lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
                    if (lVar3 != 0) {
                      lVar3 = Mono_Security_ASN1__get_Item(lVar3,iVar1 + 1);
                      if ((lVar3 == 0) || (*(char *)(lVar3 + 0x10) != -0x5f)) {
                        return;
                      }
                      iVar1 = 0;
                      while( true ) {
                        plVar4 = *(long **)(lVar3 + 0x20);
                        iVar2 = 0;
                        if (plVar4 != (long *)0x0) {
                          iVar2 = (**(code **)(*plVar4 + 0x298))
                                            (plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
                        }
                        if (iVar2 <= iVar1) {
                          return;
                        }
                        plVar4 = *(long **)(param_1 + 0x28);
                        uVar5 = Mono_Security_ASN1__get_Item(lVar3,iVar1);
                        if (plVar4 == (long *)0x0) break;
                        (**(code **)(*plVar4 + 0x308))
                                  (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x310));
                        iVar1 = iVar1 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_073f1cf0;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      puVar6 = &DAT_09205bb8;
      goto LAB_073f1d30;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  puVar6 = &DAT_09205348;
LAB_073f1d30:
  uVar7 = thunk_FUN_03fc39d4(puVar6);
  System_ArgumentException___ctor(uVar5,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091ee290);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar7);
}

