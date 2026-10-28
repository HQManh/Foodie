// rea decompile_all
// name: Mono.Security.X509.PKCS12$$get_Keys
// address: 0x73f3640
// body: available
// range: 0x73f3640-0x73f3bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f3ac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3b94 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3ba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3ba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3ba8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3bb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3bb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f3bbc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073f3bec) */
/* WARNING: Removing unreachable block (ram,0x073f3b5c) */

void Mono_Security_X509_PKCS12__get_Keys(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  long **pplStack_80;
  long **local_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_09520e22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193150);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09193158);
    FUN_03f5c2a4(&DAT_0918a4f8);
    FUN_03f5c2a4(&DAT_091f98d0);
    FUN_03f5c2a4(&DAT_091f98d8);
    DAT_09520e22 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
      plVar2 = *(long **)(param_1 + 0x38);
      if (plVar2 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
        pplStack_80 = &local_68;
        local_88 = 0;
        local_78 = &local_70;
        do {
          local_68 = plVar2;
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_073f379c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_073f379c:
          uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          plVar2 = local_68;
          if ((uVar9 & 1) == 0) {
            plVar2 = (long *)thunk_FUN_03f99350(local_68,DAT_09185a58);
            local_70 = plVar2;
            if (plVar2 == (long *)0x0) goto LAB_073f3b50;
            lVar8 = *plVar2;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_073f3b28;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_073f3b10;
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *local_68;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_073f3804;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,1);
LAB_073f3804:
          plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8)
              != DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = System_String__Equals(plVar4[2],DAT_091f98d0,0);
          if ((uVar9 & 1) == 0) {
            if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = System_String__Equals(plVar4[2],DAT_091f98d8,0);
            plVar2 = local_68;
            if ((uVar9 & 1) != 0) {
              if (plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = Mono_Security_ASN1__get_Item(plVar4[3],1);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = Mono_Security_ASN1__get_Value();
              lVar8 = thunk_FUN_03f9944c(DAT_09193150);
              Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo___ctor(lVar8,uVar5,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar11 = *(undefined8 *)(lVar8 + 0x10);
              uVar5 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo__get_Salt(lVar8,0);
              uVar1 = *(undefined4 *)(lVar8 + 0x20);
              uVar6 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo__get_EncryptedData
                                (lVar8,0);
              lVar8 = Mono_Security_X509_PKCS12__Decrypt(param_1,uVar11,uVar5,uVar1,uVar6);
              lVar7 = thunk_FUN_03f9944c(DAT_09193158);
              Mono_Security_Cryptography_PKCS8_PrivateKeyInfo___ctor(lVar7,lVar8,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__get_PrivateKey(lVar7,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*(char *)(lVar7 + 0x20) == '\x02') {
                plVar2 = *(long **)(param_1 + 0x18);
                uStack_108 = 0;
                local_110 = 0;
                uStack_f8 = 0;
                uStack_100 = 0;
                uStack_e8 = 0;
                local_f0 = 0;
                uStack_d8 = 0;
                uStack_e0 = 0;
                uVar5 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeDSA
                                  (lVar7,&local_110,0);
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar5,uVar5);
                }
                (**(code **)(*plVar2 + 0x308))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x310));
              }
              else if (*(char *)(lVar7 + 0x20) == '0') {
                plVar2 = *(long **)(param_1 + 0x18);
                uVar5 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeRSA(lVar7,0);
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar5,uVar5);
                }
                (**(code **)(*plVar2 + 0x308))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x310));
              }
              System_Array__Clear(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              System_Array__Clear(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
              plVar2 = local_68;
            }
          }
          else {
            if (plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = Mono_Security_ASN1__get_Item(plVar4[3],1);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = Mono_Security_ASN1__get_Value();
            lVar8 = thunk_FUN_03f9944c(DAT_09193158);
            Mono_Security_Cryptography_PKCS8_PrivateKeyInfo___ctor(lVar8,uVar5,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__get_PrivateKey(lVar8,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(char *)(lVar8 + 0x20) == '\x02') {
              plVar2 = *(long **)(param_1 + 0x18);
              uStack_c8 = 0;
              local_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_a8 = 0;
              local_b0 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uVar5 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeDSA(lVar8,&local_d0,0);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar5,uVar5);
              }
              (**(code **)(*plVar2 + 0x308))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x310));
            }
            else if (*(char *)(lVar8 + 0x20) == '0') {
              plVar2 = *(long **)(param_1 + 0x18);
              uVar5 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeRSA(lVar8,0);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar5,uVar5);
              }
              (**(code **)(*plVar2 + 0x308))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x310));
            }
            System_Array__Clear(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
            plVar2 = local_68;
          }
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_073f3b64;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_073f3b10:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_073f3b44;
    }
  }
LAB_073f3b28:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_073f3b44:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_073f3b50:
  *(undefined1 *)(param_1 + 0x30) = 0;
LAB_073f3b64:
  System_Collections_ArrayList__ReadOnly(*(undefined8 *)(param_1 + 0x18),0);
  return;
}

