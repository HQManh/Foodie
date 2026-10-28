// rea decompile_all
// name: System.Security.Cryptography.RSACryptoServiceProvider$$Common
// address: 0x7468b98
// body: available
// range: 0x7468b98-0x7468ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7468dd4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7468dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7468ddc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RSACryptoServiceProvider__Common
               (long *param_1,undefined4 param_2,byte param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_095211af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182fa8);
    FUN_03f5c2a4(&DAT_091938b8);
    FUN_03f5c2a4(&DAT_09187500);
    FUN_03f5c2a4(&DAT_09180228);
    FUN_03f5c2a4(&DAT_09187510);
    FUN_03f5c2a4(&DAT_091d6dd0);
    FUN_03f5c2a4(&DAT_09189a08);
    DAT_095211af = 1;
  }
  lVar2 = FUN_03f5c394(DAT_09180228,1);
  plVar6 = param_1 + 3;
  *plVar6 = lVar2;
  thunk_FUN_03f5d7b8(plVar6,lVar2);
  lVar2 = *plVar6;
  uVar3 = thunk_FUN_03f9944c(DAT_09187510);
  System_Security_Cryptography_KeySizes___ctor(uVar3,0x180,0x4000,8,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20),uVar3);
    System_Security_Cryptography_AsymmetricAlgorithm__set_KeySize(param_1,param_2,0);
    uVar1 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    lVar2 = thunk_FUN_03f9944c(DAT_09189a08);
    Mono_Security_Cryptography_RSAManaged___ctor(lVar2,uVar1,0);
    plVar6 = param_1 + 6;
    *plVar6 = lVar2;
    thunk_FUN_03f5d7b8(plVar6,lVar2);
    lVar2 = *plVar6;
    uVar3 = thunk_FUN_03f9944c(DAT_091938b8);
    Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor
              (uVar3,param_1,DAT_091d6dd0,0);
    if (lVar2 != 0) {
      Mono_Security_Cryptography_RSAManaged__add_KeyGenerated(lVar2,uVar3,0);
      *(byte *)(param_1 + 5) = param_3 & 1;
      if ((param_3 & 1) != 0) {
        return;
      }
      lVar2 = thunk_FUN_03f9944c(DAT_09182fa8);
      System_Security_Cryptography_CspParameters___ctor(lVar2,1,0);
      uVar4 = System_Security_Cryptography_RSACryptoServiceProvider__get_UseMachineKeyStore();
      if ((uVar4 & 1) != 0) {
        if (lVar2 == 0) goto LAB_07468dd8;
        System_Security_Cryptography_CspParameters__set_Flags(lVar2,*(uint *)(lVar2 + 0x2c) | 1,0);
      }
      lVar5 = thunk_FUN_03f9944c(DAT_09187500);
      Mono_Security_Cryptography_KeyPairPersistence___ctor(lVar5,lVar2,0);
      param_1[4] = lVar5;
      thunk_FUN_03f5d7b8(param_1 + 4,lVar5);
      return;
    }
  }
LAB_07468dd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

