// rea decompile_all
// name: Mono.Security.X509.PKCS12$$get_Certificates
// address: 0x73f3e90
// body: available
// range: 0x73f3e90-0x73f4203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f410c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f41f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073f41fc) */
/* WARNING: Removing unreachable block (ram,0x073f41a4) */

undefined8 Mono_Security_X509_PKCS12__get_Certificates(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  if ((DAT_09520e23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918a4f8);
    FUN_03f5c2a4(&DAT_0918d0f8);
    FUN_03f5c2a4(&DAT_091f98e0);
    DAT_09520e23 = 1;
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_CollectionBase__Clear(*(long *)(param_1 + 0x28),0);
      plVar1 = *(long **)(param_1 + 0x38);
      if (plVar1 != (long *)0x0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 0x388))(plVar1,*(undefined8 *)(*plVar1 + 0x390));
        do {
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar1;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_073f3fcc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_073f3fcc:
          uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
          if ((uVar7 & 1) == 0) {
            plVar1 = (long *)thunk_FUN_03f99350(plVar1,DAT_09185a58);
            if (plVar1 == (long *)0x0) goto LAB_073f4198;
            lVar6 = *plVar1;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 == 0) goto LAB_073f4170;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_073f4158;
          }
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar1;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_073f4034;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,1);
LAB_073f4034:
          plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8)
              != DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar3);
          }
          if (plVar3[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = System_String__Equals(plVar3[2],DAT_091f98e0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Mono_Security_ASN1__get_Item(plVar3[3],1);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = Mono_Security_ASN1__get_Value();
            lVar6 = thunk_FUN_03f9944c(DAT_09193130);
            Mono_Security_PKCS7_ContentInfo___ctor(lVar6,uVar4);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(param_1 + 0x28);
            lVar6 = Mono_Security_ASN1__get_Item(*(long *)(lVar6 + 0x18),0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = Mono_Security_ASN1__get_Value();
            uVar5 = thunk_FUN_03f9944c(DAT_0918d0f8);
            Mono_Security_X509_X509Certificate___ctor(uVar5,uVar4);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Mono_Security_X509_X509CertificateCollection__Add(lVar9,uVar5);
          }
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_073f41ac;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_073f4158:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_073f418c;
    }
  }
LAB_073f4170:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_073f418c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_073f4198:
  *(undefined1 *)(param_1 + 0x32) = 0;
LAB_073f41ac:
  return *(undefined8 *)(param_1 + 0x28);
}

