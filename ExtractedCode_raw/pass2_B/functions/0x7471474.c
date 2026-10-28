// rea decompile_all
// name: System.Security.Cryptography.CryptoConfig$$EncodeOID
// address: 0x7471474
// body: available
// range: 0x7471474-0x74717a7 inclusive
// range: 0x74717f8-0x747183f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7471730 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7471734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747177c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747178c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7471790 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7471794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7471798 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747183c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_Cryptography_CryptoConfig__EncodeOID(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_095211f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182f88);
    DAT_095211f8 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09223590);
    System_ArgumentNullException___ctor(uVar10,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c6b98);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar8);
  }
  lVar4 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07471730;
    *(undefined2 *)(lVar4 + 0x20) = 0x2e;
    lVar4 = System_String__Split(param_1,lVar4,0);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) < 2) {
        puVar7 = &DAT_09209338;
LAB_074717f8:
        uVar10 = thunk_FUN_03fc39d4(puVar7);
        uVar10 = Locale__GetText(uVar10,0);
        thunk_FUN_03fc39d4(&DAT_09182fa0);
        uVar8 = thunk_FUN_03f9944c();
        System_Security_Cryptography_CryptographicUnexpectedOperationException___ctor
                  (uVar8,uVar10,0);
        uVar10 = thunk_FUN_03fc39d4(&DAT_091c6b98);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar10);
      }
      lVar5 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x10));
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Convert__ToByte(uVar10,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = System_Convert__ToByte(*(undefined8 *)(lVar4 + 0x28),0);
      uVar1 = System_Convert__ToByte((uVar2 & 0xff) * 0x28 + (uVar3 & 0xff),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined1 *)(lVar5 + 0x22) = uVar1;
      if ((int)*(ulong *)(lVar4 + 0x18) < 3) {
        uVar2 = 3;
      }
      else {
        uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        uVar2 = 3;
        lVar11 = 6;
        do {
          if (uVar9 <= lVar11 - 4U) goto LAB_07471730;
          uVar10 = *(undefined8 *)(lVar4 + lVar11 * 8);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = System_Convert__ToInt64(uVar10,0);
          if (lVar6 < 0x80) {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = System_Convert__ToByte(lVar6,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_07471730;
            lVar6 = (long)(int)uVar2;
            uVar2 = uVar2 + 1;
            *(undefined1 *)(lVar5 + lVar6 + 0x20) = uVar1;
          }
          else {
            if (*(int *)(DAT_09182f88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = System_Security_Cryptography_CryptoConfig__EncodeLongNumber(lVar6);
            if (lVar6 == 0) goto LAB_07471734;
            System_Buffer__BlockCopy(lVar6,0,lVar5,uVar2,*(undefined4 *)(lVar6 + 0x18),0);
            uVar2 = uVar2 + *(int *)(lVar6 + 0x18);
          }
          uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
          lVar6 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar6 < (int)*(uint *)(lVar4 + 0x18));
      }
      lVar4 = FUN_03f5c394(DAT_0917fc88,uVar2);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined1 *)(lVar4 + 0x20) = 6;
          if (0x7f < (int)uVar2) {
            puVar7 = &DAT_09209330;
            goto LAB_074717f8;
          }
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Convert__ToByte(uVar2 - 2,0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
            *(undefined1 *)(lVar4 + 0x21) = uVar1;
            System_Buffer__BlockCopy(lVar5,2,lVar4,2,uVar2 - 2,0);
            return lVar4;
          }
        }
LAB_07471730:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_07471734:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

