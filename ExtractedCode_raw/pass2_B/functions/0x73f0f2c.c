// rea decompile_all
// name: Mono.Security.PKCS7.EncryptedData$$.ctor
// address: 0x73f0f2c
// body: available
// range: 0x73f0f2c-0x73f121f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f112c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73f1130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f1174 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f121c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_PKCS7_EncryptedData___ctor(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((DAT_09520e17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193130);
    DAT_09520e17 = 1;
  }
  System_Object___ctor(param_1,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (param_2 == 0) goto LAB_073f1130;
  if ((*(char *)(param_2 + 0x10) == '0') &&
     (plVar2 = *(long **)(param_2 + 0x20), plVar2 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    if (1 < iVar1) {
      lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
      if (lVar3 == 0) goto LAB_073f1130;
      if (*(char *)(lVar3 + 0x10) != '\x02') {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        puVar7 = &DAT_09205bb8;
        goto LAB_073f11f4;
      }
      lVar3 = Mono_Security_ASN1__get_Item(param_2,0);
      if ((lVar3 == 0) || (lVar3 = Mono_Security_ASN1__get_Value(), lVar3 == 0)) {
LAB_073f1130:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(lVar3 + 0x20);
      lVar3 = Mono_Security_ASN1__get_Item(param_2,1);
      if (lVar3 == 0) goto LAB_073f1130;
      if (*(char *)(lVar3 + 0x10) == '0') {
        lVar4 = Mono_Security_ASN1__get_Item(lVar3,0);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x10) != '\x06') {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar5 = thunk_FUN_03f9944c();
            puVar7 = &DAT_0921f798;
            goto LAB_073f11f4;
          }
          uVar5 = Mono_Security_ASN1Convert__ToOid();
          lVar4 = thunk_FUN_03f9944c(DAT_09193130);
          Mono_Security_PKCS7_ContentInfo___ctor();
          *(undefined8 *)(lVar4 + 0x10) = uVar5;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar5);
          *(long *)(param_1 + 0x18) = lVar4;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),lVar4);
          lVar4 = Mono_Security_ASN1__get_Item(lVar3,1);
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x10) != '0') {
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar5 = thunk_FUN_03f9944c();
              puVar7 = &DAT_0921f790;
              goto LAB_073f11f4;
            }
            Mono_Security_ASN1__get_Item(lVar4,0);
            uVar5 = Mono_Security_ASN1Convert__ToOid();
            lVar6 = thunk_FUN_03f9944c(DAT_09193130);
            Mono_Security_PKCS7_ContentInfo___ctor();
            *(undefined8 *)(lVar6 + 0x10) = uVar5;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),uVar5);
            plVar2 = (long *)(param_1 + 0x20);
            *plVar2 = lVar6;
            thunk_FUN_03f5d7b8(plVar2,lVar6);
            lVar6 = *plVar2;
            uVar5 = Mono_Security_ASN1__get_Item(lVar4,1);
            if (lVar6 != 0) {
              puVar9 = (undefined8 *)(lVar6 + 0x18);
              *puVar9 = uVar5;
              thunk_FUN_03f5d7b8(puVar9,uVar5);
              lVar3 = Mono_Security_ASN1__get_Item(lVar3,2);
              if (lVar3 != 0) {
                if (*(char *)(lVar3 + 0x10) == -0x80) {
                  uVar5 = Mono_Security_ASN1__get_Value();
                  *(undefined8 *)(param_1 + 0x28) = uVar5;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar5);
                  return;
                }
                thunk_FUN_03fc39d4(&DAT_09181548);
                uVar5 = thunk_FUN_03f9944c();
                puVar7 = &DAT_0921f7a0;
                goto LAB_073f11f4;
              }
            }
          }
        }
        goto LAB_073f1130;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      puVar7 = &DAT_0921f788;
      goto LAB_073f11f4;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  puVar7 = &DAT_092051e8;
LAB_073f11f4:
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentException___ctor(uVar5,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091ee280);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar8);
}

