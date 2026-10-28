// rea decompile_all
// name: Mono.Security.Cryptography.PKCS8.PrivateKeyInfo$$DecodeRSA
// address: 0x7407a64
// body: available
// range: 0x7407a64-0x7407daf inclusive
// range: 0x7407e88-0x7407e8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7407da8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7407dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7407e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeRSA(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_09520ecd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    DAT_09520ecd = 1;
  }
  lStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09180e18);
  Mono_Security_ASN1___ctor(lVar2,param_1,0);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x10) == '0') {
      lVar3 = Mono_Security_ASN1__get_Item(lVar2,0,0);
      if (lVar3 == 0) goto LAB_07407e88;
      if (*(char *)(lVar3 + 0x10) == '\x02') {
        iVar1 = Mono_Security_ASN1__get_Count(lVar2,0);
        if (8 < iVar1) {
          lStack_e8 = 0;
          local_f0 = 0;
          local_d8 = 0;
          local_e0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          local_b8 = 0;
          local_c0 = 0;
          lVar3 = Mono_Security_ASN1__get_Item(lVar2,1,0);
          if (lVar3 != 0) {
            Mono_Security_ASN1__get_Value(lVar3,0);
            lStack_e8 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__RemoveLeadingZero();
            thunk_FUN_03f5d7b8((ulong)&local_f0 | 8,lStack_e8);
            if (lStack_e8 != 0) {
              iVar1 = *(int *)(lStack_e8 + 0x18);
              lVar3 = Mono_Security_ASN1__get_Item(lVar2,3,0);
              if (lVar3 != 0) {
                uVar4 = Mono_Security_ASN1__get_Value(lVar3,0);
                local_b8 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Normalize(uVar4,iVar1);
                thunk_FUN_03f5d7b8(&local_b8,local_b8);
                lVar3 = Mono_Security_ASN1__get_Item(lVar2,6,0);
                if (lVar3 != 0) {
                  iVar1 = iVar1 >> 1;
                  uVar4 = Mono_Security_ASN1__get_Value(lVar3,0);
                  local_d0 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Normalize(uVar4,iVar1)
                  ;
                  thunk_FUN_03f5d7b8(&local_d0,local_d0);
                  lVar3 = Mono_Security_ASN1__get_Item(lVar2,7,0);
                  if (lVar3 != 0) {
                    uVar4 = Mono_Security_ASN1__get_Value(lVar3,0);
                    uStack_c8 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Normalize
                                          (uVar4,iVar1);
                    thunk_FUN_03f5d7b8(&uStack_c8,uStack_c8);
                    lVar3 = Mono_Security_ASN1__get_Item(lVar2,2,0);
                    if (lVar3 != 0) {
                      Mono_Security_ASN1__get_Value(lVar3,0);
                      local_f0 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__RemoveLeadingZero
                                           ();
                      thunk_FUN_03f5d7b8(&local_f0,local_f0);
                      lVar3 = Mono_Security_ASN1__get_Item(lVar2,8,0);
                      if (lVar3 != 0) {
                        uVar4 = Mono_Security_ASN1__get_Value(lVar3,0);
                        local_c0 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Normalize
                                             (uVar4,iVar1);
                        thunk_FUN_03f5d7b8(&local_c0,local_c0);
                        lVar3 = Mono_Security_ASN1__get_Item(lVar2,4,0);
                        if (lVar3 != 0) {
                          uVar4 = Mono_Security_ASN1__get_Value(lVar3,0);
                          local_e0 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Normalize
                                               (uVar4,iVar1);
                          thunk_FUN_03f5d7b8(&local_e0,local_e0);
                          lVar2 = Mono_Security_ASN1__get_Item(lVar2,5,0);
                          if (lVar2 != 0) {
                            uVar4 = Mono_Security_ASN1__get_Value(lVar2,0);
                            local_d8 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Normalize
                                                 (uVar4,iVar1);
                            thunk_FUN_03f5d7b8(&local_d8,local_d8);
                            plVar5 = (long *)System_Security_Cryptography_RSA__Create(0);
                            if (plVar5 != (long *)0x0) {
                              lStack_a8 = lStack_e8;
                              local_b0 = local_f0;
                              uStack_98 = local_d8;
                              uStack_a0 = local_e0;
                              uStack_88 = uStack_c8;
                              local_90 = local_d0;
                              uStack_78 = local_b8;
                              uStack_80 = local_c0;
                              (**(code **)(*plVar5 + 0x1f8))
                                        (plVar5,&local_b0,*(undefined8 *)(*plVar5 + 0x200));
                              return plVar5;
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_07407e88;
        }
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar4 = thunk_FUN_03f9944c();
        puVar6 = &DAT_0921ff98;
      }
      else {
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar4 = thunk_FUN_03f9944c();
        puVar6 = &DAT_0921f7c0;
      }
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar4 = thunk_FUN_03f9944c();
      puVar6 = &DAT_0921d800;
    }
    uVar7 = thunk_FUN_03fc39d4(puVar6);
    System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091ee2b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar7);
  }
LAB_07407e88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

