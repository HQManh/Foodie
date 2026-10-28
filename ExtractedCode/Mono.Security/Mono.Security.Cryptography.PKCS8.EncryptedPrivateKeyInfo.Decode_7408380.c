// rea decompile_all
// name: Mono.Security.Cryptography.PKCS8.EncryptedPrivateKeyInfo$$Decode
// address: 0x7408380
// body: available
// range: 0x7408380-0x740862b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740851c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7408520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7408628 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo__Decode
               (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if ((DAT_09520ed3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    DAT_09520ed3 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
  Mono_Security_ASN1___ctor(lVar3,param_2,0);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x10) == '0') {
      lVar4 = Mono_Security_ASN1__get_Item(lVar3,0,0);
      if (lVar4 == 0) goto LAB_07408520;
      if (*(char *)(lVar4 + 0x10) == '0') {
        lVar5 = Mono_Security_ASN1__get_Item(lVar4,0,0);
        if (lVar5 == 0) goto LAB_07408520;
        if (*(char *)(lVar5 + 0x10) == '\x06') {
          uVar6 = Mono_Security_ASN1Convert__ToOid(lVar5,0);
          *(undefined8 *)(param_1 + 0x10) = uVar6;
          thunk_FUN_03f5d7b8();
          iVar1 = Mono_Security_ASN1__get_Count(lVar4,0);
          if (1 < iVar1) {
            lVar4 = Mono_Security_ASN1__get_Item(lVar4,1,0);
            if (lVar4 == 0) goto LAB_07408520;
            if (*(char *)(lVar4 + 0x10) != '0') {
              thunk_FUN_03fc39d4(&DAT_09182f98);
              uVar6 = thunk_FUN_03f9944c();
              puVar7 = &DAT_0921d7f8;
              goto LAB_07408600;
            }
            lVar5 = Mono_Security_ASN1__get_Item(lVar4,0,0);
            if (lVar5 == 0) goto LAB_07408520;
            if (*(char *)(lVar5 + 0x10) != '\x04') {
              thunk_FUN_03fc39d4(&DAT_09182f98);
              uVar6 = thunk_FUN_03f9944c();
              puVar7 = &DAT_0921d820;
              goto LAB_07408600;
            }
            uVar6 = Mono_Security_ASN1__get_Value(lVar5,0);
            *(undefined8 *)(param_1 + 0x18) = uVar6;
            thunk_FUN_03f5d7b8();
            lVar4 = Mono_Security_ASN1__get_Item(lVar4,1,0);
            if (lVar4 == 0) goto LAB_07408520;
            if (*(char *)(lVar4 + 0x10) != '\x02') {
              thunk_FUN_03fc39d4(&DAT_09182f98);
              uVar6 = thunk_FUN_03f9944c();
              puVar7 = &DAT_0921d7e8;
              goto LAB_07408600;
            }
            uVar2 = Mono_Security_ASN1Convert__ToInt32(lVar4,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          lVar3 = Mono_Security_ASN1__get_Item(lVar3,1,0);
          if (lVar3 == 0) goto LAB_07408520;
          if (*(char *)(lVar3 + 0x10) == '\x04') {
            uVar6 = Mono_Security_ASN1__get_Value(lVar3,0);
            *(undefined8 *)(param_1 + 0x28) = uVar6;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar6);
            return;
          }
          thunk_FUN_03fc39d4(&DAT_09182f98);
          uVar6 = thunk_FUN_03f9944c();
          puVar7 = &DAT_0921d768;
        }
        else {
          thunk_FUN_03fc39d4(&DAT_09182f98);
          uVar6 = thunk_FUN_03f9944c();
          puVar7 = &DAT_0921d7a0;
        }
      }
      else {
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar6 = thunk_FUN_03f9944c();
        puVar7 = &DAT_0921d7d0;
      }
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar6 = thunk_FUN_03f9944c();
      puVar7 = &DAT_0921d770;
    }
LAB_07408600:
    uVar8 = thunk_FUN_03fc39d4(puVar7);
    System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091ee298);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar8);
  }
LAB_07408520:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

