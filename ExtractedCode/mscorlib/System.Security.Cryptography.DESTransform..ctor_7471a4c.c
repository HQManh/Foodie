// rea decompile_all
// name: System.Security.Cryptography.DESTransform$$.ctor
// address: 0x7471a4c
// body: available
// range: 0x7471a4c-0x7471c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7471b80 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7471c38 to 0x7471d60 System.Security.Cryptography.DESTransform$$SetKey (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7471c88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7471c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DESTransform___ctor
               (long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_095211fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183188);
    FUN_03f5c2a4(&DAT_09183178);
    FUN_03f5c2a4(&DAT_091807b0);
    DAT_095211fb = 1;
  }
  Mono_Security_Cryptography_SymmetricTransform___ctor(param_1,param_2,param_3 & 1,param_5,0);
  lVar7 = 0;
  if (param_4 == 0) {
    if (*(int *)(DAT_09183188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Security_Cryptography_DESTransform__GetStrongKey();
    param_4 = lVar7;
  }
  if (*(int *)(DAT_09183178 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Security_Cryptography_DES__IsWeakKey(param_4,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09183178 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Security_Cryptography_DES__IsSemiWeakKey(param_4,0);
    if ((uVar3 & 1) == 0) {
      if (lVar7 == 0) {
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = System_Array__Clone(param_4,0);
        uVar5 = DAT_0917fc88;
        if (lVar4 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_03f99350(lVar4,DAT_0917fc88);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar4,uVar5);
          }
        }
      }
      if (*(int *)(DAT_09183188 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = FUN_03f5c394(DAT_0917fc88,*(int *)(*(long *)(DAT_09183188 + 0xb8) + 4) << 4);
      *(undefined8 *)(param_1 + 0x58) = uVar5;
      thunk_FUN_03f5d7b8();
      uVar5 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(*(long *)(DAT_09183188 + 0xb8) + 0xc));
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      thunk_FUN_03f5d7b8();
      iVar2 = *(int *)(*(long *)(DAT_09183188 + 0xb8) + 0xc);
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      uVar5 = FUN_03f5c394(DAT_091807b0,iVar1 >> 2);
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      thunk_FUN_03f5d7b8();
      System_Security_Cryptography_DESTransform__SetKey(param_1,lVar7);
      return;
    }
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_092106b8);
  uVar5 = Locale__GetText(uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09182f98);
  uVar6 = thunk_FUN_03f9944c();
  System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c7120);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

