// rea decompile_all
// name: Mono.Security.X509.PKCS12$$GetSymmetricAlgorithm
// address: 0x73f42c0
// body: available
// range: 0x73f42c0-0x73f48c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f486c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f48c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Mono_Security_X509_PKCS12__GetSymmetricAlgorithm
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if ((DAT_09520e24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193128);
    FUN_03f5c2a4(&DAT_091f9918);
    FUN_03f5c2a4(&DAT_0920b340);
    FUN_03f5c2a4(&DAT_091f98b0);
    FUN_03f5c2a4(&DAT_0920c350);
    FUN_03f5c2a4(&DAT_09210e08);
    FUN_03f5c2a4(&DAT_091f98b8);
    FUN_03f5c2a4(&DAT_091f9928);
    FUN_03f5c2a4(&DAT_091f98c0);
    FUN_03f5c2a4(&DAT_091f9910);
    FUN_03f5c2a4(&DAT_091f98a8);
    FUN_03f5c2a4(&DAT_091f98a0);
    FUN_03f5c2a4(&DAT_091ffc18);
    FUN_03f5c2a4(&DAT_09207308);
    FUN_03f5c2a4(&DAT_091f9920);
    FUN_03f5c2a4(&DAT_091f98c8);
    FUN_03f5c2a4(&DAT_091f9930);
    FUN_03f5c2a4(&DAT_09207318);
    FUN_03f5c2a4(&DAT_0920b338);
    FUN_03f5c2a4(&DAT_091f9908);
    DAT_09520e24 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09193128);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) goto LAB_073f486c;
  Mono_Security_X509_PKCS12_DeriveBytes__set_Password(lVar3,*(undefined8 *)(param_1 + 0x10));
  Mono_Security_X509_PKCS12_DeriveBytes__set_Salt(lVar3,param_3);
  *(undefined4 *)(lVar3 + 0x18) = param_4;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(param_2,0);
  if (uVar2 < 0xafd2b8ed) {
    if (uVar2 < 0xabd2b2a1) {
      if (uVar2 == 0xabd2b2a0) {
        uVar4 = System_String__op_Equality(param_2,DAT_091f98c8,0);
        if ((uVar4 & 1) == 0) goto LAB_073f4870;
        *(undefined8 *)(lVar3 + 0x10) = DAT_0920c350;
        thunk_FUN_03f5d7b8();
        uVar9 = 5;
      }
      else {
        if (uVar2 == 0x4e59ded8) {
          uVar4 = System_String__op_Equality(param_2,DAT_091f9910,0);
          if ((uVar4 & 1) == 0) goto LAB_073f4870;
          puVar7 = &DAT_0920c350;
          goto LAB_073f47c0;
        }
        if ((uVar2 != 0x4f59e06b) ||
           (uVar4 = System_String__op_Equality(param_2,DAT_091f9918,0), (uVar4 & 1) == 0)) {
LAB_073f4870:
          uVar9 = thunk_FUN_03fc39d4(&DAT_09224f18);
          uVar9 = System_String__Concat(uVar9,0,0);
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar6 = thunk_FUN_03f9944c();
          System_NotSupportedException___ctor(uVar6,uVar9,0);
          uVar9 = thunk_FUN_03fc39d4(&DAT_091d56d0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar9);
        }
        puVar7 = &DAT_0920c350;
LAB_073f46ac:
        *(undefined8 *)(lVar3 + 0x10) = *puVar7;
        thunk_FUN_03f5d7b8();
        uVar9 = 4;
      }
      puVar7 = &DAT_0920b338;
    }
    else {
      if (uVar2 == 0xadd2b5c6) {
        uVar4 = System_String__op_Equality(param_2,DAT_091f98b8,0);
        if ((uVar4 & 1) == 0) goto LAB_073f4870;
        *(undefined8 *)(lVar3 + 0x10) = DAT_0920c350;
        thunk_FUN_03f5d7b8();
        puVar7 = (undefined8 *)&DAT_09210e08;
      }
      else {
        if (uVar2 != 0xaed2b759) {
          if ((uVar2 != 0xafd2b8ec) ||
             (uVar4 = System_String__op_Equality(param_2,DAT_091f98a8,0), (uVar4 & 1) == 0))
          goto LAB_073f4870;
          *(undefined8 *)(lVar3 + 0x10) = DAT_0920c350;
          thunk_FUN_03f5d7b8();
          bVar1 = false;
          uVar8 = 0;
          puVar7 = &DAT_0920b340;
          uVar9 = 5;
          goto LAB_073f47e4;
        }
        uVar4 = System_String__op_Equality(param_2,DAT_091f98c0,0);
        if ((uVar4 & 1) == 0) goto LAB_073f4870;
        *(undefined8 *)(lVar3 + 0x10) = DAT_0920c350;
        thunk_FUN_03f5d7b8();
        puVar7 = &DAT_0920b338;
      }
      uVar9 = 0x10;
    }
LAB_073f4790:
    uVar8 = 8;
    bVar1 = true;
  }
  else {
    if (uVar2 < 0xd33b4cf9) {
      if (uVar2 == 0xb0d2ba7f) {
        uVar4 = System_String__op_Equality(param_2,DAT_091f98b0,0);
        if ((uVar4 & 1) == 0) goto LAB_073f4870;
        *(undefined8 *)(lVar3 + 0x10) = DAT_0920c350;
        thunk_FUN_03f5d7b8();
        uVar9 = 0x18;
        puVar7 = (undefined8 *)&DAT_09210e08;
        goto LAB_073f4790;
      }
      if (uVar2 == 0xb2d2bda5) {
        uVar4 = System_String__op_Equality(param_2,DAT_091f98a0,0);
        if ((uVar4 & 1) == 0) goto LAB_073f4870;
        *(undefined8 *)(lVar3 + 0x10) = DAT_0920c350;
        thunk_FUN_03f5d7b8();
        bVar1 = false;
        uVar8 = 0;
        puVar7 = &DAT_0920b340;
        uVar9 = 0x10;
        goto LAB_073f47e4;
      }
      if ((uVar2 != 0xd33b4cf8) ||
         (uVar4 = System_String__op_Equality(param_2,DAT_091f9908,0), (uVar4 & 1) == 0))
      goto LAB_073f4870;
      puVar7 = &DAT_09207308;
    }
    else {
      if (uVar2 != 0xd53b501e) {
        if (uVar2 == 0xd83b54d7) {
          uVar4 = System_String__op_Equality(param_2,DAT_091f9928,0);
          if ((uVar4 & 1) == 0) goto LAB_073f4870;
          puVar7 = &DAT_09207308;
        }
        else {
          if ((uVar2 != 0xda3b57fd) ||
             (uVar4 = System_String__op_Equality(param_2,DAT_091f9930,0), (uVar4 & 1) == 0))
          goto LAB_073f4870;
          puVar7 = &DAT_09207318;
        }
        goto LAB_073f46ac;
      }
      uVar4 = System_String__op_Equality(param_2,DAT_091f9920,0);
      if ((uVar4 & 1) == 0) goto LAB_073f4870;
      puVar7 = &DAT_09207318;
    }
LAB_073f47c0:
    *(undefined8 *)(lVar3 + 0x10) = *puVar7;
    thunk_FUN_03f5d7b8();
    uVar8 = 8;
    bVar1 = true;
    puVar7 = &DAT_091ffc18;
    uVar9 = 8;
  }
LAB_073f47e4:
  plVar5 = (long *)System_Security_Cryptography_SymmetricAlgorithm__Create(*puVar7,0);
  uVar9 = Mono_Security_X509_PKCS12_DeriveBytes__DeriveKey(lVar3,uVar9);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x1f8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x200));
    if (bVar1) {
      uVar9 = Mono_Security_X509_PKCS12_DeriveBytes__DeriveIV(lVar3,uVar8);
      (**(code **)(*plVar5 + 0x1d8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x1e0));
      (**(code **)(*plVar5 + 0x248))(plVar5,1,*(undefined8 *)(*plVar5 + 0x250));
    }
    return plVar5;
  }
LAB_073f486c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

