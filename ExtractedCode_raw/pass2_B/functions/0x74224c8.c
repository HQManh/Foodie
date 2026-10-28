// rea decompile_all
// name: Mono.Security.Cryptography.PKCS1$$Encode_v15
// address: 0x74224c8
// body: available
// range: 0x74224c8-0x742283b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74227c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74227c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7422838 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Cryptography_PKCS1__Encode_v15(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  if ((DAT_09520f9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e20);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182f88);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09520f9a = 1;
  }
  if ((param_2 != 0) && (param_1 != (long *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if (*(int *)(param_2 + 0x18) != iVar1 >> 3) {
      FUN_039b1d98(param_1);
      uVar2 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      uVar5 = thunk_FUN_03fc39d4(&DAT_09217de0);
      uVar2 = System_String__Concat(uVar5,uVar2,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar5 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091d56b8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar2);
    }
    uVar2 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    if (*(int *)(DAT_09182f88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182f88);
    }
    lVar3 = System_Security_Cryptography_CryptoConfig__MapNameToOID(uVar2,0);
    lVar4 = param_2;
    if (lVar3 != 0) {
      lVar4 = thunk_FUN_03f9944c(DAT_09180e20);
      System_Object___ctor(lVar4,0);
      *(undefined1 *)(lVar4 + 0x10) = 0x30;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),0);
      if (*(int *)(DAT_09182f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Security_Cryptography_CryptoConfig__EncodeOID(lVar3,0);
      uVar5 = thunk_FUN_03f9944c(DAT_09180e20);
      Mono_Security_ASN1___ctor(uVar5,uVar2);
      Mono_Security_ASN1__Add(lVar4,uVar5);
      lVar3 = thunk_FUN_03f9944c(DAT_09180e20);
      System_Object___ctor(lVar3,0);
      *(undefined1 *)(lVar3 + 0x10) = 5;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),0);
      Mono_Security_ASN1__Add(lVar4,lVar3);
      lVar3 = thunk_FUN_03f9944c(DAT_09180e20);
      System_Object___ctor(lVar3,0);
      *(undefined1 *)(lVar3 + 0x10) = 4;
      *(long *)(lVar3 + 0x18) = param_2;
      thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_2);
      plVar6 = (long *)thunk_FUN_03f9944c(DAT_09180e20);
      System_Object___ctor(plVar6,0);
      *(undefined1 *)(plVar6 + 2) = 0x30;
      plVar6[3] = 0;
      thunk_FUN_03f5d7b8(plVar6 + 3,0);
      Mono_Security_ASN1__Add(plVar6,lVar4);
      Mono_Security_ASN1__Add(plVar6,lVar3);
      lVar4 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (lVar4 == 0) goto LAB_074227c8;
    }
    System_Buffer__BlockCopy
              (param_2,0,lVar4,*(int *)(lVar4 + 0x18) - *(int *)(param_2 + 0x18),
               *(int *)(param_2 + 0x18),0);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_Math__Max(8,(param_3 - *(int *)(lVar4 + 0x18)) + -3,0);
    lVar3 = FUN_03f5c394(DAT_0917fc88,iVar1 + 3 + *(int *)(lVar4 + 0x18));
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 0x18);
      if ((uVar8 & 0xfffffffe) != 0) {
        *(undefined1 *)(lVar3 + 0x21) = 1;
        if (2 < (int)(iVar1 + 2U)) {
          lVar7 = 0;
          do {
            if ((uVar8 & 0xffffffff) <= lVar7 + 2U) goto LAB_074227c4;
            *(undefined1 *)(lVar3 + 0x22 + lVar7) = 0xff;
            lVar7 = lVar7 + 1;
          } while ((ulong)(iVar1 + 2U) - 2 != lVar7);
        }
        System_Buffer__BlockCopy(lVar4,0,lVar3,iVar1 + 3,*(undefined4 *)(lVar4 + 0x18),0);
        return lVar3;
      }
LAB_074227c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_074227c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

