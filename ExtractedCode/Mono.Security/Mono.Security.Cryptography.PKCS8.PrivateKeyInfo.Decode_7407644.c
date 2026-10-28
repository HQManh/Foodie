// rea decompile_all
// name: Mono.Security.Cryptography.PKCS8.PrivateKeyInfo$$Decode
// address: 0x7407644
// body: available
// range: 0x7407644-0x74078ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74077fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7407840 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74078a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Decode(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_09520eca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    DAT_09520eca = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
  Mono_Security_ASN1___ctor(lVar3,param_2,0);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x10) != '0') {
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar5 = thunk_FUN_03f9944c();
      puVar6 = &DAT_0921d798;
LAB_07407880:
      uVar7 = thunk_FUN_03fc39d4(puVar6);
      System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091ee2a0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar7);
    }
    lVar4 = Mono_Security_ASN1__get_Item(lVar3,0,0);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) != '\x02') {
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar5 = thunk_FUN_03f9944c();
        puVar6 = &DAT_0921d838;
        goto LAB_07407880;
      }
      lVar4 = Mono_Security_ASN1__get_Value(lVar4,0);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(uint *)(param_1 + 0x10) = (uint)*(byte *)(lVar4 + 0x20);
        lVar4 = Mono_Security_ASN1__get_Item(lVar3,1,0);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x10) != '0') {
            thunk_FUN_03fc39d4(&DAT_09182f98);
            uVar5 = thunk_FUN_03f9944c();
            puVar6 = &DAT_0921d7a0;
            goto LAB_07407880;
          }
          lVar4 = Mono_Security_ASN1__get_Item(lVar4,0,0);
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x10) != '\x06') {
              thunk_FUN_03fc39d4(&DAT_09182f98);
              uVar5 = thunk_FUN_03f9944c();
              puVar6 = &DAT_0921f7b0;
              goto LAB_07407880;
            }
            uVar5 = Mono_Security_ASN1Convert__ToOid(lVar4,0);
            *(undefined8 *)(param_1 + 0x18) = uVar5;
            thunk_FUN_03f5d7b8();
            lVar4 = Mono_Security_ASN1__get_Item(lVar3,2,0);
            if (lVar4 != 0) {
              uVar5 = Mono_Security_ASN1__get_Value(lVar4,0);
              *(undefined8 *)(param_1 + 0x20) = uVar5;
              thunk_FUN_03f5d7b8();
              iVar1 = Mono_Security_ASN1__get_Count(lVar3,0);
              if (3 < iVar1) {
                lVar3 = Mono_Security_ASN1__get_Item(lVar3,3,0);
                if (lVar3 == 0) goto LAB_074077fc;
                iVar1 = Mono_Security_ASN1__get_Count(lVar3,0);
                if (0 < iVar1) {
                  iVar1 = 0;
                  do {
                    plVar8 = *(long **)(param_1 + 0x28);
                    uVar5 = Mono_Security_ASN1__get_Item(lVar3,iVar1,0);
                    if (plVar8 == (long *)0x0) goto LAB_074077fc;
                    (**(code **)(*plVar8 + 0x308))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x310));
                    iVar1 = iVar1 + 1;
                    iVar2 = Mono_Security_ASN1__get_Count(lVar3,0);
                  } while (iVar1 < iVar2);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_074077fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

