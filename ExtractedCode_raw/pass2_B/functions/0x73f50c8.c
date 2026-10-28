// rea decompile_all
// name: Mono.Security.X509.X509Certificate$$get_DSA
// address: 0x73f50c8
// body: available
// range: 0x73f50c8-0x73f53ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f53a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f53a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_X509Certificate__get_DSA(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09520e4a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_091831d8);
    FUN_03f5c2a4(&DAT_091f97c8);
    DAT_09520e4a = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar8 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09207f80);
    System_Security_Cryptography_CryptographicException___ctor(uVar8,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091df410);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar6);
  }
  plVar7 = (long *)(param_1 + 0x90);
  if ((*plVar7 == 0) &&
     (uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x40),DAT_091f97c8,0),
     (uVar2 & 1) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(lVar3,uVar8);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '\x02')) {
      uVar8 = Mono_Security_ASN1__get_Value(lVar3);
      local_98 = Mono_Security_X509_X509Certificate__GetUnsignedBigInteger(uVar8,uVar8);
      thunk_FUN_03f5d7b8(&local_98,local_98);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
      Mono_Security_ASN1___ctor(lVar3,uVar8);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '0')) {
        plVar4 = *(long **)(lVar3 + 0x20);
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
        if (2 < iVar1) {
          lVar5 = Mono_Security_ASN1__get_Item(lVar3,0);
          if (lVar5 == 0) goto LAB_073f53a8;
          if (*(char *)(lVar5 + 0x10) == '\x02') {
            lVar5 = Mono_Security_ASN1__get_Item(lVar3,1);
            if (lVar5 == 0) goto LAB_073f53a8;
            if (*(char *)(lVar5 + 0x10) == '\x02') {
              lVar5 = Mono_Security_ASN1__get_Item(lVar3,2);
              if (lVar5 == 0) goto LAB_073f53a8;
              if (*(char *)(lVar5 + 0x10) == '\x02') {
                lVar5 = Mono_Security_ASN1__get_Item(lVar3,0);
                if (lVar5 == 0) {
LAB_073f53a8:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar8 = Mono_Security_ASN1__get_Value();
                local_b0 = Mono_Security_X509_X509Certificate__GetUnsignedBigInteger(uVar8,uVar8);
                thunk_FUN_03f5d7b8(&local_b0,local_b0);
                lVar5 = Mono_Security_ASN1__get_Item(lVar3,1);
                if (lVar5 == 0) goto LAB_073f53a8;
                uVar8 = Mono_Security_ASN1__get_Value();
                uStack_a8 = Mono_Security_X509_X509Certificate__GetUnsignedBigInteger(uVar8,uVar8);
                thunk_FUN_03f5d7b8((ulong)&local_b0 | 8,uStack_a8);
                lVar3 = Mono_Security_ASN1__get_Item(lVar3,2);
                if (lVar3 == 0) goto LAB_073f53a8;
                uVar8 = Mono_Security_ASN1__get_Value();
                local_a0 = Mono_Security_X509_X509Certificate__GetUnsignedBigInteger(uVar8,uVar8);
                thunk_FUN_03f5d7b8(&local_a0,local_a0);
                lVar3 = local_98;
                if (local_98 == 0) goto LAB_073f53a8;
                lVar5 = thunk_FUN_03f9944c(DAT_091831d8);
                System_Security_Cryptography_DSACryptoServiceProvider___ctor
                          (lVar5,*(int *)(lVar3 + 0x18) << 3,0);
                *plVar7 = lVar5;
                thunk_FUN_03f5d7b8(plVar7,lVar5);
                plVar4 = (long *)*plVar7;
                if (plVar4 == (long *)0x0) goto LAB_073f53a8;
                uStack_68 = uStack_a8;
                local_70 = local_b0;
                lStack_58 = local_98;
                uStack_60 = local_a0;
                uStack_48 = uStack_88;
                local_50 = local_90;
                uStack_38 = uStack_78;
                uStack_40 = uStack_80;
                (**(code **)(*plVar4 + 0x1f8))(plVar4,&local_70,*(undefined8 *)(*plVar4 + 0x200));
                goto LAB_073f5340;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
  else {
LAB_073f5340:
    lVar3 = *plVar7;
  }
  return lVar3;
}

