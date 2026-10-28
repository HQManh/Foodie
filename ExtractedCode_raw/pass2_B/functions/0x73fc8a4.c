// rea decompile_all
// name: Mono.Security.X509.X509Certificate$$get_Signature
// address: 0x73fc8a4
// body: available
// range: 0x73fc8a4-0x73fccd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fcc60 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fccd0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fccd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_X509Certificate__get_Signature(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_09520e51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091f9ac8);
    FUN_03f5c2a4(&DAT_091f9888);
    FUN_03f5c2a4(&DAT_091f9858);
    FUN_03f5c2a4(&DAT_091f9860);
    FUN_03f5c2a4(&DAT_091f97d0);
    FUN_03f5c2a4(&DAT_091f9870);
    FUN_03f5c2a4(&DAT_091f9868);
    FUN_03f5c2a4(&DAT_091f9880);
    FUN_03f5c2a4(&DAT_091f9878);
    FUN_03f5c2a4(&DAT_091f9a98);
    DAT_09520e51 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    uVar1 = <PrivateImplementationDetails>__ComputeStringHash(uVar11,0);
    if (uVar1 < 0x2adb999e) {
      if (uVar1 < 0x23db8e99) {
        if (uVar1 == 0x1e6ebeee) {
          uVar6 = System_String__op_Equality(uVar11,DAT_091f97d0,0);
          if ((uVar6 & 1) == 0) goto LAB_073fcc7c;
          uVar11 = *(undefined8 *)(param_1 + 0x68);
          lVar7 = thunk_FUN_03f9944c(DAT_09180e18);
          Mono_Security_ASN1___ctor(lVar7,uVar11);
          if (lVar7 == 0) {
            return 0;
          }
          plVar4 = *(long **)(lVar7 + 0x20);
          if (plVar4 == (long *)0x0) {
            return 0;
          }
          iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
          if (iVar2 != 2) {
            return 0;
          }
          lVar8 = Mono_Security_ASN1__get_Item(lVar7,0);
          if (lVar8 != 0) {
            lVar8 = Mono_Security_ASN1__get_Value();
            lVar7 = Mono_Security_ASN1__get_Item(lVar7,1);
            if (lVar7 != 0) {
              lVar7 = Mono_Security_ASN1__get_Value();
              lVar5 = FUN_03f5c394(DAT_0917fc88,0x28);
              if (lVar8 != 0) {
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar2 = System_Math__Max(0,*(int *)(lVar8 + 0x18) + -0x14,0);
                uVar3 = System_Math__Max(0,0x14 - *(int *)(lVar8 + 0x18),0);
                System_Buffer__BlockCopy(lVar8,iVar2,lVar5,uVar3,*(int *)(lVar8 + 0x18) - iVar2,0);
                if (lVar7 != 0) {
                  iVar2 = System_Math__Max(0,*(int *)(lVar7 + 0x18) + -0x14,0);
                  uVar3 = System_Math__Max(0x14,0x28 - *(int *)(lVar7 + 0x18),0);
                  System_Buffer__BlockCopy(lVar7,iVar2,lVar5,uVar3,*(int *)(lVar7 + 0x18) - iVar2,0)
                  ;
                  return lVar5;
                }
              }
            }
          }
          goto LAB_073fccd4;
        }
        if (uVar1 != 0x23db8e98) goto LAB_073fcc7c;
        puVar9 = &DAT_091f9888;
      }
      else if (uVar1 == 0x24db902b) {
        puVar9 = &DAT_091f9880;
      }
      else if (uVar1 == 0x29db980a) {
        puVar9 = &DAT_091f9878;
      }
      else {
        if (uVar1 != 0x2adb999d) goto LAB_073fcc7c;
        puVar9 = &DAT_091f9870;
      }
    }
    else if (uVar1 < 0x93ab4b50) {
      if (uVar1 == 0x93ab4b4f) {
        puVar9 = &DAT_091f9858;
      }
      else {
        if (uVar1 != 0x342fa1d8) goto LAB_073fcc7c;
        puVar9 = &DAT_091f9a98;
      }
    }
    else if (uVar1 == 0x94ab4ce2) {
      puVar9 = &DAT_091f9860;
    }
    else if (uVar1 == 0x95ab4e75) {
      puVar9 = &DAT_091f9868;
    }
    else {
      if (uVar1 != 0xd038ecd7) goto LAB_073fcc7c;
      puVar9 = &DAT_091f9ac8;
    }
    uVar6 = System_String__op_Equality(uVar11,*puVar9,0);
    if ((uVar6 & 1) == 0) {
LAB_073fcc7c:
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      uVar11 = thunk_FUN_03fc39d4(&DAT_092126d8);
      uVar11 = System_String__Concat(uVar11,uVar10,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar10 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicException___ctor(uVar10,uVar11,0);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091df418);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,uVar11);
    }
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_073fccd4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = System_Array__Clone(*(long *)(param_1 + 0x68),0);
    uVar11 = DAT_0917fc88;
    if (lVar7 != 0) {
      lVar8 = thunk_FUN_03f99350(lVar7,DAT_0917fc88);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar7,uVar11);
      }
      return lVar8;
    }
  }
  return 0;
}

